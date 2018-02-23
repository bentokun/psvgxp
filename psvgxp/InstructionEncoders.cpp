#include "InstructionEncoders.h"

#include "BitsetUtils.hpp"

std::uint64_t INSTR_OP4_HIGHER4_0x00000000_0x08000000(
   std::uint8_t unk4, std::uint8_t unk3, std::uint8_t swz_alt_op1, std::uint8_t unk2, std::uint8_t alt_opt0, std::uint8_t abs_op1, std::uint8_t alt_opt2, std::uint8_t alt_opt3, 
   std::uint8_t swz_alt_op3, std::uint8_t op3_swz, std::uint8_t swz_alt_op2, std::uint8_t unk1, std::uint8_t unk0, std::uint8_t swz_mask16, std::uint8_t swz_mask32, 
   std::uint8_t swz_en, std::uint8_t abs_op2, std::uint8_t neg_op2, std::uint8_t abs_op3, std::uint8_t neg_op3, std::uint8_t opt1, std::uint8_t opt0)
{
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<1> unk3_t; 
   typedef NbitsToMask<1> swz_alt_op1_t;
   typedef NbitsToMask<1> unk2_t;
   typedef NbitsToMask<1> alt_opt0_t;
   typedef NbitsToMask<1> abs_op1_t;
   typedef NbitsToMask<1> alt_opt2_t;
   typedef NbitsToMask<1> alt_opt3_t;

   typedef NbitsToMask<1> swz_alt_op3_t;
   typedef NbitsToMask<2> op3_swz_t;
   typedef NbitsToMask<1> swz_alt_op2_t;
   typedef NbitsToMask<1> unk1_t;
   typedef NbitsToMask<1> unk0_t; 
   typedef NbitsToMask<1> swz_mask16_t;
   typedef NbitsToMask<1> swz_mask32_t;

   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> abs_op2_t;
   typedef NbitsToMask<1> neg_op2_t; 
   typedef NbitsToMask<1> abs_op3_t;
   typedef NbitsToMask<1> neg_op3_t; 
   typedef NbitsToMask<1> opt1_t;
   typedef NbitsToMask<2> opt0_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t opt1_masked = opt1 & opt1_t::mask;
   std::uint8_t neg_op3_masked = neg_op3 & neg_op3_t::mask;
   std::uint8_t abs_op3_masked = abs_op3 & abs_op3_t::mask;
   std::uint8_t neg_op2_masked = neg_op2 & neg_op2_t::mask;
   std::uint8_t abs_op2_masked = abs_op2 & abs_op2_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask32_masked = swz_mask32 & swz_mask32_t::mask;
   std::uint8_t swz_mask16_masked = swz_mask16 & swz_mask16_t::mask;
   std::uint8_t unk0_masked = unk0 & unk0_t::mask;
   std::uint8_t unk1_masked = unk1 & unk1_t::mask;
   std::uint8_t swz_alt_op2_masked = swz_alt_op2 & swz_alt_op2_t::mask;
   std::uint8_t op3_swz_masked = op3_swz & op3_swz_t::mask;
   std::uint8_t swz_alt_op3_masked = swz_alt_op3 & swz_alt_op3_t::mask;
   std::uint8_t alt_opt3_masked = alt_opt3 & alt_opt3_t::mask;
   std::uint8_t alt_opt2_masked = alt_opt2 & alt_opt2_t::mask;
   std::uint8_t abs_op1_masked = abs_op1 & abs_op1_t::mask;
   std::uint8_t alt_opt0_masked = alt_opt0 & alt_opt0_t::mask;
   std::uint8_t unk2_masked = unk2 & unk2_t::mask;
   std::uint8_t swz_alt_op1_masked = swz_alt_op1 & swz_alt_op1_t::mask;
   std::uint8_t unk3_masked = unk3 & unk3_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t opt1_shift = (std::uint64_t)opt1_masked << SumBits<opt0_t>::result;
   std::uint64_t neg_op3_shift = (std::uint64_t)neg_op3_masked << SumBits<opt1_t, opt0_t>::result;
   std::uint64_t abs_op3_shift = (std::uint64_t)abs_op3_masked << SumBits<neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t neg_op2_shift = (std::uint64_t)neg_op2_masked << SumBits<abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t abs_op2_shift = (std::uint64_t)abs_op2_masked << SumBits<neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t swz_mask32_shift = (std::uint64_t)swz_mask32_masked << SumBits<swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t swz_mask16_shift = (std::uint64_t)swz_mask16_masked << SumBits<swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t unk0_shift = (std::uint64_t)unk0_masked << SumBits<swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t unk1_shift = (std::uint64_t)unk1_masked << SumBits<unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t swz_alt_op2_shift = (std::uint64_t)swz_alt_op2_masked << SumBits<unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t op3_swz_shift = (std::uint64_t)op3_swz_masked << SumBits<swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t swz_alt_op3_shift = (std::uint64_t)swz_alt_op3_masked << SumBits<op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t alt_opt3_shift = (std::uint64_t)alt_opt3_masked << SumBits<swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t alt_opt2_shift = (std::uint64_t)alt_opt2_masked << SumBits<alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t abs_op1_shift = (std::uint64_t)abs_op1_masked << SumBits<alt_opt2_t, alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t alt_opt0_shift = (std::uint64_t)alt_opt0_masked << SumBits<abs_op1_t, alt_opt2_t, alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t unk2_shift = (std::uint64_t)unk2_masked << SumBits<alt_opt0_t, abs_op1_t, alt_opt2_t, alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t swz_alt_op1_shift = (std::uint64_t)swz_alt_op1_masked << SumBits<unk2_t, alt_opt0_t, abs_op1_t, alt_opt2_t, alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t unk3_shift = (std::uint64_t)unk3_masked << SumBits<swz_alt_op1_t, unk2_t, alt_opt0_t, abs_op1_t, alt_opt2_t, alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<unk3_t, swz_alt_op1_t, unk2_t, alt_opt0_t, abs_op1_t, alt_opt2_t, alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;

   return opt0_shift | opt1_shift | neg_op3_shift | abs_op3_shift | neg_op2_shift | abs_op2_shift | swz_en_shift |
          swz_mask32_shift | swz_mask16_shift | unk0_shift | unk1_shift | swz_alt_op2_shift | op3_swz_shift | swz_alt_op3_shift | 
          alt_opt3_shift | alt_opt2_shift | abs_op1_shift | alt_opt0_shift | unk2_shift | swz_alt_op1_shift | unk3_shift | unk4_shift;
}

