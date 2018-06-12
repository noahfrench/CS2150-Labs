	.text
	.intel_syntax noprefix
	.file	"main2.cpp"
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
	.cfi_startproc
# BB#0:
	sub	rsp, 40
.Ltmp1:
	.cfi_def_cfa_offset 48
	lea	rdi, [rsp]
	mov	dword ptr [rsp + 36], 0
	call	_ZN6PersonC2Ev
	lea	rdi, [rsp]
	mov	esi, 17
	mov	byte ptr [rsp], 0
	mov	qword ptr [rsp + 8], 24
	mov	qword ptr [rsp + 8], 25
	call	_ZN6Person6setAgeEi
	xor	eax, eax
	add	rsp, 40
	ret
.Lfunc_end1:
	.size	main, .Lfunc_end1-main
	.cfi_endproc

	.section	.rodata.cst8,"aM",@progbits,8
	.align	8
.LCPI2_0:
	.quad	4641240890982006784     # double 200
	.section	.text._ZN6PersonC2Ev,"axG",@progbits,_ZN6PersonC2Ev,comdat
	.weak	_ZN6PersonC2Ev
	.align	16, 0x90
	.type	_ZN6PersonC2Ev,@function
_ZN6PersonC2Ev:                         # @_ZN6PersonC2Ev
	.cfi_startproc
# BB#0:
	movsd	xmm0, qword ptr [.LCPI2_0] # xmm0 = mem[0],zero
	mov	qword ptr [rsp - 8], rdi
	mov	rdi, qword ptr [rsp - 8]
	mov	dword ptr [rdi + 16], 11
	mov	byte ptr [rdi + 20], 105
	movsd	qword ptr [rdi + 24], xmm0
	ret
.Lfunc_end2:
	.size	_ZN6PersonC2Ev, .Lfunc_end2-_ZN6PersonC2Ev
	.cfi_endproc

	.section	.text._ZN6Person6setAgeEi,"axG",@progbits,_ZN6Person6setAgeEi,comdat
	.weak	_ZN6Person6setAgeEi
	.align	16, 0x90
	.type	_ZN6Person6setAgeEi,@function
_ZN6Person6setAgeEi:                    # @_ZN6Person6setAgeEi
	.cfi_startproc
# BB#0:
	mov	qword ptr [rsp - 8], rdi
	mov	dword ptr [rsp - 12], esi
	mov	rdi, qword ptr [rsp - 8]
	mov	esi, dword ptr [rsp - 12]
	mov	dword ptr [rdi + 16], esi
	ret
.Lfunc_end3:
	.size	_ZN6Person6setAgeEi, .Lfunc_end3-_ZN6Person6setAgeEi
	.cfi_endproc

	.section	.text.startup,"ax",@progbits
	.align	16, 0x90
	.type	_GLOBAL__sub_I_main2.cpp,@function
_GLOBAL__sub_I_main2.cpp:               # @_GLOBAL__sub_I_main2.cpp
	.cfi_startproc
# BB#0:
	push	rax
.Ltmp2:
	.cfi_def_cfa_offset 16
	call	__cxx_global_var_init
	pop	rax
	ret
.Lfunc_end4:
	.size	_GLOBAL__sub_I_main2.cpp, .Lfunc_end4-_GLOBAL__sub_I_main2.cpp
	.cfi_endproc

	.type	_ZStL8__ioinit,@object  # @_ZStL8__ioinit
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.init_array,"aw",@init_array
	.align	8
	.quad	_GLOBAL__sub_I_main2.cpp

	.ident	"clang version 3.8.0-2ubuntu4 (tags/RELEASE_380/final)"
	.section	".note.GNU-stack","",@progbits
