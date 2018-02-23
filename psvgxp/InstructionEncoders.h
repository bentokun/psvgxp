#pragma once

#include <cstdint>

std::uint64_t INSTR_OP4_0x00000000_0x08000000(std::uint8_t opcode1,
                        std::uint8_t unk4, std::uint8_t unk3, std::uint8_t swz_alt_op1, std::uint8_t unk2, std::uint8_t alt_opt0, std::uint8_t abs_op1, std::uint8_t alt_opt2, std::uint8_t alt_opt3, 
                        std::uint8_t swz_alt_op3, std::uint8_t op3_swz, std::uint8_t swz_alt_op2, std::uint8_t unk1, std::uint8_t unk0, std::uint8_t swz_mask16, std::uint8_t swz_mask32, 
                        std::uint8_t swz_en, std::uint8_t abs_op2, std::uint8_t neg_op2, std::uint8_t abs_op3, std::uint8_t neg_op3, std::uint8_t opt1, std::uint8_t opt0,
                        std::uint8_t opt2, std::uint8_t opt3, std::uint8_t op0, std::uint8_t op2_swz, std::uint8_t op1_swz, std::uint8_t op1, std::uint8_t op2, std::uint8_t op3);