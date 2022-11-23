// DO NOT EDIT
// This file was automatically generated from an ISA description:
//   riscv/isa/main.isa


using namespace gem5;
StaticInstPtr
RiscvISA::Decoder::decodeInst(RiscvISA::ExtMachInst machInst)
{
    using namespace RiscvISAInst;
  switch (QUADRANT) {
    
    case 0x0: 
      switch (COPCODE) {
        
        case 0x0:   
          // CIAddi4spnOp::c_addi4spn((['\n            imm = CIMM8<1:1> << 2 |\n                  CIMM8<0:0> << 3 |\n                  CIMM8<7:6> << 4 |\n                  CIMM8<5:2> << 6;\n        ', '\n            if (machInst == 0)\n                return std::make_shared<IllegalInstFault>("zero instruction",\n                                                           machInst);\n            Rp2 = sp + imm;\n        ', 'uint64_t'], {}))
          
              return new C_addi4spn(machInst);
          break;
        
        case 0x1:   
          // CompressedLoad::c_fld(['\n                offset = CIMM3 << 3 | CIMM2 << 6;\n            ', '\n                STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                if (status.fs == FPUStatus::OFF)\n                    return std::make_shared<IllegalInstFault>("FPU is off",\n                                                               machInst);\n\n                Fp2_bits = Mem;\n            ', '\n                EA = Rp1 + offset;\n            '],{})
          
              return new C_fld(machInst);
          break;
        
        case 0x2:   
          // CompressedLoad::c_lw(['\n                offset = CIMM2<1:1> << 2 |\n                         CIMM3 << 3 |\n                         CIMM2<0:0> << 6;\n            ', '\n                Rp2_sd = Mem_sw;\n            ', '\n                EA = Rp1 + offset;\n            '],{})
          
              return new C_lw(machInst);
          break;
        
        case 0x3:   
          // CompressedLoad::c_ld(['\n                offset = CIMM3 << 3 | CIMM2 << 6;\n            ', '\n                Rp2_sd = Mem_sd;\n            ', '\n                EA = Rp1 + offset;\n            '],{})
          
              return new C_ld(machInst);
          break;
        
        case 0x5:   
          // CompressedStore::c_fsd(['\n                offset = CIMM3 << 3 | CIMM2 << 6;\n            ', '\n                STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                if (status.fs == FPUStatus::OFF)\n                    return std::make_shared<IllegalInstFault>("FPU is off",\n                                                               machInst);\n\n                Mem = Fp2_bits;\n            ', '\n                EA = Rp1 + offset;\n            '],{})
          
              return new C_fsd(machInst);
          break;
        
        case 0x6:   
          // CompressedStore::c_sw(['\n                offset = CIMM2<1:1> << 2 |\n                         CIMM3 << 3 |\n                         CIMM2<0:0> << 6;\n            ', '\n                Mem_uw = Rp2_uw;\n            '],{'ea_code': '\n                EA = Rp1 + offset;\n            '})
          
              return new C_sw(machInst);
          break;
        
        case 0x7:   
          // CompressedStore::c_sd(['\n                offset = CIMM3 << 3 | CIMM2 << 6;\n            ', '\n                    Mem_ud = Rp2_ud;\n            ', '\n                EA = Rp1 + offset;\n            '],{})
          
              return new C_sd(machInst);
          break;
        
        default:
          
          // Unknown::unknown(([], {}))
          return new Unknown(machInst);
          break;
        }
      GEM5_UNREACHABLE;
    
    case 0x1: 
      switch (COPCODE) {
        
        case 0x0:   
          // CIOp::c_addi(['\n                imm = CIMM5;\n                if (CIMM1 > 0)\n                    imm |= ~((uint64_t)0x1F);\n            ', '\n                if ((RC1 == 0) != (imm == 0)) {\n                    if (RC1 == 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x0", machInst);\n                    } else { // imm == 0\n                        return std::make_shared<IllegalInstFault>(\n                                "immediate = 0", machInst);\n                    }\n                }\n                Rc1_sd = Rc1_sd + imm;\n            '],{})
          
              return new C_addi(machInst);
          break;
        
        case 0x1:   
          // CIOp::c_addiw(['\n                imm = CIMM5;\n                if (CIMM1 > 0)\n                    imm |= ~((uint64_t)0x1F);\n            ', '\n                if (RC1 == 0) {\n                    return std::make_shared<IllegalInstFault>(\n                            "source reg x0", machInst);\n                }\n                Rc1_sw = (int32_t)(Rc1_sw + imm);\n            '],{})
          
              return new C_addiw(machInst);
          break;
        
        case 0x2:   
          // CIOp::c_li(['\n                imm = CIMM5;\n                if (CIMM1 > 0)\n                    imm |= ~((uint64_t)0x1F);\n            ', '\n                if (RC1 == 0) {\n                    return std::make_shared<IllegalInstFault>(\n                            "source reg x0", machInst);\n                }\n                Rc1_sd = imm;\n            '],{})
          
              return new C_li(machInst);
          break;
        
        case 0x3: 
          switch (RC1) {
            
            case 0x2:   
              // CIOp::c_addi16sp(['\n                    imm = CIMM5<4:4> << 4 |\n                          CIMM5<0:0> << 5 |\n                          CIMM5<3:3> << 6 |\n                          CIMM5<2:1> << 7;\n                    if (CIMM1 > 0)\n                        imm |= ~((int64_t)0x1FF);\n                ', '\n                    if (imm == 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "immediate = 0", machInst);\n                    }\n                    sp_sd = sp_sd + imm;\n                '],{})
              
                  return new C_addi16sp(machInst);
              break;
            
            default:  
              // CIOp::c_lui(['\n                    imm = CIMM5 << 12;\n                    if (CIMM1 > 0)\n                        imm |= ~((uint64_t)0x1FFFF);\n                ', '\n                    if (RC1 == 0 || RC1 == 2) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x0", machInst);\n                    }\n                    if (imm == 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "immediate = 0", machInst);\n                    }\n                    Rc1_sd = imm;\n                '],{})
              
                  return new C_lui(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x4: 
          switch (CFUNCT2HIGH) {
            
            case 0x0:   
              // CIOp::c_srli(['\n                    imm = CIMM5 | (CIMM1 << 5);\n                ', '\n                    if (imm == 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "immediate = 0", machInst);\n                    }\n                    Rp1 = Rp1 >> imm;\n                ', 'uint64_t'],{})
              
                  return new C_srli(machInst);
              break;
            
            case 0x1:   
              // CIOp::c_srai(['\n                    imm = CIMM5 | (CIMM1 << 5);\n                ', '\n                    if (imm == 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "immediate = 0", machInst);\n                    }\n                    Rp1_sd = Rp1_sd >> imm;\n                ', 'uint64_t'],{})
              
                  return new C_srai(machInst);
              break;
            
            case 0x2:   
              // CIOp::c_andi(['\n                    imm = CIMM5;\n                    if (CIMM1 > 0)\n                        imm |= ~((uint64_t)0x1F);\n                ', '\n                    Rp1 = Rp1 & imm;\n                ', 'uint64_t'],{})
              
                  return new C_andi(machInst);
              break;
            
            case 0x3: 
              switch (CFUNCT1) {
                
                case 0x0: 
                  switch (CFUNCT2LOW) {
                    
                    case 0x0:   
                      // CompressedROp::c_sub(['\n                            Rp1 = Rp1 - Rp2;\n                        '],{})
                      
                          return new C_sub(machInst);
                      break;
                    
                    case 0x1:   
                      // CompressedROp::c_xor(['\n                            Rp1 = Rp1 ^ Rp2;\n                        '],{})
                      
                          return new C_xor(machInst);
                      break;
                    
                    case 0x2:   
                      // CompressedROp::c_or(['\n                            Rp1 = Rp1 | Rp2;\n                        '],{})
                      
                          return new C_or(machInst);
                      break;
                    
                    case 0x3:   
                      // CompressedROp::c_and(['\n                            Rp1 = Rp1 & Rp2;\n                        '],{})
                      
                          return new C_and(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1: 
                  switch (CFUNCT2LOW) {
                    
                    case 0x0:   
                      // CompressedROp::c_subw(['\n                            Rp1_sd = (int32_t)Rp1_sd - Rp2_sw;\n                        '],{})
                      
                          return new C_subw(machInst);
                      break;
                    
                    case 0x1:   
                      // CompressedROp::c_addw(['\n                            Rp1_sd = (int32_t)Rp1_sd + Rp2_sw;\n                        '],{})
                      
                          return new C_addw(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x5:   
          // CJOp::c_j((['\n            NPC = PC + imm;\n        ', 'IsDirectControl', 'IsUncondControl'], {}))
          
              return new C_j(machInst);
          break;
        
        case 0x6:   
          // CBOp::c_beqz(['\n                if (Rp1 == 0)\n                    NPC = PC + imm;\n                else\n                    NPC = NPC;\n            ', 'IsDirectControl', 'IsCondControl'],{})
          
              return new C_beqz(machInst);
          break;
        
        case 0x7:   
          // CBOp::c_bnez(['\n                if (Rp1 != 0)\n                    NPC = PC + imm;\n                else\n                    NPC = NPC;\n            ', 'IsDirectControl', 'IsCondControl'],{})
          
              return new C_bnez(machInst);
          break;
        
        default:
          
          // Unknown::unknown(([], {}))
          return new Unknown(machInst);
          break;
        }
      GEM5_UNREACHABLE;
    
    case 0x2: 
      switch (COPCODE) {
        
        case 0x0:   
          // CIOp::c_slli((['\n            imm = CIMM5 | (CIMM1 << 5);\n        ', '\n            if (imm == 0) {\n                return std::make_shared<IllegalInstFault>(\n                        "immediate = 0", machInst);\n            }\n            if (RC1 == 0) {\n                return std::make_shared<IllegalInstFault>(\n                        "source reg x0", machInst);\n            }\n            Rc1 = Rc1 << imm;\n        ', 'uint64_t'], {}))
          
              return new C_slli(machInst);
          break;
        
        case 0x1:   
          // CompressedLoad::c_fldsp(['\n                offset = CIMM5<4:3> << 3 |\n                         CIMM1 << 5 |\n                         CIMM5<2:0> << 6;\n            ', '\n                Fc1_bits = Mem;\n            ', '\n                EA = sp + offset;\n            '],{})
          
              return new C_fldsp(machInst);
          break;
        
        case 0x2:   
          // CompressedLoad::c_lwsp(['\n                offset = CIMM5<4:2> << 2 |\n                         CIMM1 << 5 |\n                         CIMM5<1:0> << 6;\n            ', '\n                if (RC1 == 0) {\n                    return std::make_shared<IllegalInstFault>(\n                            "source reg x0", machInst);\n                }\n                Rc1_sd = Mem_sw;\n            ', '\n                EA = sp + offset;\n            '],{})
          
              return new C_lwsp(machInst);
          break;
        
        case 0x3:   
          // CompressedLoad::c_ldsp(['\n                offset = CIMM5<4:3> << 3 |\n                         CIMM1 << 5 |\n                         CIMM5<2:0> << 6;\n            ', '\n                if (RC1 == 0) {\n                    return std::make_shared<IllegalInstFault>(\n                            "source reg x0", machInst);\n                }\n                Rc1_sd = Mem_sd;\n            ', '\n                EA = sp + offset;\n            '],{})
          
              return new C_ldsp(machInst);
          break;
        
        case 0x4: 
          switch (CFUNCT1) {
            
            case 0x0: 
              switch (RC2) {
                
                case 0x0:   
                  // Jump::c_jr((['\n                    if (RC1 == 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x0", machInst);\n                    }\n                    NPC = Rc1;\n                ', 'IsIndirectControl', 'IsUncondControl'], {}))
                  
                      return new C_jr(machInst);
                  break;
                
                default:  
                  // CROp::c_mv((['\n                    if (RC1 == 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x0", machInst);\n                    }\n                    Rc1 = Rc2;\n                '], {}))
                  
                      return new C_mv(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x1: 
              switch (RC1) {
                
                case 0x0:   
                  // SystemOp::c_ebreak((['\n                    if (RC2 != 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x1", machInst);\n                    }\n                    return std::make_shared<BreakpointFault>(xc->pcState());\n                ', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'], {}))
                  
                      return new C_ebreak(machInst);
                  break;
                
                default:
                  switch (RC2) {
                    
                    case 0x0:   
                      // Jump::c_jalr((['\n                        if (RC1 == 0) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "source reg x0", machInst);\n                        }\n                        ra = NPC;\n                        NPC = Rc1;\n                    ', 'IsIndirectControl', 'IsUncondControl', 'IsCall'], {}))
                      
                          return new C_jalr(machInst);
                      break;
                    
                    default:  
                      // CompressedROp::c_add((['\n                        Rc1_sd = Rc1_sd + Rc2_sd;\n                    '], {}))
                      
                          return new C_add(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x5:   
          // CompressedStore::c_fsdsp(['\n                offset = CIMM6<5:3> << 3 |\n                         CIMM6<2:0> << 6;\n            ', '\n                Mem_ud = Fc2_bits;\n            ', '\n                EA = sp + offset;\n            '],{})
          
              return new C_fsdsp(machInst);
          break;
        
        case 0x6:   
          // CompressedStore::c_swsp(['\n                offset = CIMM6<5:2> << 2 |\n                         CIMM6<1:0> << 6;\n            ', '\n                Mem_uw = Rc2_uw;\n            ', '\n                EA = sp + offset;\n            '],{})
          
              return new C_swsp(machInst);
          break;
        
        case 0x7:   
          // CompressedStore::c_sdsp(['\n                offset = CIMM6<5:3> << 3 |\n                         CIMM6<2:0> << 6;\n            ', '\n                Mem = Rc2;\n            ', '\n                EA = sp + offset;\n            '],{})
          
              return new C_sdsp(machInst);
          break;
        
        default:
          
          // Unknown::unknown(([], {}))
          return new Unknown(machInst);
          break;
        }
      GEM5_UNREACHABLE;
    
    case 0x3: 
      switch (OPCODE) {
        
        case 0x0: 
          switch (FUNCT3) {
            
            case 0x0:   
              // Load::lb(['\n                    Rd_sd = Mem_sb;\n                '],{})
              
                  return new Lb(machInst);
              break;
            
            case 0x1:   
              // Load::lh(['\n                    Rd_sd = Mem_sh;\n                '],{})
              
                  return new Lh(machInst);
              break;
            
            case 0x2:   
              // Load::lw(['\n                    Rd_sd = Mem_sw;\n                '],{})
              
                  return new Lw(machInst);
              break;
            
            case 0x3:   
              // Load::ld(['\n                    Rd_sd = Mem_sd;\n                '],{})
              
                  return new Ld(machInst);
              break;
            
            case 0x4:   
              // Load::lbu(['\n                    Rd = Mem_ub;\n                '],{})
              
                  return new Lbu(machInst);
              break;
            
            case 0x5:   
              // Load::lhu(['\n                    Rd = Mem_uh;\n                '],{})
              
                  return new Lhu(machInst);
              break;
            
            case 0x6:   
              // Load::lwu(['\n                    Rd = Mem_uw;\n                '],{})
              
                  return new Lwu(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x1: 
          switch (FUNCT3) {
            
            case 0x1:   
              // Load::flh(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                    "FPU is off", machInst);\n                    freg_t fd;\n                    fd = freg(f16(Mem_uh));\n                    Fd_bits = fd.v;\n                '],{'inst_flags': 'FloatMemReadOp'})
              
                  return new Flh(machInst);
              break;
            
            case 0x2:   
              // Load::flw(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                    "FPU is off", machInst);\n                    freg_t fd;\n                    fd = freg(f32(Mem_uw));\n                    Fd_bits = fd.v;\n                '],{'inst_flags': 'FloatMemReadOp'})
              
                  return new Flw(machInst);
              break;
            
            case 0x3:   
              // Load::fld(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                    "FPU is off", machInst);\n                    freg_t fd;\n                    fd = freg(f64(Mem));\n                    Fd_bits = fd.v;\n                '],{'inst_flags': 'FloatMemReadOp'})
              
                  return new Fld(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x3: 
          switch (FUNCT3) {
            
            case 0x0:   
              // FenceOp::fence(['\n                ', 'uint64_t', 'IsReadBarrier', 'IsWriteBarrier', 'No_OpClass'],{})
              
                  return new Fence(machInst);
              break;
            
            case 0x1:   
              // FenceOp::fence_i(['\n                ', 'uint64_t', 'IsNonSpeculative', 'IsSerializeAfter', 'No_OpClass'],{})
              
                  return new Fence_i(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x4: 
          switch (FUNCT3) {
            
            case 0x1: 
              switch (FS3) {
                
                case 0x0:   
                  // IOp::slli(['\n                        Rd = Rs1 << imm;\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Slli(machInst);
                  break;
                
                case 0x5:   
                  // IOp::bseti(['\n                        uint64_t index = imm & (64 - 1);\n                        Rd = Rs1 | (UINT64_C(1) << index);\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Bseti(machInst);
                  break;
                
                case 0x9:   
                  // IOp::bclri(['\n                        uint64_t index = imm & (64 - 1);\n                        Rd = Rs1 & (~(UINT64_C(1) << index));\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Bclri(machInst);
                  break;
                
                case 0xd:   
                  // IOp::binvi(['\n                        uint64_t index = imm & (64 - 1);\n                        Rd = Rs1 ^ (UINT64_C(1) << index);\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Binvi(machInst);
                  break;
                
                case 0xc: 
                  switch (RS2) {
                    
                    case 0x0:   
                      // ROp::clz(['\n                            Rd = clz64(Rs1);\n                        '],{})
                      
                          return new Clz(machInst);
                      break;
                    
                    case 0x1:   
                      // ROp::ctz(['\n                            Rd = ctz64(Rs1);\n                        '],{})
                      
                          return new Ctz(machInst);
                      break;
                    
                    case 0x2:   
                      // ROp::cpop(['\n                            Rd = popCount(Rs1);\n                        '],{})
                      
                          return new Cpop(machInst);
                      break;
                    
                    case 0x4:   
                      // ROp::sextb(['\n                            Rd = sext<8>(Rs1_ub);\n                        '],{})
                      
                          return new Sextb(machInst);
                      break;
                    
                    case 0x5:   
                      // ROp::sexth(['\n                            Rd = sext<16>(Rs1_uh);\n                        '],{})
                      
                          return new Sexth(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x0:   
              // IOp::addi(['\n                    Rd_sd = Rs1_sd + imm;\n                '],{})
              
                  return new Addi(machInst);
              break;
            
            case 0x2:   
              // IOp::slti(['\n                    Rd = (Rs1_sd < imm) ? 1 : 0;\n                '],{})
              
                  return new Slti(machInst);
              break;
            
            case 0x3:   
              // IOp::sltiu(['\n                    Rd = (Rs1 < imm) ? 1 : 0;\n                ', 'uint64_t'],{})
              
                  return new Sltiu(machInst);
              break;
            
            case 0x4:   
              // IOp::xori(['\n                    Rd = Rs1 ^ imm;\n                ', 'uint64_t'],{})
              
                  return new Xori(machInst);
              break;
            
            case 0x5: 
              switch (FS3) {
                
                case 0x0:   
                  // IOp::srli(['\n                        Rd = Rs1 >> imm;\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Srli(machInst);
                  break;
                
                case 0x5:   
                  // IOp::orcb(['\n                        Rd = 0;\n                        Rd |= (Rs1<7:0> ? UINT64_C(0xff) : 0x0);\n                        Rd |= (Rs1<15:8> ? UINT64_C(0xff) : 0x0) << 8;\n                        Rd |= (Rs1<23:16> ? UINT64_C(0xff) : 0x0) << 16;\n                        Rd |= (Rs1<31:24> ? UINT64_C(0xff) : 0x0) << 24;\n                        Rd |= (Rs1<39:32> ? UINT64_C(0xff) : 0x0) << 32;\n                        Rd |= (Rs1<47:40> ? UINT64_C(0xff) : 0x0) << 40;\n                        Rd |= (Rs1<55:48> ? UINT64_C(0xff) : 0x0) << 48;\n                        Rd |= (Rs1<63:56> ? UINT64_C(0xff) : 0x0) << 56;\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Orcb(machInst);
                  break;
                
                case 0x8:   
                  // IOp::srai(['\n                        Rd_sd = Rs1_sd >> imm;\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Srai(machInst);
                  break;
                
                case 0x9:   
                  // IOp::bexti(['\n                        uint64_t index = imm & (64 - 1);\n                        Rd = (Rs1 >> index) & 0x1;\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Bexti(machInst);
                  break;
                
                case 0xc:   
                  // IOp::rori(['\n                        Rd = (Rs1 >> imm) | (Rs1 << ((64 - imm) & (64 - 1)));\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Rori(machInst);
                  break;
                
                case 0xd: 
                  switch (RS2) {
                    
                    case 0x18:   
                      // IOp::rev8(['\n                            Rd = 0;\n                            Rd |= ((Rs1 & 0xffULL) << 56) | (((Rs1 >> 56) & 0xffULL));\n                            Rd |= (((Rs1 >> 8) & 0xffULL) << 48) | (((Rs1 >> 48) & 0xffULL) << 8);\n                            Rd |= (((Rs1 >> 16) & 0xffULL) << 40) | (((Rs1 >> 40) & 0xffULL) << 16);\n                            Rd |= (((Rs1 >> 24) & 0xffULL) << 32) | (((Rs1 >> 32) & 0xffULL) << 24);\n                        '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                      
                          return new Rev8(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x6:   
              // IOp::ori(['\n                    Rd = Rs1 | imm;\n                ', 'uint64_t'],{})
              
                  return new Ori(machInst);
              break;
            
            case 0x7:   
              // IOp::andi(['\n                    Rd = Rs1 & imm;\n                ', 'uint64_t'],{})
              
                  return new Andi(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x5:   
          // UOp::auipc((['\n            Rd = PC + (sext<20>(imm) << 12);\n        '], {}))
          
              return new Auipc(machInst);
          break;
        
        case 0x6: 
          switch (FUNCT3) {
            
            case 0x0:   
              // IOp::addiw(['\n                    Rd_sw = (int32_t)(Rs1_sw + imm);\n                ', 'int32_t'],{})
              
                  return new Addiw(machInst);
              break;
            
            case 0x1: 
              switch (FS3) {
                
                case 0x0:   
                  // IOp::slliw(['\n                        Rd_sd = Rs1_sw << imm;\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT5; '})
                  
                      return new Slliw(machInst);
                  break;
                
                case 0x1:   
                  // IOp::slliuw(['\n                        Rd = ((uint64_t)(Rs1_uw)) << imm;\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT5; '})
                  
                      return new Slliuw(machInst);
                  break;
                
                case 0xc: 
                  switch (FS2) {
                    
                    case 0x0:   
                      // IOp::clzw(['\n                            Rd = clz32(Rs1);\n                        '],{})
                      
                          return new Clzw(machInst);
                      break;
                    
                    case 0x1:   
                      // IOp::ctzw(['\n                            Rd = ctz32(Rs1);\n                        '],{})
                      
                          return new Ctzw(machInst);
                      break;
                    
                    case 0x2:   
                      // IOp::cpopw(['\n                            Rd = popCount(Rs1<31:0>);\n                        '],{})
                      
                          return new Cpopw(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x5: 
              switch (FS3) {
                
                case 0x0:   
                  // IOp::srliw(['\n                        Rd_sd = (int32_t)(Rs1_uw >> imm);\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT5; '})
                  
                      return new Srliw(machInst);
                  break;
                
                case 0x8:   
                  // IOp::sraiw(['\n                        Rd_sd = Rs1_sw >> imm;\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT5; '})
                  
                      return new Sraiw(machInst);
                  break;
                
                case 0xc:   
                  // IOp::roriw(['\n                        Rd = (int32_t) ((Rs1_uw >> imm) | (Rs1_uw << ((32 - imm) & (32 - 1))));\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT5; '})
                  
                      return new Roriw(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x8: 
          switch (FUNCT3) {
            
            case 0x0:   
              // Store::sb(['\n                    Mem_ub = Rs2_ub;\n                '],{})
              
                  return new Sb(machInst);
              break;
            
            case 0x1:   
              // Store::sh(['\n                    Mem_uh = Rs2_uh;\n                '],{})
              
                  return new Sh(machInst);
              break;
            
            case 0x2:   
              // Store::sw(['\n                    Mem_uw = Rs2_uw;\n                '],{})
              
                  return new Sw(machInst);
              break;
            
            case 0x3:   
              // Store::sd(['\n                    Mem_ud = Rs2_ud;\n                '],{})
              
                  return new Sd(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x9: 
          switch (FUNCT3) {
            
            case 0x1:   
              // Store::fsh(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                "FPU is off", machInst);\n\n                    Mem_uh = (uint16_t)Fs2_bits;\n                '],{'inst_flags': 'FloatMemWriteOp'})
              
                  return new Fsh(machInst);
              break;
            
            case 0x2:   
              // Store::fsw(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                "FPU is off", machInst);\n\n                    Mem_uw = (uint32_t)Fs2_bits;\n                '],{'inst_flags': 'FloatMemWriteOp'})
              
                  return new Fsw(machInst);
              break;
            
            case 0x3:   
              // Store::fsd(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                "FPU is off", machInst);\n\n                    Mem_ud = Fs2_bits;\n                '],{'inst_flags': 'FloatMemWriteOp'})
              
                  return new Fsd(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0xb: 
          switch (FUNCT3) {
            
            case 0x2: 
              switch (AMOFUNCT) {
                
                case 0x2:   
                  // LoadReserved::lr_w((['\n                    Rd_sd = Mem_sw;\n                '], {'mem_flags': 'LLSC'}))
                  
                      return new Lr_w(machInst);
                  
                      return new Lr_w(machInst);
                  break;
                
                case 0x3:   
                  // StoreCond::sc_w((['\n                    Mem_uw = Rs2_uw;\n                ', '\n                    Rd = result;\n                '], {'inst_flags': 'IsStoreConditional', 'mem_flags': 'LLSC'}))
                  
                      return new Sc_w(machInst);
                  
                      return new Sc_w(machInst);
                  break;
                
                case 0x0:   
                  // AtomicMemOp::amoadd_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<int32_t> *amo_op =\n                          new AtomicGenericOp<int32_t>(Rs2_sw,\n                                  [](int32_t* b, int32_t a){ *b += a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amoadd_w(machInst);
                  
                      return new Amoadd_w(machInst);
                  break;
                
                case 0x1:   
                  // AtomicMemOp::amoswap_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                          new AtomicGenericOp<uint32_t>(Rs2_uw,\n                                  [](uint32_t* b, uint32_t a){ *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amoswap_w(machInst);
                  
                      return new Amoswap_w(machInst);
                  break;
                
                case 0x4:   
                  // AtomicMemOp::amoxor_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                          new AtomicGenericOp<uint32_t>(Rs2_uw,\n                                  [](uint32_t* b, uint32_t a){ *b ^= a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amoxor_w(machInst);
                  
                      return new Amoxor_w(machInst);
                  break;
                
                case 0x8:   
                  // AtomicMemOp::amoor_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                          new AtomicGenericOp<uint32_t>(Rs2_uw,\n                                  [](uint32_t* b, uint32_t a){ *b |= a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amoor_w(machInst);
                  
                      return new Amoor_w(machInst);
                  break;
                
                case 0xc:   
                  // AtomicMemOp::amoand_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                          new AtomicGenericOp<uint32_t>(Rs2_uw,\n                                  [](uint32_t* b, uint32_t a){ *b &= a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amoand_w(machInst);
                  
                      return new Amoand_w(machInst);
                  break;
                
                case 0x10:   
                  // AtomicMemOp::amomin_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<int32_t> *amo_op =\n                      new AtomicGenericOp<int32_t>(Rs2_sw,\n                        [](int32_t* b, int32_t a){ if (a < *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amomin_w(machInst);
                  
                      return new Amomin_w(machInst);
                  break;
                
                case 0x14:   
                  // AtomicMemOp::amomax_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<int32_t> *amo_op =\n                      new AtomicGenericOp<int32_t>(Rs2_sw,\n                        [](int32_t* b, int32_t a){ if (a > *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amomax_w(machInst);
                  
                      return new Amomax_w(machInst);
                  break;
                
                case 0x18:   
                  // AtomicMemOp::amominu_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                      new AtomicGenericOp<uint32_t>(Rs2_uw,\n                        [](uint32_t* b, uint32_t a){ if (a < *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amominu_w(machInst);
                  
                      return new Amominu_w(machInst);
                  break;
                
                case 0x1c:   
                  // AtomicMemOp::amomaxu_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                      new AtomicGenericOp<uint32_t>(Rs2_uw,\n                        [](uint32_t* b, uint32_t a){ if (a > *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amomaxu_w(machInst);
                  
                      return new Amomaxu_w(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x3: 
              switch (AMOFUNCT) {
                
                case 0x2:   
                  // LoadReserved::lr_d((['\n                    Rd_sd = Mem_sd;\n                '], {'mem_flags': 'LLSC'}))
                  
                      return new Lr_d(machInst);
                  
                      return new Lr_d(machInst);
                  break;
                
                case 0x3:   
                  // StoreCond::sc_d((['\n                    Mem = Rs2;\n                ', '\n                    Rd = result;\n                '], {'mem_flags': 'LLSC', 'inst_flags': 'IsStoreConditional'}))
                  
                      return new Sc_d(machInst);
                  
                      return new Sc_d(machInst);
                  break;
                
                case 0x0:   
                  // AtomicMemOp::amoadd_d((['\n                    Rd_sd = Mem_sd;\n                ', '\n                    TypedAtomicOpFunctor<int64_t> *amo_op =\n                          new AtomicGenericOp<int64_t>(Rs2_sd,\n                                  [](int64_t* b, int64_t a){ *b += a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amoadd_d(machInst);
                  
                      return new Amoadd_d(machInst);
                  break;
                
                case 0x1:   
                  // AtomicMemOp::amoswap_d((['\n                    Rd_sd = Mem_sd;\n                ', '\n                    TypedAtomicOpFunctor<uint64_t> *amo_op =\n                          new AtomicGenericOp<uint64_t>(Rs2_ud,\n                                  [](uint64_t* b, uint64_t a){ *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amoswap_d(machInst);
                  
                      return new Amoswap_d(machInst);
                  break;
                
                case 0x4:   
                  // AtomicMemOp::amoxor_d((['\n                    Rd_sd = Mem_sd;\n                ', '\n                    TypedAtomicOpFunctor<uint64_t> *amo_op =\n                          new AtomicGenericOp<uint64_t>(Rs2_ud,\n                                 [](uint64_t* b, uint64_t a){ *b ^= a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amoxor_d(machInst);
                  
                      return new Amoxor_d(machInst);
                  break;
                
                case 0x8:   
                  // AtomicMemOp::amoor_d((['\n                    Rd_sd = Mem_sd;\n                ', '\n                    TypedAtomicOpFunctor<uint64_t> *amo_op =\n                          new AtomicGenericOp<uint64_t>(Rs2_ud,\n                                 [](uint64_t* b, uint64_t a){ *b |= a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amoor_d(machInst);
                  
                      return new Amoor_d(machInst);
                  break;
                
                case 0xc:   
                  // AtomicMemOp::amoand_d((['\n                    Rd_sd = Mem_sd;\n                ', '\n                    TypedAtomicOpFunctor<uint64_t> *amo_op =\n                          new AtomicGenericOp<uint64_t>(Rs2_ud,\n                                 [](uint64_t* b, uint64_t a){ *b &= a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amoand_d(machInst);
                  
                      return new Amoand_d(machInst);
                  break;
                
                case 0x10:   
                  // AtomicMemOp::amomin_d((['\n                    Rd_sd = Mem_sd;\n                ', '\n                    TypedAtomicOpFunctor<int64_t> *amo_op =\n                      new AtomicGenericOp<int64_t>(Rs2_sd,\n                        [](int64_t* b, int64_t a){ if (a < *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amomin_d(machInst);
                  
                      return new Amomin_d(machInst);
                  break;
                
                case 0x14:   
                  // AtomicMemOp::amomax_d((['\n                    Rd_sd = Mem_sd;\n                ', '\n                    TypedAtomicOpFunctor<int64_t> *amo_op =\n                      new AtomicGenericOp<int64_t>(Rs2_sd,\n                        [](int64_t* b, int64_t a){ if (a > *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amomax_d(machInst);
                  
                      return new Amomax_d(machInst);
                  break;
                
                case 0x18:   
                  // AtomicMemOp::amominu_d((['\n                    Rd_sd = Mem_sd;\n                ', '\n                    TypedAtomicOpFunctor<uint64_t> *amo_op =\n                      new AtomicGenericOp<uint64_t>(Rs2_ud,\n                        [](uint64_t* b, uint64_t a){ if (a < *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amominu_d(machInst);
                  
                      return new Amominu_d(machInst);
                  break;
                
                case 0x1c:   
                  // AtomicMemOp::amomaxu_d((['\n                    Rd_sd = Mem_sd;\n                ', '\n                    TypedAtomicOpFunctor<uint64_t> *amo_op =\n                      new AtomicGenericOp<uint64_t>(Rs2_ud,\n                        [](uint64_t* b, uint64_t a){ if (a > *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amomaxu_d(machInst);
                  
                      return new Amomaxu_d(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0xc: 
          switch (FUNCT3) {
            
            case 0x0: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::add(['\n                        Rd = Rs1_sd + Rs2_sd;\n                    '],{})
                  
                      return new Add(machInst);
                  break;
                
                case 0x1:   
                  // ROp::mul(['\n                        Rd = Rs1_sd*Rs2_sd;\n                    ', 'IntMultOp'],{})
                  
                      return new Mul(machInst);
                  break;
                
                case 0x20:   
                  // ROp::sub(['\n                        Rd = Rs1_sd - Rs2_sd;\n                    '],{})
                  
                      return new Sub(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x1: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::sll(['\n                        Rd = Rs1 << Rs2<5:0>;\n                    '],{})
                  
                      return new Sll(machInst);
                  break;
                
                case 0x1:   
                  // ROp::mulh(['\n                        bool negate = (Rs1_sd < 0) != (Rs2_sd < 0);\n\n                        uint64_t Rs1_lo = (uint32_t)std::abs(Rs1_sd);\n                        uint64_t Rs1_hi = (uint64_t)std::abs(Rs1_sd) >> 32;\n                        uint64_t Rs2_lo = (uint32_t)std::abs(Rs2_sd);\n                        uint64_t Rs2_hi = (uint64_t)std::abs(Rs2_sd) >> 32;\n\n                        uint64_t hi = Rs1_hi*Rs2_hi;\n                        uint64_t mid1 = Rs1_hi*Rs2_lo;\n                        uint64_t mid2 = Rs1_lo*Rs2_hi;\n                        uint64_t lo = Rs2_lo*Rs1_lo;\n                        uint64_t carry = ((uint64_t)(uint32_t)mid1\n                                + (uint64_t)(uint32_t)mid2 + (lo >> 32)) >> 32;\n\n                        uint64_t res = hi +\n                                       (mid1 >> 32) +\n                                       (mid2 >> 32) +\n                                       carry;\n                        Rd = negate ? ~res + (Rs1_sd*Rs2_sd == 0 ? 1 : 0)\n                                    : res;\n                    ', 'IntMultOp'],{})
                  
                      return new Mulh(machInst);
                  break;
                
                case 0x5:   
                  // ROp::clmul(['\n                        Rd = 0;\n                        for (int i = 0; i < 64; i++) {\n                            if ((Rs2 >> i) & 1) {\n                                Rd ^= Rs1 << i;\n                            }\n                        }\n                    '],{})
                  
                      return new Clmul(machInst);
                  break;
                
                case 0x14:   
                  // ROp::bset(['\n                        Rs2 &= (64 - 1);\n                        Rd = Rs1 | (UINT64_C(1) << Rs2);\n                    '],{})
                  
                      return new Bset(machInst);
                  break;
                
                case 0x24:   
                  // ROp::bclr(['\n                        Rs2 &= (64 - 1);\n                        Rd = Rs1 & (~(UINT64_C(1) << Rs2));\n                    '],{})
                  
                      return new Bclr(machInst);
                  break;
                
                case 0x30:   
                  // ROp::rol(['\n                        int shamt = Rs2 & (64 - 1);\n                        Rd = (Rs1 << shamt) | (Rs1 >> ((64 - shamt) & (64 - 1)));\n                    '],{})
                  
                      return new Rol(machInst);
                  break;
                
                case 0x34:   
                  // ROp::binv(['\n                        Rs2 &= (64 - 1);\n                        Rd = Rs1 ^ (UINT64_C(1) << Rs2);\n                    '],{})
                  
                      return new Binv(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x2: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::slt(['\n                        Rd = (Rs1_sd < Rs2_sd) ? 1 : 0;\n                    '],{})
                  
                      return new Slt(machInst);
                  break;
                
                case 0x1:   
                  // ROp::mulhsu(['\n                        bool negate = Rs1_sd < 0;\n                        uint64_t Rs1_lo = (uint32_t)std::abs(Rs1_sd);\n                        uint64_t Rs1_hi = (uint64_t)std::abs(Rs1_sd) >> 32;\n                        uint64_t Rs2_lo = (uint32_t)Rs2;\n                        uint64_t Rs2_hi = Rs2 >> 32;\n\n                        uint64_t hi = Rs1_hi*Rs2_hi;\n                        uint64_t mid1 = Rs1_hi*Rs2_lo;\n                        uint64_t mid2 = Rs1_lo*Rs2_hi;\n                        uint64_t lo = Rs1_lo*Rs2_lo;\n                        uint64_t carry = ((uint64_t)(uint32_t)mid1\n                                + (uint64_t)(uint32_t)mid2 + (lo >> 32)) >> 32;\n\n                        uint64_t res = hi +\n                                       (mid1 >> 32) +\n                                       (mid2 >> 32) +\n                                       carry;\n                        Rd = negate ? ~res + (Rs1_sd*Rs2 == 0 ? 1 : 0) : res;\n                    ', 'IntMultOp'],{})
                  
                      return new Mulhsu(machInst);
                  break;
                
                case 0x5:   
                  // ROp::clmulr(['\n                        Rd = 0;\n                        for (int i = 0; i < 64; i++) {\n                            if ((Rs2 >> i) & 1) {\n                                Rd ^= Rs1 >> (64-i-1);\n                            }\n                        }\n                    '],{})
                  
                      return new Clmulr(machInst);
                  break;
                
                case 0x10:   
                  // ROp::sh1add(['\n                        Rd = (Rs1 << 1) + Rs2;\n                    '],{})
                  
                      return new Sh1add(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x3: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::sltu(['\n                        Rd = (Rs1 < Rs2) ? 1 : 0;\n                    '],{})
                  
                      return new Sltu(machInst);
                  break;
                
                case 0x1:   
                  // ROp::mulhu(['\n                        uint64_t Rs1_lo = (uint32_t)Rs1;\n                        uint64_t Rs1_hi = Rs1 >> 32;\n                        uint64_t Rs2_lo = (uint32_t)Rs2;\n                        uint64_t Rs2_hi = Rs2 >> 32;\n\n                        uint64_t hi = Rs1_hi*Rs2_hi;\n                        uint64_t mid1 = Rs1_hi*Rs2_lo;\n                        uint64_t mid2 = Rs1_lo*Rs2_hi;\n                        uint64_t lo = Rs1_lo*Rs2_lo;\n                        uint64_t carry = ((uint64_t)(uint32_t)mid1\n                                + (uint64_t)(uint32_t)mid2 + (lo >> 32)) >> 32;\n\n                        Rd = hi + (mid1 >> 32) + (mid2 >> 32) + carry;\n                    ', 'IntMultOp'],{})
                  
                      return new Mulhu(machInst);
                  break;
                
                case 0x5:   
                  // ROp::clmulh(['\n                        Rd = 0;\n                        for (int i = 1; i < 64; i++) {\n                            if ((Rs2 >> i) & 1) {\n                                Rd ^= (Rs1 >> (64-i));\n                            }\n                        }\n                    '],{})
                  
                      return new Clmulh(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x4: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::xor(['\n                        Rd = Rs1 ^ Rs2;\n                    '],{})
                  
                      return new Xor(machInst);
                  break;
                
                case 0x1:   
                  // ROp::div(['\n                        if (Rs2_sd == 0) {\n                            Rd_sd = -1;\n                        } else if (\n                                Rs1_sd == std::numeric_limits<int64_t>::min()\n                                && Rs2_sd == -1) {\n                            Rd_sd = std::numeric_limits<int64_t>::min();\n                        } else {\n                            Rd_sd = Rs1_sd/Rs2_sd;\n                        }\n                    ', 'IntDivOp'],{})
                  
                      return new Div(machInst);
                  break;
                
                case 0x5:   
                  // ROp::min(['\n                        Rd = (((int64_t) Rs1) < ((int64_t) Rs2)) ? Rs1 : Rs2;\n                    '],{})
                  
                      return new Min(machInst);
                  break;
                
                case 0x10:   
                  // ROp::sh2add(['\n                        Rd = (Rs1 << 2) + Rs2;\n                    '],{})
                  
                      return new Sh2add(machInst);
                  break;
                
                case 0x20:   
                  // ROp::xnor(['\n                        Rd = ~(Rs1 ^ Rs2);\n                    '],{})
                  
                      return new Xnor(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x5: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::srl(['\n                        Rd = Rs1 >> Rs2<5:0>;\n                    '],{})
                  
                      return new Srl(machInst);
                  break;
                
                case 0x1:   
                  // ROp::divu(['\n                        if (Rs2 == 0) {\n                            Rd = std::numeric_limits<uint64_t>::max();\n                        } else {\n                            Rd = Rs1/Rs2;\n                        }\n                    ', 'IntDivOp'],{})
                  
                      return new Divu(machInst);
                  break;
                
                case 0x20:   
                  // ROp::sra(['\n                        Rd_sd = Rs1_sd >> Rs2<5:0>;\n                    '],{})
                  
                      return new Sra(machInst);
                  break;
                
                case 0x5:   
                  // ROp::minu(['\n                        Rd = Rs1 < Rs2 ? Rs1 : Rs2;\n                    '],{})
                  
                      return new Minu(machInst);
                  break;
                
                case 0x24:   
                  // ROp::bext(['\n                        Rs2 &= (64 - 1);\n                        Rd = (Rs1 >> Rs2) & 0x1;\n                    '],{})
                  
                      return new Bext(machInst);
                  break;
                
                case 0x30:   
                  // ROp::ror(['\n                        int shamt = Rs2 & (64 - 1);\n                        Rd = (Rs1 >> shamt) | (Rs1 << ((64 - shamt) & (64 - 1)));\n                    '],{})
                  
                      return new Ror(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x6: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::or(['\n                        Rd = Rs1 | Rs2;\n                    '],{})
                  
                      return new Or(machInst);
                  break;
                
                case 0x1:   
                  // ROp::rem(['\n                        if (Rs2_sd == 0) {\n                            Rd = Rs1_sd;\n                        } else if (\n                                Rs1_sd == std::numeric_limits<int64_t>::min()\n                                && Rs2_sd == -1) {\n                            Rd = 0;\n                        } else {\n                            Rd = Rs1_sd%Rs2_sd;\n                        }\n                    ', 'IntDivOp'],{})
                  
                      return new Rem(machInst);
                  break;
                
                case 0x5:   
                  // ROp::max(['\n                        Rd = (((int64_t) Rs1) > ((int64_t) Rs2)) ? Rs1 : Rs2;\n                    '],{})
                  
                      return new Max(machInst);
                  break;
                
                case 0x10:   
                  // ROp::sh3add(['\n                        Rd = (Rs1 << 3) + Rs2;\n                    '],{})
                  
                      return new Sh3add(machInst);
                  break;
                
                case 0x20:   
                  // ROp::orn(['\n                        Rd = Rs1 | (~Rs2);\n                    '],{})
                  
                      return new Orn(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x7: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::and(['\n                        Rd = Rs1 & Rs2;\n                    '],{})
                  
                      return new And(machInst);
                  break;
                
                case 0x1:   
                  // ROp::remu(['\n                        if (Rs2 == 0) {\n                            Rd = Rs1;\n                        } else {\n                            Rd = Rs1%Rs2;\n                        }\n                    ', 'IntDivOp'],{})
                  
                      return new Remu(machInst);
                  break;
                
                case 0x5:   
                  // ROp::maxu(['\n                        Rd = Rs1 > Rs2 ? Rs1 : Rs2;\n                    '],{})
                  
                      return new Maxu(machInst);
                  break;
                
                case 0x20:   
                  // ROp::andn(['\n                        Rd = Rs1 & (~Rs2);\n                    '],{})
                  
                      return new Andn(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0xd:   
          // UOp::lui((['\n            Rd = (uint64_t)(sext<20>(imm) << 12);\n        '], {}))
          
              return new Lui(machInst);
          break;
        
        case 0xe: 
          switch (FUNCT3) {
            
            case 0x0: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::addw(['\n                        Rd_sd = Rs1_sw + Rs2_sw;\n                    '],{})
                  
                      return new Addw(machInst);
                  break;
                
                case 0x1:   
                  // ROp::mulw(['\n                        Rd_sd = (int32_t)(Rs1_sw*Rs2_sw);\n                    ', 'IntMultOp'],{})
                  
                      return new Mulw(machInst);
                  break;
                
                case 0x4:   
                  // ROp::adduw(['\n                        Rd = Rs1_uw + Rs2;\n                    '],{})
                  
                      return new Adduw(machInst);
                  break;
                
                case 0x20:   
                  // ROp::subw(['\n                        Rd_sd = Rs1_sw - Rs2_sw;\n                    '],{})
                  
                      return new Subw(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x1: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::sllw(['\n                        Rd_sd = Rs1_sw << Rs2<4:0>;\n                    '],{})
                  
                      return new Sllw(machInst);
                  break;
                
                case 0x30:   
                  // ROp::rolw(['\n                        int shamt = Rs2 & (32 - 1);\n                        Rd = (int32_t) ((Rs1_uw << shamt) | (Rs1_uw >> ((32 - shamt) & (32 - 1))));\n                    '],{})
                  
                      return new Rolw(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x2: 
              switch (FUNCT7) {
                
                case 0x10:   
                  // ROp::sh1adduw(['\n                        Rd = (((uint64_t)Rs1_uw) << 1) + Rs2;\n                    '],{})
                  
                      return new Sh1adduw(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x4: 
              switch (FUNCT7) {
                
                case 0x1:   
                  // ROp::divw(['\n                        if (Rs2_sw == 0) {\n                            Rd_sd = -1;\n                        } else if (Rs1_sw == std::numeric_limits<int32_t>::min()\n                                && Rs2_sw == -1) {\n                            Rd_sd = std::numeric_limits<int32_t>::min();\n                        } else {\n                            Rd_sd = Rs1_sw/Rs2_sw;\n                        }\n                    ', 'IntDivOp'],{})
                  
                      return new Divw(machInst);
                  break;
                
                case 0x4:   
                  // ROp::zexth(['\n                        Rd = Rs1_uh;\n                    '],{})
                  
                      return new Zexth(machInst);
                  break;
                
                case 0x10:   
                  // ROp::sh2adduw(['\n                        Rd = (((uint64_t)Rs1_uw) << 2) + Rs2;\n                    '],{})
                  
                      return new Sh2adduw(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x5: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::srlw(['\n                        Rd_sd = (int32_t)(Rs1_uw >> Rs2<4:0>);\n                    '],{})
                  
                      return new Srlw(machInst);
                  break;
                
                case 0x1:   
                  // ROp::divuw(['\n                        if (Rs2_uw == 0) {\n                            Rd_sd = std::numeric_limits<uint64_t>::max();\n                        } else {\n                            Rd_sd = (int32_t)(Rs1_uw/Rs2_uw);\n                        }\n                    ', 'IntDivOp'],{})
                  
                      return new Divuw(machInst);
                  break;
                
                case 0x20:   
                  // ROp::sraw(['\n                        Rd_sd = Rs1_sw >> Rs2<4:0>;\n                    '],{})
                  
                      return new Sraw(machInst);
                  break;
                
                case 0x30:   
                  // ROp::rorw(['\n                        int shamt = Rs2 & (32 - 1);\n                        Rd = (int32_t) ((Rs1_uw >> shamt) | (Rs1_uw << ((32 - shamt) & (32 - 1))));\n                    '],{})
                  
                      return new Rorw(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x6: 
              switch (FUNCT7) {
                
                case 0x1:   
                  // ROp::remw(['\n                        if (Rs2_sw == 0) {\n                            Rd_sd = Rs1_sw;\n                        } else if (Rs1_sw == std::numeric_limits<int32_t>::min()\n                                && Rs2_sw == -1) {\n                            Rd_sd = 0;\n                        } else {\n                            Rd_sd = Rs1_sw%Rs2_sw;\n                        }\n                    ', 'IntDivOp'],{})
                  
                      return new Remw(machInst);
                  break;
                
                case 0x10:   
                  // ROp::sh3adduw(['\n                        Rd = (((uint64_t)Rs1_uw) << 3) + Rs2;\n                    '],{})
                  
                      return new Sh3adduw(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x7:   
              // ROp::remuw(['\n                    if (Rs2_uw == 0) {\n                        Rd_sd = (int32_t)Rs1_uw;\n                    } else {\n                        Rd_sd = (int32_t)(Rs1_uw%Rs2_uw);\n                    }\n                ', 'IntDivOp'],{})
              
                  return new Remuw(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x10: 
          switch (FUNCT2) {
            
            case 0x0:   
              // FPROp::fmadd_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_mulAdd(f32(freg(Fs1_bits)),\n                                         f32(freg(Fs2_bits)),\n                                         f32(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fmadd_s(machInst);
              break;
            
            case 0x1:   
              // FPROp::fmadd_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_mulAdd(f64(freg(Fs1_bits)),\n                                         f64(freg(Fs2_bits)),\n                                         f64(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fmadd_d(machInst);
              break;
            
            case 0x2:   
              // FPROp::fmadd_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_mulAdd(f16(freg(Fs1_bits)),\n                                         f16(freg(Fs2_bits)),\n                                         f16(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fmadd_h(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x11: 
          switch (FUNCT2) {
            
            case 0x0:   
              // FPROp::fmsub_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_mulAdd(f32(freg(Fs1_bits)),\n                                    f32(freg(Fs2_bits)),\n                                    f32(f32(freg(Fs3_bits)).v ^\n                                        mask(31, 31))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fmsub_s(machInst);
              break;
            
            case 0x1:   
              // FPROp::fmsub_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_mulAdd(f64(freg(Fs1_bits)),\n                                    f64(freg(Fs2_bits)),\n                                    f64(f64(freg(Fs3_bits)).v ^\n                                        mask(63, 63))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fmsub_d(machInst);
              break;
            
            case 0x2:   
              // FPROp::fmsub_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_mulAdd(f16(freg(Fs1_bits)),\n                                    f16(freg(Fs2_bits)),\n                                    f16(f16(freg(Fs3_bits)).v ^\n                                        mask(15, 15))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fmsub_h(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x12: 
          switch (FUNCT2) {
            
            case 0x0:   
              // FPROp::fnmsub_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_mulAdd(f32(f32(freg(Fs1_bits)).v ^\n                                             mask(31, 31)),\n                                         f32(freg(Fs2_bits)),\n                                         f32(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fnmsub_s(machInst);
              break;
            
            case 0x1:   
              // FPROp::fnmsub_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_mulAdd(f64(f64(freg(Fs1_bits)).v ^\n                                             mask(63, 63)),\n                                         f64(freg(Fs2_bits)),\n                                         f64(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fnmsub_d(machInst);
              break;
            
            case 0x2:   
              // FPROp::fnmsub_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_mulAdd(f16(f16(freg(Fs1_bits)).v ^\n                                             mask(15, 15)),\n                                         f16(freg(Fs2_bits)),\n                                         f16(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fnmsub_h(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x13: 
          switch (FUNCT2) {
            
            case 0x0:   
              // FPROp::fnmadd_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_mulAdd(f32(f32(freg(Fs1_bits)).v ^\n                                             mask(31, 31)),\n                                    f32(freg(Fs2_bits)),\n                                    f32(f32(freg(Fs3_bits)).v ^\n                                        mask(31, 31))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fnmadd_s(machInst);
              break;
            
            case 0x1:   
              // FPROp::fnmadd_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_mulAdd(f64(f64(freg(Fs1_bits)).v ^\n                                             mask(63, 63)),\n                                    f64(freg(Fs2_bits)),\n                                    f64(f64(freg(Fs3_bits)).v ^\n                                        mask(63, 63))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fnmadd_d(machInst);
              break;
            
            case 0x2:   
              // FPROp::fnmadd_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_mulAdd(f16(f16(freg(Fs1_bits)).v ^\n                                             mask(15, 15)),\n                                    f16(freg(Fs2_bits)),\n                                    f16(f16(freg(Fs3_bits)).v ^\n                                        mask(15, 15))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fnmadd_h(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x14: 
          switch (FUNCT7) {
            
            case 0x0:   
              // FPROp::fadd_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_add(f32(freg(Fs1_bits)),\n                                      f32(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})
              
                  return new Fadd_s(machInst);
              break;
            
            case 0x1:   
              // FPROp::fadd_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_add(f64(freg(Fs1_bits)),\n                                      f64(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})
              
                  return new Fadd_d(machInst);
              break;
            
            case 0x2:   
              // FPROp::fadd_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_add(f16(freg(Fs1_bits)),\n                                      f16(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})
              
                  return new Fadd_h(machInst);
              break;
            
            case 0x4:   
              // FPROp::fsub_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_sub(f32(freg(Fs1_bits)),\n                                      f32(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})
              
                  return new Fsub_s(machInst);
              break;
            
            case 0x5:   
              // FPROp::fsub_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_sub(f64(freg(Fs1_bits)),\n                                      f64(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})
              
                  return new Fsub_d(machInst);
              break;
            
            case 0x6:   
              // FPROp::fsub_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_sub(f16(freg(Fs1_bits)),\n                                      f16(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})
              
                  return new Fsub_h(machInst);
              break;
            
            case 0x8:   
              // FPROp::fmul_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_mul(f32(freg(Fs1_bits)),\n                                      f32(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultOp'],{})
              
                  return new Fmul_s(machInst);
              break;
            
            case 0x9:   
              // FPROp::fmul_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_mul(f64(freg(Fs1_bits)),\n                                      f64(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultOp'],{})
              
                  return new Fmul_d(machInst);
              break;
            
            case 0xa:   
              // FPROp::fmul_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_mul(f16(freg(Fs1_bits)),\n                                      f16(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultOp'],{})
              
                  return new Fmul_h(machInst);
              break;
            
            case 0xc:   
              // FPROp::fdiv_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_div(f32(freg(Fs1_bits)),\n                                      f32(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatDivOp'],{})
              
                  return new Fdiv_s(machInst);
              break;
            
            case 0xd:   
              // FPROp::fdiv_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_div(f64(freg(Fs1_bits)),\n                                      f64(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatDivOp'],{})
              
                  return new Fdiv_d(machInst);
              break;
            
            case 0xe:   
              // FPROp::fdiv_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_div(f16(freg(Fs1_bits)),\n                                      f16(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatDivOp'],{})
              
                  return new Fdiv_h(machInst);
              break;
            
            case 0x10: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fsgnj_s(['\n                        auto sign = bits(unboxF32(Fs2_bits), 31);\n                        Fd_bits = boxF32(insertBits(unboxF32(Fs1_bits), 31,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})
                  
                      return new Fsgnj_s(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fsgnjn_s(['\n                        auto sign = ~bits(unboxF32(Fs2_bits), 31);\n                        Fd_bits = boxF32(insertBits(unboxF32(Fs1_bits), 31,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})
                  
                      return new Fsgnjn_s(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fsgnjx_s(['\n                        auto sign = bits(\n                            unboxF32(Fs1_bits) ^ unboxF32(Fs2_bits), 31);\n                        Fd_bits = boxF32(insertBits(unboxF32(Fs1_bits), 31,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})
                  
                      return new Fsgnjx_s(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x11: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fsgnj_d(['\n                        Fd_bits = insertBits(Fs2_bits, 62, 0, Fs1_bits);\n                    ', 'FloatMiscOp'],{})
                  
                      return new Fsgnj_d(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fsgnjn_d(['\n                        Fd_bits = insertBits(~Fs2_bits, 62, 0, Fs1_bits);\n                    ', 'FloatMiscOp'],{})
                  
                      return new Fsgnjn_d(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fsgnjx_d(['\n                        Fd_bits = insertBits(\n                                Fs1_bits ^ Fs2_bits, 62, 0, Fs1_bits);\n                    ', 'FloatMiscOp'],{})
                  
                      return new Fsgnjx_d(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x12: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fsgnj_h(['\n                        auto sign = bits(unboxF16(Fs2_bits), 15);\n                        Fd_bits = boxF16(insertBits(unboxF16(Fs1_bits), 15,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})
                  
                      return new Fsgnj_h(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fsgnjn_h(['\n                        auto sign = ~bits(unboxF16(Fs2_bits), 15);\n                        Fd_bits = boxF16(insertBits(unboxF16(Fs1_bits), 15,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})
                  
                      return new Fsgnjn_h(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fsgnjx_h(['\n                        auto sign = bits(\n                            unboxF16(Fs1_bits) ^ unboxF16(Fs2_bits), 15);\n                        Fd_bits = boxF16(insertBits(unboxF16(Fs1_bits), 15,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})
                  
                      return new Fsgnjx_h(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x14: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fmin_s(['\n                        bool less = f32_lt_quiet(f32(freg(Fs1_bits)),\n                            f32(freg(Fs2_bits))) ||\n                            (f32_eq(f32(freg(Fs1_bits)),\n                            f32(freg(Fs2_bits))) &&\n                            bits(f32(freg(Fs1_bits)).v, 31));\n\n                        Fd_bits = less ||\n                            isNaNF32UI(f32(freg(Fs2_bits)).v) ?\n                            freg(Fs1_bits).v : freg(Fs2_bits).v;\n                        if (isNaNF32UI(f32(freg(Fs1_bits)).v) &&\n                            isNaNF32UI(f32(freg(Fs2_bits)).v))\n                            Fd_bits = f32(defaultNaNF32UI).v;\n                        ', 'FloatCmpOp'],{})
                  
                      return new Fmin_s(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fmax_s(['\n                        bool greater = f32_lt_quiet(f32(freg(Fs2_bits)),\n                            f32(freg(Fs1_bits))) ||\n                            (f32_eq(f32(freg(Fs2_bits)),\n                            f32(freg(Fs1_bits))) &&\n                            bits(f32(freg(Fs2_bits)).v, 31));\n\n                        Fd_bits = greater ||\n                            isNaNF32UI(f32(freg(Fs2_bits)).v) ?\n                            freg(Fs1_bits).v : freg(Fs2_bits).v;\n                        if (isNaNF32UI(f32(freg(Fs1_bits)).v) &&\n                            isNaNF32UI(f32(freg(Fs2_bits)).v))\n                            Fd_bits = f32(defaultNaNF32UI).v;\n                        ', 'FloatCmpOp'],{})
                  
                      return new Fmax_s(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x15: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fmin_d(['\n                        bool less = f64_lt_quiet(f64(freg(Fs1_bits)),\n                            f64(freg(Fs2_bits))) ||\n                            (f64_eq(f64(freg(Fs1_bits)),\n                            f64(freg(Fs2_bits))) &&\n                            bits(f64(freg(Fs1_bits)).v, 63));\n\n                        Fd_bits = less ||\n                            isNaNF64UI(f64(freg(Fs2_bits)).v) ?\n                            freg(Fs1_bits).v : freg(Fs2_bits).v;\n                        if (isNaNF64UI(f64(freg(Fs1_bits)).v) &&\n                            isNaNF64UI(f64(freg(Fs2_bits)).v))\n                            Fd_bits = f64(defaultNaNF64UI).v;\n                    ', 'FloatCmpOp'],{})
                  
                      return new Fmin_d(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fmax_d(['\n                        bool greater =\n                            f64_lt_quiet(f64(freg(Fs2_bits)),\n                            f64(freg(Fs1_bits))) ||\n                            (f64_eq(f64(freg(Fs2_bits)),\n                            f64(freg(Fs1_bits))) &&\n                            bits(f64(freg(Fs2_bits)).v, 63));\n\n                        Fd_bits = greater ||\n                            isNaNF64UI(f64(freg(Fs2_bits)).v) ?\n                            freg(Fs1_bits).v : freg(Fs2_bits).v;\n                        if (isNaNF64UI(f64(freg(Fs1_bits)).v) &&\n                            isNaNF64UI(f64(Fs2_bits).v))\n                            Fd_bits = f64(defaultNaNF64UI).v;\n                    ', 'FloatCmpOp'],{})
                  
                      return new Fmax_d(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x16: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fmin_h(['\n                        bool less = f16_lt_quiet(f16(freg(Fs1_bits)),\n                            f16(freg(Fs2_bits))) ||\n                            (f16_eq(f16(freg(Fs1_bits)),\n                            f16(freg(Fs2_bits))) &&\n                            bits(f16(freg(Fs1_bits)).v, 15));\n\n                        Fd_bits = less ||\n                            isNaNF16UI(f16(freg(Fs2_bits)).v) ?\n                            freg(Fs1_bits).v : freg(Fs2_bits).v;\n                        if (isNaNF16UI(f16(freg(Fs1_bits)).v) &&\n                            isNaNF16UI(f16(freg(Fs2_bits)).v))\n                            Fd_bits = f16(defaultNaNF16UI).v;\n                        ', 'FloatCmpOp'],{})
                  
                      return new Fmin_h(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fmax_h(['\n                        bool greater = f16_lt_quiet(f16(freg(Fs2_bits)),\n                            f16(freg(Fs1_bits))) ||\n                            (f16_eq(f16(freg(Fs2_bits)),\n                            f16(freg(Fs1_bits))) &&\n                            bits(f16(freg(Fs2_bits)).v, 15));\n\n                        Fd_bits = greater ||\n                            isNaNF16UI(f16(freg(Fs2_bits)).v) ?\n                            freg(Fs1_bits).v : freg(Fs2_bits).v;\n                        if (isNaNF16UI(f16(freg(Fs1_bits)).v) &&\n                            isNaNF16UI(f16(freg(Fs2_bits)).v))\n                            Fd_bits = f16(defaultNaNF16UI).v;\n                        ', 'FloatCmpOp'],{})
                  
                      return new Fmax_h(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x20: 
              switch (CONV_SGN) {
                
                case 0x1:   
                  // FPROp::fcvt_s_d(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f64_to_f32(f64(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_s_d(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fcvt_s_h(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f16_to_f32(f16(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_s_h(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x21: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_d_s(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f32_to_f64(f32(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_d_s(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fcvt_d_h(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f16_to_f64(f16(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_d_h(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x22: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_h_s(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f32_to_f16(f32(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_h_s(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fcvt_h_d(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f64_to_f16(f64(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_h_d(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x2c:   
              // FPROp::fsqrt_s(['\n                    if (RS2 != 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x1", machInst);\n                    }\n                    freg_t fd;\n                    RM_REQUIRED;\n                    fd = freg(f32_sqrt(f32(freg(Fs1_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatSqrtOp'],{})
              
                  return new Fsqrt_s(machInst);
              break;
            
            case 0x2d:   
              // FPROp::fsqrt_d(['\n                    if (RS2 != 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x1", machInst);\n                    }\n                    freg_t fd;\n                    RM_REQUIRED;\n                    fd = freg(f64_sqrt(f64(freg(Fs1_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatSqrtOp'],{})
              
                  return new Fsqrt_d(machInst);
              break;
            
            case 0x2e:   
              // FPROp::fsqrt_h(['\n                    if (RS2 != 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x1", machInst);\n                    }\n                    freg_t fd;\n                    RM_REQUIRED;\n                    fd = freg(f16_sqrt(f16(freg(Fs1_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatSqrtOp'],{})
              
                  return new Fsqrt_h(machInst);
              break;
            
            case 0x50: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fle_s(['\n                        Rd = f32_le(f32(freg(Fs1_bits)), f32(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Fle_s(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::flt_s(['\n                        Rd = f32_lt(f32(freg(Fs1_bits)), f32(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Flt_s(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::feq_s(['\n                        Rd = f32_eq(f32(freg(Fs1_bits)), f32(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Feq_s(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x51: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fle_d(['\n                        Rd = f64_le(f64(freg(Fs1_bits)), f64(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Fle_d(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::flt_d(['\n                        Rd = f64_lt(f64(freg(Fs1_bits)), f64(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Flt_d(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::feq_d(['\n                        Rd = f64_eq(f64(freg(Fs1_bits)), f64(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Feq_d(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x52: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fle_h(['\n                        Rd = f16_le(f16(freg(Fs1_bits)), f16(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Fle_h(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::flt_h(['\n                        Rd = f16_lt(f16(freg(Fs1_bits)), f16(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Flt_h(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::feq_h(['\n                        Rd = f16_eq(f16(freg(Fs1_bits)), f16(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Feq_h(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x60: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_w_s(['\n                        RM_REQUIRED;\n                        Rd_sd = sext<32>(f32_to_i32(f32(freg(Fs1_bits)), rm,\n                                                    true));\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_w_s(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fcvt_wu_s(['\n                        RM_REQUIRED;\n                        Rd = sext<32>(f32_to_ui32(f32(freg(Fs1_bits)), rm,\n                                                  true));\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_wu_s(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fcvt_l_s(['\n                        RM_REQUIRED;\n                        Rd_sd = f32_to_i64(f32(freg(Fs1_bits)), rm, true);\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_l_s(machInst);
                  break;
                
                case 0x3:   
                  // FPROp::fcvt_lu_s(['\n                        RM_REQUIRED;\n                        Rd = f32_to_ui64(f32(freg(Fs1_bits)), rm, true);\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_lu_s(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x61: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_w_d(['\n                        RM_REQUIRED;\n                        Rd_sd = sext<32>(f64_to_i32(f64(freg(Fs1_bits)), rm,\n                                                    true));\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_w_d(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fcvt_wu_d(['\n                        RM_REQUIRED;\n                        Rd = sext<32>(f64_to_ui32(f64(freg(Fs1_bits)), rm,\n                                                  true));\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_wu_d(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fcvt_l_d(['\n                        RM_REQUIRED;\n                        Rd_sd = f64_to_i64(f64(freg(Fs1_bits)), rm, true);\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_l_d(machInst);
                  break;
                
                case 0x3:   
                  // FPROp::fcvt_lu_d(['\n                        RM_REQUIRED;\n                        Rd = f64_to_ui64(f64(freg(Fs1_bits)), rm, true);\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_lu_d(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x62: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_w_h(['\n                        RM_REQUIRED;\n                        Rd_sd = sext<32>(f16_to_i32(f16(freg(Fs1_bits)), rm,\n                                                    true));\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_w_h(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fcvt_wu_h(['\n                        RM_REQUIRED;\n                        Rd = sext<32>(f16_to_ui32(f16(freg(Fs1_bits)), rm,\n                                                  true));\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_wu_h(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fcvt_l_h(['\n                        RM_REQUIRED;\n                        Rd_sd = f16_to_i64(f16(freg(Fs1_bits)), rm, true);\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_l_h(machInst);
                  break;
                
                case 0x3:   
                  // FPROp::fcvt_lu_h(['\n                        RM_REQUIRED;\n                        Rd = f16_to_ui64(f16(freg(Fs1_bits)), rm, true);\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_lu_h(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x68: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_s_w(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(i32_to_f32((int32_t)Rs1_sw));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_s_w(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fcvt_s_wu(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(ui32_to_f32((uint32_t)Rs1_uw));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_s_wu(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fcvt_s_l(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(i64_to_f32(Rs1_ud));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_s_l(machInst);
                  break;
                
                case 0x3:   
                  // FPROp::fcvt_s_lu(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(ui64_to_f32(Rs1));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_s_lu(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x69: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_d_w(['\n                        RM_REQUIRED;\n                        Fd = (double)Rs1_sw;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_d_w(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fcvt_d_wu(['\n                        RM_REQUIRED;\n                        Fd = (double)Rs1_uw;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_d_wu(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fcvt_d_l(['\n                        RM_REQUIRED;\n                        Fd = (double)Rs1_sd;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_d_l(machInst);
                  break;
                
                case 0x3:   
                  // FPROp::fcvt_d_lu(['\n                        RM_REQUIRED;\n                        Fd = (double)Rs1;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_d_lu(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x6a: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_h_w(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(i32_to_f16((int32_t)Rs1_sw));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_h_w(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fcvt_h_wu(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(ui32_to_f16((uint32_t)Rs1_uw));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_h_wu(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fcvt_h_l(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(i64_to_f16(Rs1_ud));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_h_l(machInst);
                  break;
                
                case 0x3:   
                  // FPROp::fcvt_h_lu(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(ui64_to_f16(Rs1));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_h_lu(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x70: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fmv_x_w(['\n                        Rd = (uint32_t)Fs1_bits;\n                        if ((Rd&0x80000000) != 0) {\n                            Rd |= (0xFFFFFFFFULL << 32);\n                        }\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fmv_x_w(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fclass_s(['\n                        Rd = f32_classify(f32(freg(Fs1_bits)));\n                    ', 'FloatMiscOp'],{})
                  
                      return new Fclass_s(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x71: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fmv_x_d(['\n                        Rd = freg(Fs1_bits).v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fmv_x_d(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fclass_d(['\n                        Rd = f64_classify(f64(freg(Fs1_bits)));\n                    ', 'FloatMiscOp'],{})
                  
                      return new Fclass_d(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x72: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fmv_x_h(['\n                        Rd = (uint16_t)Fs1_bits;\n                        if ((Rd&0x8000) != 0) {\n                            Rd |= (0xFFFFFFFFFFFFULL << 16);\n                        }\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fmv_x_h(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fclass_h(['\n                        Rd = f16_classify(f16(freg(Fs1_bits)));\n                    ', 'FloatMiscOp'],{})
                  
                      return new Fclass_h(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x78:   
              // FPROp::fmv_w_x(['\n                    freg_t fd;\n                    fd = freg(f32(Rs1_uw));\n                    Fd_bits = fd.v;\n                ', 'FloatCvtOp'],{})
              
                  return new Fmv_w_x(machInst);
              break;
            
            case 0x79:   
              // FPROp::fmv_d_x(['\n                    freg_t fd;\n                    fd = freg(f64(Rs1));\n                    Fd_bits = fd.v;\n                ', 'FloatCvtOp'],{})
              
                  return new Fmv_d_x(machInst);
              break;
            
            case 0x7a:   
              // FPROp::fmv_h_x(['\n                    freg_t fd;\n                    fd = freg(f16(Rs1_uh));\n                    Fd_bits = fd.v;\n                ', 'FloatCvtOp'],{})
              
                  return new Fmv_h_x(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x18: 
          switch (FUNCT3) {
            
            case 0x0:   
              // BOp::beq(['\n                    if (Rs1 == Rs2) {\n                        NPC = PC + imm;\n                    } else {\n                        NPC = NPC;\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})
              
                  return new Beq(machInst);
              break;
            
            case 0x1:   
              // BOp::bne(['\n                    if (Rs1 != Rs2) {\n                        NPC = PC + imm;\n                    } else {\n                        NPC = NPC;\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})
              
                  return new Bne(machInst);
              break;
            
            case 0x4:   
              // BOp::blt(['\n                    if (Rs1_sd < Rs2_sd) {\n                        NPC = PC + imm;\n                    } else {\n                        NPC = NPC;\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})
              
                  return new Blt(machInst);
              break;
            
            case 0x5:   
              // BOp::bge(['\n                    if (Rs1_sd >= Rs2_sd) {\n                        NPC = PC + imm;\n                    } else {\n                        NPC = NPC;\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})
              
                  return new Bge(machInst);
              break;
            
            case 0x6:   
              // BOp::bltu(['\n                    if (Rs1 < Rs2) {\n                        NPC = PC + imm;\n                    } else {\n                        NPC = NPC;\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})
              
                  return new Bltu(machInst);
              break;
            
            case 0x7:   
              // BOp::bgeu(['\n                    if (Rs1 >= Rs2) {\n                        NPC = PC + imm;\n                    } else {\n                        NPC = NPC;\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})
              
                  return new Bgeu(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x19: 
          switch (FUNCT3) {
            
            case 0x0:   
              // Jump::jalr((['\n                Rd = NPC;\n                NPC = (imm + Rs1) & (~0x1);\n            ', 'IsIndirectControl', 'IsUncondControl'], {}))
              
                  return new Jalr(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x1b:   
          // JOp::jal((['\n            Rd = NPC;\n            NPC = PC + imm;\n        ', 'IsDirectControl', 'IsUncondControl'], {}))
          
              return new Jal(machInst);
          break;
        
        case 0x1c: 
          switch (FUNCT3) {
            
            case 0x0: 
              switch (FUNCT7) {
                
                case 0x0: 
                  switch (RS2) {
                    
                    case 0x0:   
                      // SystemOp::ecall(['\n                            return std::make_shared<SyscallFault>(\n                                (PrivilegeMode)xc->readMiscReg(MISCREG_PRV));\n                        ', 'IsSerializeAfter', 'IsNonSpeculative', 'IsSyscall', 'No_OpClass'],{})
                      
                          return new Ecall(machInst);
                      break;
                    
                    case 0x1:   
                      // SystemOp::ebreak(['\n                            return std::make_shared<BreakpointFault>(\n                                xc->pcState());\n                        ', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})
                      
                          return new Ebreak(machInst);
                      break;
                    
                    case 0x2:   
                      // SystemOp::uret(['\n                            STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                            status.uie = status.upie;\n                            status.upie = 1;\n                            xc->setMiscReg(MISCREG_STATUS, status);\n                            NPC = xc->readMiscReg(MISCREG_UEPC);\n                        ', 'IsSerializeAfter', 'IsNonSpeculative', 'IsReturn'],{})
                      
                          return new Uret(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x8: 
                  switch (RS2) {
                    
                    case 0x2:   
                      // SystemOp::sret(['\n                            STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                            auto pm = (PrivilegeMode)xc->readMiscReg(\n                                MISCREG_PRV);\n                            if (pm == PRV_U ||\n                                (pm == PRV_S && status.tsr == 1)) {\n                                return std::make_shared<IllegalInstFault>(\n                                            "sret in user mode or TSR enabled",\n                                            machInst);\n                                NPC = NPC;\n                            } else {\n                                xc->setMiscReg(MISCREG_PRV, status.spp);\n                                status.sie = status.spie;\n                                status.spie = 1;\n                                status.spp = PRV_U;\n                                xc->setMiscReg(MISCREG_STATUS, status);\n                                NPC = xc->readMiscReg(MISCREG_SEPC);\n                            }\n                        ', 'IsSerializeAfter', 'IsNonSpeculative', 'IsReturn'],{})
                      
                          return new Sret(machInst);
                      break;
                    
                    case 0x5:   
                      // SystemOp::wfi(['\n                            STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                            auto pm = (PrivilegeMode)xc->readMiscReg(\n                                MISCREG_PRV);\n                            if (pm == PRV_U ||\n                                (pm == PRV_S && status.tw == 1)) {\n                                return std::make_shared<IllegalInstFault>(\n                                            "wfi in user mode or TW enabled",\n                                            machInst);\n                            }\n                            // don\'t do anything for now\n                        ', 'No_OpClass'],{})
                      
                          return new Wfi(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x9:   
                  // SystemOp::sfence_vma(['\n                        STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                        auto pm = (PrivilegeMode)xc->readMiscReg(MISCREG_PRV);\n                        if (pm == PRV_U || (pm == PRV_S && status.tvm == 1)) {\n                            return std::make_shared<IllegalInstFault>(\n                                        "sfence in user mode or TVM enabled",\n                                        machInst);\n                        }\n                        xc->tcBase()->getMMUPtr()->demapPage(Rs1, Rs2);\n                    ', 'IsNonSpeculative', 'IsSerializeAfter', 'No_OpClass'],{})
                  
                      return new Sfence_vma(machInst);
                  break;
                
                case 0x18:   
                  // SystemOp::mret(['\n                        if (xc->readMiscReg(MISCREG_PRV) != PRV_M) {\n                            return std::make_shared<IllegalInstFault>(\n                                        "mret at lower privilege", machInst);\n                            NPC = NPC;\n                        } else {\n                            STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                            xc->setMiscReg(MISCREG_PRV, status.mpp);\n                            xc->setMiscReg(MISCREG_NMIE, 1);\n                            status.mie = status.mpie;\n                            status.mpie = 1;\n                            status.mpp = PRV_U;\n                            xc->setMiscReg(MISCREG_STATUS, status);\n                            NPC = xc->readMiscReg(MISCREG_MEPC);\n                        }\n                    ', 'IsSerializeAfter', 'IsNonSpeculative', 'IsReturn'],{})
                  
                      return new Mret(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x1:   
              // CSROp::csrrw(['\n                    Rd = data;\n                    data = Rs1;\n                ', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})
              
                  return new Csrrw(machInst);
              break;
            
            case 0x2:   
              // CSROp::csrrs(['\n                    Rd = data;\n                    data |= Rs1;\n                ', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})
              
                  return new Csrrs(machInst);
              break;
            
            case 0x3:   
              // CSROp::csrrc(['\n                    Rd = data;\n                    data &= ~Rs1;\n                ', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})
              
                  return new Csrrc(machInst);
              break;
            
            case 0x5:   
              // CSROp::csrrwi(['\n                    Rd = data;\n                    data = uimm;\n                ', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})
              
                  return new Csrrwi(machInst);
              break;
            
            case 0x6:   
              // CSROp::csrrsi(['\n                    Rd = data;\n                    data |= uimm;\n                ', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})
              
                  return new Csrrsi(machInst);
              break;
            
            case 0x7:   
              // CSROp::csrrci(['\n                    Rd = data;\n                    data &= ~uimm;\n                ', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})
              
                  return new Csrrci(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x1e:   
          // M5Op::M5Op(([], {}))
          
              return new M5Op(machInst);
          break;
        
        default:
          
          // Unknown::unknown(([], {}))
          return new Unknown(machInst);
          break;
        }
      GEM5_UNREACHABLE;
    
    default:
      
      // Unknown::unknown(([], {}))
      return new Unknown(machInst);
      break;
    }
  }