std::uint64_t INSTR_OP4_LOWER4_0x00000000_0x08000000(
   std::uint8_t opt2, std::uint8_t opt3, std::uint8_t op0, std::uint8_t op2_swz, std::uint8_t op1_swz, std::uint8_t op1, std::uint8_t op2, std::uint8_t op3)
{
   typedef NbitsToMask<6> op3_t;
   typedef NbitsToMask<6> op2_t;
   typedef NbitsToMask<6> op1_t;
   typedef NbitsToMask<2> op1_swz_t;
   typedef NbitsToMask<2> op2_swz_t;
   typedef NbitsToMask<6> op0_t;
   typedef NbitsToMask<2> opt3_t;
   typedef NbitsToMask<2> opt2_t;

   std::uint8_t op3_masked = op3 & op3_t::mask;
   std::uint8_t op2_masked = op2 & op2_t::mask;
   std::uint8_t op1_masked = op1 & op1_t::mask;
   std::uint8_t op1_swz_masked = op1_swz & op1_swz_t::mask;
   std::uint8_t op2_swz_masked = op2_swz & op2_swz_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t opt3_masked = opt3 & opt3_t::mask;
   std::uint8_t opt2_masked = opt2 & opt2_t::mask;

   std::uint64_t op3_shift = (std::uint64_t)op3_masked << SumBits<>::result;
   std::uint64_t op2_shift = (std::uint64_t)op2_masked << SumBits<op3_t>::result;
   std::uint64_t op1_shift = (std::uint64_t) op1_masked << SumBits<op2_t, op3_t>::result;
   std::uint64_t op1_swz_shift = (std::uint64_t)op1_swz_masked << SumBits<op1_t, op2_t, op3_t>::result;
   std::uint64_t op2_swz_shift = (std::uint64_t)op2_swz_masked << SumBits<op1_swz_t, op1_t, op2_t, op3_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<op2_swz_t, op1_swz_t, op1_t, op2_t, op3_t>::result;
   std::uint64_t opt3_shift = (std::uint64_t)opt3_masked << SumBits<op0_t, op2_swz_t, op1_swz_t, op1_t, op2_t, op3_t>::result;
   std::uint64_t opt2_shift = (std::uint64_t)opt2_masked << SumBits<opt3_t, op0_t, op2_swz_t, op1_swz_t, op1_t, op2_t, op3_t>::result;

   return opt2_shift | opt3_shift | op0_shift | op2_swz_shift | op1_swz_shift | op1_shift | op2_shift | op3_shift;
}

