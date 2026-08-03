#!/usr/bin/env python3
"""Inspect Burnout 3's CRT initializer table for global-memory references."""

import argparse
import json
import struct
from pathlib import Path

from capstone import CS_ARCH_X86, CS_MODE_32, Cs
from capstone.x86 import X86_OP_IMM, X86_OP_MEM


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("xbe", type=Path)
    parser.add_argument("--analysis", type=Path, required=True)
    parser.add_argument("--low", type=lambda value: int(value, 0), default=0x550000)
    parser.add_argument("--high", type=lambda value: int(value, 0), default=0x560000)
    parser.add_argument("--scan", type=lambda value: int(value, 0), default=512)
    args = parser.parse_args()

    xbe = args.xbe.read_bytes()
    analysis = json.loads(args.analysis.read_text())
    def number(value):
        return int(value, 0) if isinstance(value, str) else int(value)

    sections = [
        (
            number(section["virtual_addr"]),
            number(section["raw_size"]),
            number(section["raw_addr"]),
        )
        for section in analysis["sections"]
    ]

    def va_to_offset(va: int):
        for base, size, raw in sections:
            if base <= va < base + size:
                return raw + va - base
        return None

    table_start = va_to_offset(0x3B2370)
    table_end = va_to_offset(0x3BFDA8)
    if table_start is None or table_end is None:
        raise RuntimeError("CRT initializer table is not in an XBE raw section")

    initializers = []
    for offset in range(table_start, table_end, 4):
        address = struct.unpack_from("<I", xbe, offset)[0]
        if address not in (0, 0xFFFFFFFF):
            initializers.append(address)

    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    hits = 0
    for index, address in enumerate(initializers):
        offset = va_to_offset(address)
        if offset is None:
            continue
        for instruction in md.disasm(xbe[offset : offset + args.scan], address):
            references = []
            for operand in instruction.operands:
                if operand.type == X86_OP_IMM:
                    references.append(operand.imm & 0xFFFFFFFF)
                elif (
                    operand.type == X86_OP_MEM
                    and operand.mem.base == 0
                    and operand.mem.index == 0
                ):
                    references.append(operand.mem.disp & 0xFFFFFFFF)
            relevant = [value for value in references if args.low <= value < args.high]
            if relevant:
                refs = ",".join(f"{value:08X}" for value in relevant)
                print(
                    f"{index:5d} init={address:08X} pc={instruction.address:08X} "
                    f"{instruction.mnemonic:7s} {instruction.op_str:35s} refs={refs}"
                )
                hits += 1
            if instruction.mnemonic.startswith("ret"):
                break

    print(f"hits={hits} initializers={len(initializers)}")


if __name__ == "__main__":
    main()
