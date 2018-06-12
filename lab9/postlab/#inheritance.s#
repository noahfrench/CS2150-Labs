	.text
	.intel_syntax noprefix
	.file	"inheritance.cpp"
	.section	.text.startup,"ax",@progbits
	.align	16, 0x90
	.type	__cxx_global_var_init,@function
__cxx_global_var_init:                  # @__cxx_global_var_init
	.cfi_startproc
# BB#0:
	push	rax
.Ltmp0:
	.cfi_def_cfa_offset 16
	movabs	rdi, _ZStL8__ioinit
	call	_ZNSt8ios_base4InitC1Ev
	movabs	rdi, _ZNSt8ios_base4InitD1Ev
	movabs	rsi, _ZStL8__ioinit
	movabs	rdx, __dso_handle
	call	__cxa_atexit
	mov	dword ptr [rsp + 4], eax # 4-byte Spill
	pop	rax
	ret
.Lfunc_end0:
	.size	__cxx_global_var_init, .Lfunc_end0-__cxx_global_var_init
	.cfi_endproc

	.text
	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
.Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception0
# BB#0:
	sub	rsp, 120
.Ltmp11:
	.cfi_def_cfa_offset 128
	mov	dword ptr [rsp + 116], 0
	lea	rax, [rsp + 64]
	mov	rdi, rax
	mov	qword ptr [rsp + 8], rax # 8-byte Spill
	call	_ZN8PlatypusC2Ev
.Ltmp1:
	lea	rdi, [rsp + 32]
	mov	rsi, qword ptr [rsp + 8] # 8-byte Reload
	call	_ZN8Platypus7getNameB5cxx11Ev
.Ltmp2:
	jmp	.LBB1_1
.LBB1_1:
.Ltmp3:
	lea	rdi, [rsp + 32]
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
.Ltmp4:
	jmp	.LBB1_2
.LBB1_2:
.Ltmp5:
	lea	rdi, [rsp + 64]
	call	_ZN8Platypus6getAgeEv
.Ltmp6:
	mov	dword ptr [rsp + 4], eax # 4-byte Spill
	jmp	.LBB1_3
.LBB1_3:
	lea	rdi, [rsp + 64]
	mov	dword ptr [rsp + 116], 0
	call	_ZN8PlatypusD2Ev
	mov	eax, dword ptr [rsp + 116]
	add	rsp, 120
	ret
.LBB1_4:
.Ltmp7:
	mov	ecx, edx
	mov	qword ptr [rsp + 24], rax
	mov	dword ptr [rsp + 20], ecx
.Ltmp8:
	lea	rdi, [rsp + 64]
	call	_ZN8PlatypusD2Ev
.Ltmp9:
	jmp	.LBB1_5
.LBB1_5:
	jmp	.LBB1_6
.LBB1_6:
	mov	rdi, qword ptr [rsp + 24]
	call	_Unwind_Resume
.LBB1_7:
.Ltmp10:
	mov	ecx, edx
	mov	rdi, rax
	mov	dword ptr [rsp], ecx    # 4-byte Spill
	call	__clang_call_terminate
.Lfunc_end1:
	.size	main, .Lfunc_end1-main
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.align	4
GCC_except_table1:
.Lexception0:
	.byte	255                     # @LPStart Encoding = omit
	.byte	3                       # @TType Encoding = udata4
	.byte	73                      # @TType base offset
	.byte	3                       # Call site Encoding = udata4
	.byte	65                      # Call site table length
	.long	.Lfunc_begin0-.Lfunc_begin0 # >> Call Site 1 <<
	.long	.Ltmp1-.Lfunc_begin0    #   Call between .Lfunc_begin0 and .Ltmp1
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.long	.Ltmp1-.Lfunc_begin0    # >> Call Site 2 <<
	.long	.Ltmp6-.Ltmp1           #   Call between .Ltmp1 and .Ltmp6
	.long	.Ltmp7-.Lfunc_begin0    #     jumps to .Ltmp7
	.byte	0                       #   On action: cleanup
	.long	.Ltmp6-.Lfunc_begin0    # >> Call Site 3 <<
	.long	.Ltmp8-.Ltmp6           #   Call between .Ltmp6 and .Ltmp8
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.long	.Ltmp8-.Lfunc_begin0    # >> Call Site 4 <<
	.long	.Ltmp9-.Ltmp8           #   Call between .Ltmp8 and .Ltmp9
	.long	.Ltmp10-.Lfunc_begin0   #     jumps to .Ltmp10
	.byte	1                       #   On action: 1
	.long	.Ltmp9-.Lfunc_begin0    # >> Call Site 5 <<
	.long	.Lfunc_end1-.Ltmp9      #   Call between .Ltmp9 and .Lfunc_end1
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
	.align	4

	.section	.text._ZN8PlatypusC2Ev,"axG",@progbits,_ZN8PlatypusC2Ev,comdat
	.weak	_ZN8PlatypusC2Ev
	.align	16, 0x90
	.type	_ZN8PlatypusC2Ev,@function
