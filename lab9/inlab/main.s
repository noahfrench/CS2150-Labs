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
	.globl	_Z8loopFunci
	.align	16, 0x90
	.type	_Z8loopFunci,@function
_Z8loopFunci:                           # @_Z8loopFunci
	.cfi_startproc
# BB#0:
	mov	dword ptr [rsp - 4], edi
	mov	dword ptr [rsp - 8], 0
	mov	dword ptr [rsp - 12], 0
.LBB1_1:                                # =>This Inner Loop Header: Depth=1
	mov	eax, dword ptr [rsp - 12]
	cmp	eax, dword ptr [rsp - 4]
	jge	.LBB1_4
# BB#2:                                 #   in Loop: Header=BB1_1 Depth=1
	mov	eax, dword ptr [rsp - 8]
	add	eax, 1
	mov	dword ptr [rsp - 8], eax
# BB#3:                                 #   in Loop: Header=BB1_1 Depth=1
	mov	eax, dword ptr [rsp - 12]
	add	eax, 1
	mov	dword ptr [rsp - 12], eax
	jmp	.LBB1_1
.LBB1_4:
	mov	eax, dword ptr [rsp - 8]
	ret
.Lfunc_end1:
	.size	_Z8loopFunci, .Lfunc_end1-_Z8loopFunci
	.cfi_endproc

	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:
	push	rax
.Ltmp1:
	.cfi_def_cfa_offset 16
	mov	edi, 4
	mov	dword ptr [rsp + 4], 0
	call	_Z8loopFunci
	xor	edi, edi
	mov	dword ptr [rsp], eax
	mov	eax, edi
	pop	rcx
	ret
.Lfunc_end2:
	.size	main, .Lfunc_end2-main
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
.Lfunc_end3:
	.size	_GLOBAL__sub_I_main.cpp, .Lfunc_end3-_GLOBAL__sub_I_main.cpp
	.cfi_endproc

	.type	_ZStL8__ioinit,@object  # @_ZStL8__ioinit
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.init_array,"aw",@init_array
	.align	8
	.quad	_GLOBAL__sub_I_main.cpp

	.ident	"clang version 3.8.0-2ubuntu4 (tags/RELEASE_380/final)"
	.section	".note.GNU-stack","",@progbits
