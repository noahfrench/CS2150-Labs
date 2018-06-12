	.text
	.intel_syntax noprefix
	.file	"main.cpp"
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
	.globl	_Z9arrayFuncPi
	.align	16, 0x90
	.type	_Z9arrayFuncPi,@function
_Z9arrayFuncPi:                         # @_Z9arrayFuncPi
	.cfi_startproc
# BB#0:
	mov	qword ptr [rsp - 8], rdi
	mov	dword ptr [rsp - 12], 0
.LBB1_1:                                # =>This Inner Loop Header: Depth=1
	cmp	dword ptr [rsp - 12], 5
	jge	.LBB1_4
# BB#2:                                 #   in Loop: Header=BB1_1 Depth=1
	movsxd	rax, dword ptr [rsp - 12]
	mov	rcx, qword ptr [rsp - 8]
	mov	dword ptr [rcx + 4*rax], 2
# BB#3:                                 #   in Loop: Header=BB1_1 Depth=1
	mov	eax, dword ptr [rsp - 12]
	add	eax, 1
	mov	dword ptr [rsp - 12], eax
	jmp	.LBB1_1
.LBB1_4:
	ret
.Lfunc_end1:
	.size	_Z9arrayFuncPi, .Lfunc_end1-_Z9arrayFuncPi
	.cfi_endproc

	.globl	_Z7intFuncc
	.align	16, 0x90
	.type	_Z7intFuncc,@function
_Z7intFuncc:                            # @_Z7intFuncc
	.cfi_startproc
# BB#0:
	mov	al, dil
	mov	byte ptr [rsp - 1], al
	ret
.Lfunc_end2:
	.size	_Z7intFuncc, .Lfunc_end2-_Z7intFuncc
	.cfi_endproc

	.globl	_Z7refFuncRi
	.align	16, 0x90
	.type	_Z7refFuncRi,@function
_Z7refFuncRi:                           # @_Z7refFuncRi
	.cfi_startproc
# BB#0:
	mov	qword ptr [rsp - 8], rdi
	ret
.Lfunc_end3:
	.size	_Z7refFuncRi, .Lfunc_end3-_Z7refFuncRi
	.cfi_endproc

	.globl	_Z7ptrFuncPi
	.align	16, 0x90
	.type	_Z7ptrFuncPi,@function
_Z7ptrFuncPi:                           # @_Z7ptrFuncPi
	.cfi_startproc
# BB#0:
	mov	qword ptr [rsp - 8], rdi
	ret
.Lfunc_end4:
	.size	_Z7ptrFuncPi, .Lfunc_end4-_Z7ptrFuncPi
	.cfi_endproc

	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:
	sub	rsp, 24
.Ltmp1:
	.cfi_def_cfa_offset 32
	mov	byte ptr [rsp + 23], 109
	movsx	edi, byte ptr [rsp + 23]
	call	_Z7intFuncc
	lea	rdi, [rsp + 16]
	mov	dword ptr [rsp + 16], 7
	call	_Z7refFuncRi
	lea	rdi, [rsp + 16]
	mov	qword ptr [rsp + 8], rdi
	mov	rdi, qword ptr [rsp + 8]
	call	_Z7ptrFuncPi
	xor	eax, eax
	add	rsp, 24
	ret
.Lfunc_end5:
	.size	main, .Lfunc_end5-main
	.cfi_endproc

	.section	.text.startup,"ax",@progbits
	.align	16, 0x90
	.type	_GLOBAL__sub_I_main.cpp,@function
_GLOBAL__sub_I_main.cpp:                # @_GLOBAL__sub_I_main.cpp
	.cfi_startproc
# BB#0:
	push	rax
.Ltmp2:
	.cfi_def_cfa_offset 16
	call	__cxx_global_var_init
	pop	rax
	ret
.Lfunc_end6:
	.size	_GLOBAL__sub_I_main.cpp, .Lfunc_end6-_GLOBAL__sub_I_main.cpp
	.cfi_endproc

	.type	_ZStL8__ioinit,@object  # @_ZStL8__ioinit
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.init_array,"aw",@init_array
	.align	8
	.quad	_GLOBAL__sub_I_main.cpp

	.ident	"clang version 3.8.0-2ubuntu4 (tags/RELEASE_380/final)"
	.section	".note.GNU-stack","",@progbits
