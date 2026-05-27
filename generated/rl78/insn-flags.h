/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_nop 1
#define HAVE_movsi 1
#define HAVE_movsf 1
#define HAVE_ashrsi3_virt 1
#define HAVE_lshrsi3_virt 1
#define HAVE_ashlsi3_virt 1
#define HAVE_movqi_to_es 1
#define HAVE_movqi_from_es 1
#define HAVE_movqi_cs 1
#define HAVE_jump 1
#define HAVE_cbranchhi4_real (rl78_real_insns_ok ())
#define HAVE_cbranchhi4_real_inverted (rl78_real_insns_ok ())
#define HAVE_bf 1
#define HAVE_bt 1
#define HAVE_rl78_return 1
#define HAVE_interrupt_return 1
#define HAVE_brk_interrupt_return 1
#define HAVE_push 1
#define HAVE_pop 1
#define HAVE_sel_rb (!TARGET_G10)
#define HAVE_trampoline_init 1
#define HAVE_trampoline_uninit 1
#define HAVE_nonlocal_goto_insn 1
#define HAVE_addsi3_internal_virt (rl78_virt_insns_ok ())
#define HAVE_addsi3_internal_real (rl78_real_insns_ok ())
#define HAVE_subsi3_internal_virt (rl78_virt_insns_ok ())
#define HAVE_subsi3_internal_real (rl78_real_insns_ok ())
#define HAVE_mulhi3_g14 (RL78_MUL_G14)
#define HAVE_mulhi3_g13 (RL78_MUL_G13)
#define HAVE_mulsi3_g14 (RL78_MUL_G14)
#define HAVE_mulsi3_g13 (RL78_MUL_G13)
#define HAVE_udivmodsi4_g14 (RL78_MUL_G14)
#define HAVE_udivmodsi4_g13 (RL78_MUL_G13)
#define HAVE_movqi 1
#define HAVE_movhi 1
#define HAVE_bswaphi2 1
#define HAVE_zero_extendqihi2 1
#define HAVE_extendqihi2 1
#define HAVE_addqi3 1
#define HAVE_addhi3 1
#define HAVE_subqi3 1
#define HAVE_subhi3 1
#define HAVE_negqi2 1
#define HAVE_neghi2 1
#define HAVE_umulqihi3 1
#define HAVE_andqi3 1
#define HAVE_iorqi3 1
#define HAVE_xorqi3 1
#define HAVE_one_cmplqi2 1
#define HAVE_ashlqi3 1
#define HAVE_ashlhi3 1
#define HAVE_ashrqi3 1
#define HAVE_ashrhi3 1
#define HAVE_lshrqi3 1
#define HAVE_lshrhi3 1
#define HAVE_ashrsi3 1
#define HAVE_lshrsi3 1
#define HAVE_ashlsi3 1
#define HAVE_indirect_jump 1
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_cbranchqi4 1
#define HAVE_cbranchhi4 1
#define HAVE_cbranchsi4 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_eh_return 1
#define HAVE_nonlocal_goto 1
#define HAVE_es_addr 1
#define HAVE_addsi3 1
#define HAVE_adddi3 1
#define HAVE_subsi3 1
#define HAVE_subdi3 1
#define HAVE_mulqi3 1
#define HAVE_mulhi3 (! RL78_MUL_NONE)
#define HAVE_mulsi3 (! RL78_MUL_NONE)
#define HAVE_udivmodhi4 (RL78_MUL_G14)
#define HAVE_udivmodsi4 (! RL78_MUL_NONE && ! optimize_size)
#define HAVE_movdi 1
#define HAVE_movdf 1
#define HAVE_umindi3 (optimize_size)
#define HAVE_umaxdi3 (optimize_size)
#define HAVE_smindi3 (optimize_size)
#define HAVE_smaxdi3 (optimize_size)
#define HAVE_anddi3 (optimize_size)
extern rtx        gen_nop                      (void);
extern rtx        gen_movsi                    (rtx, rtx);
extern rtx        gen_movsf                    (rtx, rtx);
extern rtx        gen_ashrsi3_virt             (rtx, rtx, rtx);
extern rtx        gen_lshrsi3_virt             (rtx, rtx, rtx);
extern rtx        gen_ashlsi3_virt             (rtx, rtx, rtx);
extern rtx        gen_movqi_to_es              (rtx);
extern rtx        gen_movqi_from_es            (rtx);
extern rtx        gen_movqi_cs                 (rtx);
extern rtx        gen_jump                     (rtx);
extern rtx        gen_cbranchhi4_real          (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchhi4_real_inverted (rtx, rtx, rtx, rtx);
extern rtx        gen_bf                       (rtx, rtx);
extern rtx        gen_bt                       (rtx, rtx);
extern rtx        gen_rl78_return              (void);
extern rtx        gen_interrupt_return         (void);
extern rtx        gen_brk_interrupt_return     (void);
extern rtx        gen_push                     (rtx);
extern rtx        gen_pop                      (rtx);
extern rtx        gen_sel_rb                   (rtx);
extern rtx        gen_trampoline_init          (rtx, rtx, rtx);
extern rtx        gen_trampoline_uninit        (void);
extern rtx        gen_nonlocal_goto_insn       (rtx, rtx, rtx, rtx);
extern rtx        gen_addsi3_internal_virt     (rtx, rtx, rtx);
extern rtx        gen_addsi3_internal_real     (rtx, rtx, rtx);
extern rtx        gen_subsi3_internal_virt     (rtx, rtx, rtx);
extern rtx        gen_subsi3_internal_real     (rtx, rtx, rtx);
extern rtx        gen_mulhi3_g14               (rtx, rtx, rtx);
extern rtx        gen_mulhi3_g13               (rtx, rtx, rtx);
extern rtx        gen_mulsi3_g14               (rtx, rtx, rtx);
extern rtx        gen_mulsi3_g13               (rtx, rtx, rtx);
extern rtx        gen_udivmodsi4_g14           (rtx, rtx, rtx, rtx);
extern rtx        gen_udivmodsi4_g13           (rtx, rtx, rtx, rtx);
extern rtx        gen_movqi                    (rtx, rtx);
extern rtx        gen_movhi                    (rtx, rtx);
extern rtx        gen_bswaphi2                 (rtx, rtx);
extern rtx        gen_zero_extendqihi2         (rtx, rtx);
extern rtx        gen_extendqihi2              (rtx, rtx);
extern rtx        gen_addqi3                   (rtx, rtx, rtx);
extern rtx        gen_addhi3                   (rtx, rtx, rtx);
extern rtx        gen_subqi3                   (rtx, rtx, rtx);
extern rtx        gen_subhi3                   (rtx, rtx, rtx);
extern rtx        gen_negqi2                   (rtx, rtx);
extern rtx        gen_neghi2                   (rtx, rtx);
extern rtx        gen_umulqihi3                (rtx, rtx, rtx);
extern rtx        gen_andqi3                   (rtx, rtx, rtx);
extern rtx        gen_iorqi3                   (rtx, rtx, rtx);
extern rtx        gen_xorqi3                   (rtx, rtx, rtx);
extern rtx        gen_one_cmplqi2              (rtx, rtx);
extern rtx        gen_ashlqi3                  (rtx, rtx, rtx);
extern rtx        gen_ashlhi3                  (rtx, rtx, rtx);
extern rtx        gen_ashrqi3                  (rtx, rtx, rtx);
extern rtx        gen_ashrhi3                  (rtx, rtx, rtx);
extern rtx        gen_lshrqi3                  (rtx, rtx, rtx);
extern rtx        gen_lshrhi3                  (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                  (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                  (rtx, rtx, rtx);
extern rtx        gen_ashlsi3                  (rtx, rtx, rtx);
extern rtx        gen_indirect_jump            (rtx);
extern rtx        gen_call                     (rtx, rtx);
extern rtx        gen_call_value               (rtx, rtx, rtx);
extern rtx        gen_cbranchqi4               (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchhi4               (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4               (rtx, rtx, rtx, rtx);
extern rtx        gen_prologue                 (void);
extern rtx        gen_epilogue                 (void);
extern rtx        gen_sibcall_epilogue         (void);
extern rtx        gen_eh_return                (rtx);
extern rtx        gen_nonlocal_goto            (rtx, rtx, rtx, rtx);
extern rtx        gen_es_addr                  (rtx);
extern rtx        gen_addsi3                   (rtx, rtx, rtx);
extern rtx        gen_adddi3                   (rtx, rtx, rtx);
extern rtx        gen_subsi3                   (rtx, rtx, rtx);
extern rtx        gen_subdi3                   (rtx, rtx, rtx);
extern rtx        gen_mulqi3                   (rtx, rtx, rtx);
extern rtx        gen_mulhi3                   (rtx, rtx, rtx);
extern rtx        gen_mulsi3                   (rtx, rtx, rtx);
extern rtx        gen_udivmodhi4               (rtx, rtx, rtx, rtx);
extern rtx        gen_udivmodsi4               (rtx, rtx, rtx, rtx);
extern rtx        gen_movdi                    (rtx, rtx);
extern rtx        gen_movdf                    (rtx, rtx);
extern rtx        gen_umindi3                  (rtx, rtx, rtx);
extern rtx        gen_umaxdi3                  (rtx, rtx, rtx);
extern rtx        gen_smindi3                  (rtx, rtx, rtx);
extern rtx        gen_smaxdi3                  (rtx, rtx, rtx);
extern rtx        gen_anddi3                   (rtx, rtx, rtx);

#endif /* GCC_INSN_FLAGS_H */