//TODO: properly encode opcode1
//allow to change data_format and predicate
std::uint64_t INSTR_OP4_0x00000000_0x08000000(std::uint8_t opcode1,
                        std::uint8_t unk4, std::uint8_t unk3, std::uint8_t swz_alt_op1, std::uint8_t unk2, std::uint8_t alt_opt0, std::uint8_t abs_op1, std::uint8_t alt_opt2, std::uint8_t alt_opt3, 
                        std::uint8_t swz_alt_op3, std::uint8_t op3_swz, std::uint8_t swz_alt_op2, std::uint8_t unk1, std::uint8_t unk0, std::uint8_t swz_mask16, std::uint8_t swz_mask32, 
                        std::uint8_t swz_en, std::uint8_t abs_op2, std::uint8_t neg_op2, std::uint8_t abs_op3, std::uint8_t neg_op3, std::uint8_t opt1, std::uint8_t opt0,
                        std::uint8_t opt2, std::uint8_t opt3, std::uint8_t op0, std::uint8_t op2_swz, std::uint8_t op1_swz, std::uint8_t op1, std::uint8_t op2, std::uint8_t op3)
{
   std::uint64_t hi = INSTR_OP4_HIGHER4_0x00000000_0x08000000(unk4, unk3, swz_alt_op1, unk2, alt_opt0, abs_op1, alt_opt2, alt_opt3, 
                                                              swz_alt_op3, op3_swz, swz_alt_op2, unk1, unk0, swz_mask16, swz_mask32, 
                                                              swz_en, abs_op2, neg_op2, abs_op3, neg_op3, opt1, opt0);
   
   std::uint64_t lo = INSTR_OP4_LOWER4_0x00000000_0x08000000(opt2, opt3, op0, op2_swz, op1_swz, op1, op2, op3);

   std::uint8_t opcode_masked = opcode1 & 0x1F;
   std::uint64_t opcode_shift = (std::uint64_t)opcode1 << 59;

   return opcode_shift | (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_OP3_HIGHER4_0x08000000_0x10000000(
   std::uint8_t unk2, std::uint8_t op1_swz_c3x, std::uint8_t unk1, std::uint8_t alt_op0, std::uint8_t op1_swz_c30, std::uint8_t alt_op1, std::uint8_t alt_op2,
   std::uint8_t swz_alt_op2, std::uint8_t op2_swz, std::uint8_t unk0, std::uint8_t swz_mask3, std::uint8_t swz_mask2, std::uint8_t swz_mask1,
   std::uint8_t swz_en, std::uint8_t abs_op1, std::uint8_t neg_op1, std::uint8_t abs_op2, std::uint8_t op1_swz_c2x, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op1_swz_c2x_t;
   typedef NbitsToMask<1> abs_op2_t;
   typedef NbitsToMask<1> neg_op1_t;
   typedef NbitsToMask<1> abs_op1_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<1> swz_mask3_t;
   typedef NbitsToMask<1> unk0_t;
   typedef NbitsToMask<2> op2_swz_t;
   typedef NbitsToMask<2> swz_alt_op2_t;
   typedef NbitsToMask<1> alt_op2_t;
   typedef NbitsToMask<1> alt_op1_t;
   typedef NbitsToMask<1> op1_swz_c30_t;
   typedef NbitsToMask<1> alt_op0_t;
   typedef NbitsToMask<1> unk1_t;
   typedef NbitsToMask<2> op1_swz_c3x_t;
   typedef NbitsToMask<1> unk2_t;

   /*
   std::uint8_t opt0
   std::uint8_t op1_swz_c2x
   std::uint8_t abs_op2
   std::uint8_t neg_op1
   std::uint8_t abs_op1
   std::uint8_t swz_en
   std::uint8_t swz_mask1
   std::uint8_t swz_mask2
   std::uint8_t swz_mask3
   std::uint8_t unk0
   std::uint8_t op2_swz
   std::uint8_t swz_alt_op2
   std::uint8_t alt_op2
   std::uint8_t alt_op1
   std::uint8_t op1_swz_c30
   std::uint8_t alt_op0
   std::uint8_t unk1
   std::uint8_t op1_swz_c3x
   std::uint8_t unk2
   */

   return 0;
}

std::uint64_t INSTR_OP3_LOWER4_0x08000000_0x10000000(
   std::uint8_t opt1, std::uint8_t opt2, std::uint8_t op0, std::uint8_t op1_swz_c20, std::uint8_t op1_swz_c1, std::uint8_t op1_swz_c0, std::uint8_t opcode2, std::uint8_t op1, std::uint8_t op2)
{
   typedef NbitsToMask<6> op2_t;
   typedef NbitsToMask<6> op1_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<3> op1_swz_c0_t;
   typedef NbitsToMask<3> op1_swz_c1_t;
   typedef NbitsToMask<1> op1_swz_c20_t;
   typedef NbitsToMask<6> op0_t;
   typedef NbitsToMask<2> opt2_t;
   typedef NbitsToMask<2> opt1_t;

   std::uint8_t op2_masked = op2 & op2_t::mask;
   std::uint8_t op1_masked = op1 & op1_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t op1_swz_c0_masked = op1_swz_c0 & op1_swz_c0_t::mask;
   std::uint8_t op1_swz_c1_masked = op1_swz_c1 & op1_swz_c1_t::mask;
   std::uint8_t op1_swz_c20_masked = op1_swz_c20 & op1_swz_c20_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t opt2_masked = opt2 & opt2_t::mask;
   std::uint8_t opt1_masked = opt1 & opt1_t::mask;

   std::uint64_t op2_shift = (std::uint64_t)op2_masked << SumBits<>::result;
   std::uint64_t op1_shift = (std::uint64_t)op1_masked << SumBits<op2_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<op1_t, op2_t>::result;
   std::uint64_t op1_swz_c0_shift = (std::uint64_t)op1_swz_c0_masked << SumBits<opcode2_t, op1_t, op2_t>::result;
   std::uint64_t op1_swz_c1_shift = (std::uint64_t)op1_swz_c1_masked << SumBits<op1_swz_c0_t, opcode2_t, op1_t, op2_t>::result;
   std::uint64_t op1_swz_c20_shift = (std::uint64_t)op1_swz_c20_masked << SumBits<op1_swz_c1_t, op1_swz_c0_t, opcode2_t, op1_t, op2_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<op1_swz_c20_t, op1_swz_c1_t, op1_swz_c0_t, opcode2_t, op1_t, op2_t>::result;
   std::uint64_t opt2_shift = (std::uint64_t)opt2_masked << SumBits<op0_t, op1_swz_c20_t, op1_swz_c1_t, op1_swz_c0_t, opcode2_t, op1_t, op2_t>::result;
   std::uint64_t opt1_shift = (std::uint64_t)opt1_masked << SumBits<opt2_t, op0_t, op1_swz_c20_t, op1_swz_c1_t, op1_swz_c0_t, opcode2_t, op1_t, op2_t>::result; 

   return op2_shift | op1_shift | opcode2_shift | op1_swz_c0_shift | op1_swz_c1_shift | op1_swz_c20_shift | op0_shift | opt2_shift | opt1_shift;
}

std::uint64_t INSTR_OP3_0x08000000_0x10000000()
{
   return 0;
}