_ZN8PlatypusC2Ev:                       # @_ZN8PlatypusC2Ev
	.cfi_startproc
# BB#0:
	sub	rsp, 24
.Ltmp12:
	.cfi_def_cfa_offset 32
	mov	qword ptr [rsp + 16], rdi
	mov	rdi, qword ptr [rsp + 16]
	mov	rax, rdi
	mov	qword ptr [rsp + 8], rdi # 8-byte Spill
	mov	rdi, rax
	call	_ZN6MammalC2Ev
	movabs	rax, _ZTV8Platypus
	add	rax, 16
	mov	rdi, qword ptr [rsp + 8] # 8-byte Reload
	mov	qword ptr [rdi], rax
	add	rsp, 24
	ret
.Lfunc_end2:
	.size	_ZN8PlatypusC2Ev, .Lfunc_end2-_ZN8PlatypusC2Ev
	.cfi_endproc

	.section	.text._ZN8Platypus7getNameB5cxx11Ev,"axG",@progbits,_ZN8Platypus7getNameB5cxx11Ev,comdat
	.weak	_ZN8Platypus7getNameB5cxx11Ev
	.align	16, 0x90
	.type	_ZN8Platypus7getNameB5cxx11Ev,@function
_ZN8Platypus7getNameB5cxx11Ev:          # @_ZN8Platypus7getNameB5cxx11Ev
.Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception1
# BB#0:
	sub	rsp, 56
.Ltmp16:
	.cfi_def_cfa_offset 64
	mov	rax, rdi
	mov	qword ptr [rsp + 48], rsi
	lea	rsi, [rsp + 40]
	mov	qword ptr [rsp + 16], rdi # 8-byte Spill
	mov	rdi, rsi
	mov	qword ptr [rsp + 8], rax # 8-byte Spill
	mov	qword ptr [rsp], rsi    # 8-byte Spill
	call	_ZNSaIcEC1Ev
.Ltmp13:
	mov	ecx, .L.str
	mov	esi, ecx
	mov	rdi, qword ptr [rsp + 16] # 8-byte Reload
	mov	rdx, qword ptr [rsp]    # 8-byte Reload
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.Ltmp14:
	jmp	.LBB3_1
.LBB3_1:
	lea	rdi, [rsp + 40]
	call	_ZNSaIcED1Ev
	mov	rax, qword ptr [rsp + 8] # 8-byte Reload
	add	rsp, 56
	ret
.LBB3_2:
.Ltmp15:
	lea	rdi, [rsp + 40]
	mov	ecx, edx
	mov	qword ptr [rsp + 32], rax
	mov	dword ptr [rsp + 28], ecx
	call	_ZNSaIcED1Ev
# BB#3:
	mov	rdi, qword ptr [rsp + 32]
	call	_Unwind_Resume
.Lfunc_end3:
	.size	_ZN8Platypus7getNameB5cxx11Ev, .Lfunc_end3-_ZN8Platypus7getNameB5cxx11Ev
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.align	4
GCC_except_table3:
.Lexception1:
	.byte	255                     # @LPStart Encoding = omit
	.byte	3                       # @TType Encoding = udata4
	.asciz	"\234"                  # @TType base offset
	.byte	3                       # Call site Encoding = udata4
	.byte	26                      # Call site table length
	.long	.Ltmp13-.Lfunc_begin1   # >> Call Site 1 <<
	.long	.Ltmp14-.Ltmp13         #   Call between .Ltmp13 and .Ltmp14
	.long	.Ltmp15-.Lfunc_begin1   #     jumps to .Ltmp15
	.byte	0                       #   On action: cleanup
	.long	.Ltmp14-.Lfunc_begin1   # >> Call Site 2 <<
	.long	.Lfunc_end3-.Ltmp14     #   Call between .Ltmp14 and .Lfunc_end3
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.align	4

	.section	.text._ZN8Platypus6getAgeEv,"axG",@progbits,_ZN8Platypus6getAgeEv,comdat
	.weak	_ZN8Platypus6getAgeEv
	.align	16, 0x90
	.type	_ZN8Platypus6getAgeEv,@function
