#pragma once

#include <cstdint>

std::uint64_t INSTR_0x00000000_0x08000000(std::uint8_t opcode1, std::uint8_t data_format, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t unk3, std::uint8_t swz_alt_op1, std::uint8_t unk2, std::uint8_t alt_opt0, std::uint8_t abs_op1, std::uint8_t alt_opt2, std::uint8_t alt_opt3, std::uint8_t swz_alt_op3, std::uint8_t op3_swz, std::uint8_t swz_alt_op2, std::uint8_t unk1, std::uint8_t unk0, std::uint8_t swz_mask16, std::uint8_t swz_mask32, std::uint8_t swz_en, std::uint8_t abs_op2, std::uint8_t neg_op2, std::uint8_t abs_op3, std::uint8_t neg_op3, std::uint8_t opt1, std::uint8_t opt0, std::uint8_t opt2, std::uint8_t opt3, std::uint8_t op0, std::uint8_t op2_swz, std::uint8_t op1_swz, std::uint8_t op1, std::uint8_t op2, std::uint8_t op3);

std::uint64_t INSTR_0x08000000_0x10000000(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk2, std::uint8_t op1_swz_c3x, std::uint8_t unk1, std::uint8_t alt_opt0, std::uint8_t op1_swz_c30, std::uint8_t alt_opt1, std::uint8_t alt_opt2, std::uint8_t swz_alt_op2, std::uint8_t op2_swz, std::uint8_t unk0, std::uint8_t swz_mask3, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t abs_op1, std::uint8_t neg_op1, std::uint8_t abs_op2, std::uint8_t op1_swz_c2x, std::uint8_t opt0, std::uint8_t opt1, std::uint8_t opt2, std::uint8_t op0, std::uint8_t op1_swz_c20, std::uint8_t op1_swz_c1, std::uint8_t op1_swz_c0, std::uint8_t opcode2, std::uint8_t op1, std::uint8_t op2);

std::uint64_t INSTR_0x10000000_0x18000000(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk2, std::uint8_t op1_swz_c3x, std::uint8_t unk1, std::uint8_t alt_opt0, std::uint8_t op1_swz_c30, std::uint8_t alt_opt1, std::uint8_t alt_opt2, std::uint8_t swz_alt_op2, std::uint8_t op2_swz, std::uint8_t unk0, std::uint8_t swz_mask3, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t abs_op1, std::uint8_t neg_op1, std::uint8_t abs_op2, std::uint8_t op1_swz_c2x, std::uint8_t opt0, std::uint8_t opt1, std::uint8_t opt2, std::uint8_t op0, std::uint8_t op1_swz_c20, std::uint8_t op1_swz_c1, std::uint8_t op1_swz_c0, std::uint8_t opcode2, std::uint8_t op1, std::uint8_t op2);

std::uint64_t INSTR_0x18000000_0x20000000_DOT(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk12, std::uint8_t unk11, std::uint8_t opcode2, std::uint8_t unk10, std::uint8_t alt_opt0, std::uint8_t unk9, std::uint8_t alt_opt1, std::uint8_t unk8, std::uint8_t unk7, std::uint8_t abs_op2, std::uint8_t swz_en_strange1, std::uint8_t swz_en_strange0, std::uint8_t unk6, std::uint8_t swz_mask3, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t neg_op1, std::uint8_t abs_op1, std::uint8_t unk5, std::uint8_t unk4, std::uint8_t unk3, std::uint8_t opt0, std::uint8_t opt1, std::uint8_t op2i, std::uint8_t op0, std::uint8_t swz_alt_op2, std::uint8_t op2_swz, std::uint8_t unk2, std::uint8_t unk1, std::uint8_t unk0, std::uint8_t op1_swz_c2, std::uint8_t op1_swz_c1, std::uint8_t op1_swz_c0, std::uint8_t op1);

std::uint64_t INSTR_0x18000000_0x20000000_MAD(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk6, std::uint8_t swz_alt_op3_2, std::uint8_t opcode2, std::uint8_t unk5, std::uint8_t alt_opt0, std::uint8_t unk4, std::uint8_t alt_opt1, std::uint8_t unk3, std::uint8_t unk2, std::uint8_t abs_op2, std::uint8_t op0_strange1, std::uint8_t op0_strange0, std::uint8_t unk1, std::uint8_t swz_mask3, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t neg_op1, std::uint8_t abs_op1, std::uint8_t neg_op3, std::uint8_t abs_op3, std::uint8_t swz_alt_op2_2, std::uint8_t opt0, std::uint8_t opt1, std::uint8_t op2i, std::uint8_t op0, std::uint8_t swz_alt_op2_x, std::uint8_t op2_swz, std::uint8_t swz_alt_op3_x, std::uint8_t op3_swz, std::uint8_t op3i, std::uint8_t unk0, std::uint8_t swz_alt_op1, std::uint8_t op1_swz, std::uint8_t op1);