_ZN8Platypus6getAgeEv:                  # @_ZN8Platypus6getAgeEv
	.cfi_startproc
# BB#0:
	xor	eax, eax
	mov	qword ptr [rsp - 8], rdi
	ret
.Lfunc_end4:
	.size	_ZN8Platypus6getAgeEv, .Lfunc_end4-_ZN8Platypus6getAgeEv
	.cfi_endproc

	.section	.text._ZN8PlatypusD2Ev,"axG",@progbits,_ZN8PlatypusD2Ev,comdat
	.weak	_ZN8PlatypusD2Ev
	.align	16, 0x90
	.type	_ZN8PlatypusD2Ev,@function
_ZN8PlatypusD2Ev:                       # @_ZN8PlatypusD2Ev
	.cfi_startproc
# BB#0:
	push	rax
.Ltmp17:
	.cfi_def_cfa_offset 16
	mov	qword ptr [rsp], rdi
	mov	rdi, qword ptr [rsp]
	call	_ZN6MammalD2Ev
	pop	rax
	ret
.Lfunc_end5:
	.size	_ZN8PlatypusD2Ev, .Lfunc_end5-_ZN8PlatypusD2Ev
	.cfi_endproc

	.section	.text.__clang_call_terminate,"axG",@progbits,__clang_call_terminate,comdat
	.hidden	__clang_call_terminate
	.weak	__clang_call_terminate
	.align	16, 0x90
	.type	__clang_call_terminate,@function
__clang_call_terminate:                 # @__clang_call_terminate
# BB#0:
	push	rax
	call	__cxa_begin_catch
	mov	qword ptr [rsp], rax    # 8-byte Spill
	call	_ZSt9terminatev
.Lfunc_end6:
	.size	__clang_call_terminate, .Lfunc_end6-__clang_call_terminate

	.section	.text._ZN6MammalC2Ev,"axG",@progbits,_ZN6MammalC2Ev,comdat
	.weak	_ZN6MammalC2Ev
	.align	16, 0x90
	.type	_ZN6MammalC2Ev,@function
_ZN6MammalC2Ev:                         # @_ZN6MammalC2Ev
	.cfi_startproc
# BB#0:
	push	rax
.Ltmp18:
	.cfi_def_cfa_offset 16
	movabs	rax, _ZTV6Mammal
	add	rax, 16
	mov	qword ptr [rsp], rdi
	mov	rdi, qword ptr [rsp]
	mov	qword ptr [rdi], rax
	add	rdi, 8
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev
	pop	rax
	ret
.Lfunc_end7:
	.size	_ZN6MammalC2Ev, .Lfunc_end7-_ZN6MammalC2Ev
	.cfi_endproc

	.section	.text._ZN6Mammal7getNameB5cxx11Ev,"axG",@progbits,_ZN6Mammal7getNameB5cxx11Ev,comdat
	.weak	_ZN6Mammal7getNameB5cxx11Ev
	.align	16, 0x90
	.type	_ZN6Mammal7getNameB5cxx11Ev,@function
_ZN6Mammal7getNameB5cxx11Ev:            # @_ZN6Mammal7getNameB5cxx11Ev
	.cfi_startproc
# BB#0:
	sub	rsp, 24
.Ltmp19:
	.cfi_def_cfa_offset 32
	mov	rax, rdi
	mov	qword ptr [rsp + 16], rsi
	mov	rsi, qword ptr [rsp + 16]
	add	rsi, 8
	mov	qword ptr [rsp + 8], rax # 8-byte Spill
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
	mov	rax, qword ptr [rsp + 8] # 8-byte Reload
	add	rsp, 24
	ret
.Lfunc_end8:
	.size	_ZN6Mammal7getNameB5cxx11Ev, .Lfunc_end8-_ZN6Mammal7getNameB5cxx11Ev
	.cfi_endproc

	.section	.text._ZN6Mammal6getAgeEv,"axG",@progbits,_ZN6Mammal6getAgeEv,comdat
	.weak	_ZN6Mammal6getAgeEv
	.align	16, 0x90
	.type	_ZN6Mammal6getAgeEv,@function
_ZN6Mammal6getAgeEv:                    # @_ZN6Mammal6getAgeEv
	.cfi_startproc
# BB#0:
	mov	qword ptr [rsp - 8], rdi
	mov	rdi, qword ptr [rsp - 8]
	mov	eax, dword ptr [rdi + 40]
	ret
.Lfunc_end9:
	.size	_ZN6Mammal6getAgeEv, .Lfunc_end9-_ZN6Mammal6getAgeEv
	.cfi_endproc

	.section	.text._ZN6MammalD2Ev,"axG",@progbits,_ZN6MammalD2Ev,comdat
	.weak	_ZN6MammalD2Ev
	.align	16, 0x90
	.type	_ZN6MammalD2Ev,@function
_ZN6MammalD2Ev:                         # @_ZN6MammalD2Ev
	.cfi_startproc
# BB#0:
	push	rax
.Ltmp20:
	.cfi_def_cfa_offset 16
	movabs	rax, _ZTV6Mammal
	add	rax, 16
	mov	qword ptr [rsp], rdi
	mov	rdi, qword ptr [rsp]
	mov	qword ptr [rdi], rax
	add	rdi, 8
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	pop	rax
	ret
.Lfunc_end10:
	.size	_ZN6MammalD2Ev, .Lfunc_end10-_ZN6MammalD2Ev
	.cfi_endproc

	.section	.text.startup,"ax",@progbits
	.align	16, 0x90
	.type	_GLOBAL__sub_I_inheritance.cpp,@function
_GLOBAL__sub_I_inheritance.cpp:         # @_GLOBAL__sub_I_inheritance.cpp
	.cfi_startproc
# BB#0:
	push	rax
.Ltmp21:
	.cfi_def_cfa_offset 16
	call	__cxx_global_var_init
	pop	rax
	ret
.Lfunc_end11:
	.size	_GLOBAL__sub_I_inheritance.cpp, .Lfunc_end11-_GLOBAL__sub_I_inheritance.cpp
	.cfi_endproc

	.type	_ZStL8__ioinit,@object  # @_ZStL8__ioinit
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.type	_ZTV8Platypus,@object   # @_ZTV8Platypus
	.section	.rodata._ZTV8Platypus,"aG",@progbits,_ZTV8Platypus,comdat
	.weak	_ZTV8Platypus
	.align	8
_ZTV8Platypus:
	.quad	0
	.quad	_ZTI8Platypus
	.quad	_ZN8Platypus7getNameB5cxx11Ev
	.quad	_ZN8Platypus6getAgeEv
	.size	_ZTV8Platypus, 32

	.type	_ZTS8Platypus,@object   # @_ZTS8Platypus
	.section	.rodata._ZTS8Platypus,"aG",@progbits,_ZTS8Platypus,comdat
	.weak	_ZTS8Platypus
_ZTS8Platypus:
	.asciz	"8Platypus"
	.size	_ZTS8Platypus, 10

	.type	_ZTS6Mammal,@object     # @_ZTS6Mammal
	.section	.rodata._ZTS6Mammal,"aG",@progbits,_ZTS6Mammal,comdat
	.weak	_ZTS6Mammal
_ZTS6Mammal:
	.asciz	"6Mammal"
	.size	_ZTS6Mammal, 8

	.type	_ZTI6Mammal,@object     # @_ZTI6Mammal
	.section	.rodata._ZTI6Mammal,"aG",@progbits,_ZTI6Mammal,comdat
	.weak	_ZTI6Mammal
	.align	8
_ZTI6Mammal:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS6Mammal
	.size	_ZTI6Mammal, 16

	.type	_ZTI8Platypus,@object   # @_ZTI8Platypus
	.section	.rodata._ZTI8Platypus,"aG",@progbits,_ZTI8Platypus,comdat
	.weak	_ZTI8Platypus
	.align	16
_ZTI8Platypus:
	.quad	_ZTVN10__cxxabiv121__vmi_class_type_infoE+16
	.quad	_ZTS8Platypus
	.long	0                       # 0x0
	.long	1                       # 0x1
	.quad	_ZTI6Mammal
	.quad	0                       # 0x0
	.size	_ZTI8Platypus, 40

	.type	_ZTV6Mammal,@object     # @_ZTV6Mammal
	.section	.rodata._ZTV6Mammal,"aG",@progbits,_ZTV6Mammal,comdat
	.weak	_ZTV6Mammal
	.align	8
_ZTV6Mammal:
	.quad	0
	.quad	_ZTI6Mammal
	.quad	_ZN6Mammal7getNameB5cxx11Ev
	.quad	_ZN6Mammal6getAgeEv
	.size	_ZTV6Mammal, 32

	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"Platypi do not deserve names."
	.size	.L.str, 30

	.section	.init_array,"aw",@init_array
	.align	8
	.quad	_GLOBAL__sub_I_inheritance.cpp

	.ident	"clang version 3.8.0-2ubuntu4 (tags/RELEASE_380/final)"
	.section	".note.GNU-stack","",@progbits
