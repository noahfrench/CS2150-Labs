	.text
	.intel_syntax noprefix
	.file	"hashTable.cpp"
	.section	.rodata.cst16,"aM",@progbits,16
	.align	16
.LCPI0_0:
	.long	1                       # 0x1
	.long	37                      # 0x25
	.long	1369                    # 0x559
	.long	50653                   # 0xc5dd
	.text
	.globl	_ZN9hashTableC2Ej
	.align	16, 0x90
	.type	_ZN9hashTableC2Ej,@function
_ZN9hashTableC2Ej:                      # @_ZN9hashTableC2Ej
.Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception0
# BB#0:
	push	r15
.Ltmp3:
	.cfi_def_cfa_offset 16
	push	r14
.Ltmp4:
	.cfi_def_cfa_offset 24
	push	r12
.Ltmp5:
	.cfi_def_cfa_offset 32
	push	rbx
.Ltmp6:
	.cfi_def_cfa_offset 40
	sub	rsp, 40
.Ltmp7:
	.cfi_def_cfa_offset 80
.Ltmp8:
	.cfi_offset rbx, -40
.Ltmp9:
	.cfi_offset r12, -32
.Ltmp10:
	.cfi_offset r14, -24
.Ltmp11:
	.cfi_offset r15, -16
	mov	r12, rdi
	lea	r14, [r12 + 8]
	xorps	xmm0, xmm0
	movups	xmmword ptr [r12 + 8], xmm0
	mov	qword ptr [r12 + 24], 0
	lea	ecx, [rsi + 2*rsi]
	.align	16, 0x90
.LBB0_1:                                # %_Z10checkprimej.exit.i.i
                                        # =>This Loop Header: Depth=1
                                        #     Child Loop BB0_11 Depth 2
	inc	ecx
	cmp	ecx, 2
	jb	.LBB0_1
# BB#2:                                 #   in Loop: Header=BB0_1 Depth=1
	mov	eax, 2
	je	.LBB0_6
# BB#3:                                 #   in Loop: Header=BB0_1 Depth=1
	test	cl, 1
	je	.LBB0_1
# BB#4:                                 # %.preheader.i.i.i
                                        #   in Loop: Header=BB0_1 Depth=1
	mov	esi, 5
	cmp	ecx, 9
	jb	.LBB0_5
	.align	16, 0x90
.LBB0_11:                               # %.lr.ph.i.i.i
                                        #   Parent Loop BB0_1 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lea	edi, [rsi - 2]
	xor	edx, edx
	mov	eax, ecx
	div	edi
	test	edx, edx
	je	.LBB0_1
# BB#10:                                #   in Loop: Header=BB0_11 Depth=2
	mov	eax, esi
	imul	eax, eax
	add	esi, 2
	cmp	eax, ecx
	jbe	.LBB0_11
.LBB0_5:
	mov	eax, ecx
.LBB0_6:                                # %_ZN9hashTable18calculateTableSizeEj.exit
	mov	dword ptr [r12], eax
	lea	rbx, [rsp + 24]
	mov	qword ptr [rsp + 8], rbx
	mov	byte ptr [rsp + 24], 63
	mov	qword ptr [rsp + 16], 1
	mov	byte ptr [rsp + 25], 0
	test	eax, eax
	je	.LBB0_9
# BB#7:
	movsxd	rdx, eax
.Ltmp0:
	lea	rcx, [rsp + 8]
	xor	esi, esi
	mov	rdi, r14
	call	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS5_S7_EEmRKS5_
.Ltmp1:
# BB#8:                                 # %_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE6resizeEmS5_.exit
	mov	rdi, qword ptr [rsp + 8]
	cmp	rdi, rbx
	je	.LBB0_9
# BB#12:
	call	_ZdlPv
.LBB0_9:                                # %_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev.exit.preheader
	movaps	xmm0, xmmword ptr [rip + .LCPI0_0] # xmm0 = [1,37,1369,50653]
	movups	xmmword ptr [r12 + 32], xmm0
	movabs	rax, 297830027492104433
	mov	qword ptr [r12 + 48], rax
	add	rsp, 40
	pop	rbx
	pop	r12
	pop	r14
	pop	r15
	ret
.LBB0_13:
.Ltmp2:
	mov	r15, rax
	mov	rdi, qword ptr [rsp + 8]
	cmp	rdi, rbx
	je	.LBB0_15
# BB#14:
	call	_ZdlPv
.LBB0_15:                               # %_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev.exit4
	mov	rbx, qword ptr [r12 + 8]
	mov	r12, qword ptr [r12 + 16]
	cmp	rbx, r12
	je	.LBB0_20
	.align	16, 0x90
.LBB0_16:                               # %.lr.ph.i.i.i.i
                                        # =>This Inner Loop Header: Depth=1
	mov	rdi, qword ptr [rbx]
	add	rbx, 16
	cmp	rdi, rbx
	je	.LBB0_18
# BB#17:                                #   in Loop: Header=BB0_16 Depth=1
	call	_ZdlPv
.LBB0_18:                               # %_ZSt8_DestroyINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEvPT_.exit.i.i.i.i
                                        #   in Loop: Header=BB0_16 Depth=1
	add	rbx, 16
	cmp	rbx, r12
	jne	.LBB0_16
# BB#19:                                # %_ZSt8_DestroyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_EvT_S7_RSaIT0_E.exit.loopexit.i
	mov	rbx, qword ptr [r14]
.LBB0_20:                               # %_ZSt8_DestroyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_EvT_S7_RSaIT0_E.exit.i
	test	rbx, rbx
	je	.LBB0_22
# BB#21:
	mov	rdi, rbx
	call	_ZdlPv
.LBB0_22:                               # %_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EED2Ev.exit
	mov	rdi, r15
	call	_Unwind_Resume
.Lfunc_end0:
	.size	_ZN9hashTableC2Ej, .Lfunc_end0-_ZN9hashTableC2Ej
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.align	4
GCC_except_table0:
.Lexception0:
	.byte	255                     # @LPStart Encoding = omit
	.byte	3                       # @TType Encoding = udata4
	.asciz	"\234"                  # @TType base offset
	.byte	3                       # Call site Encoding = udata4
	.byte	26                      # Call site table length
	.long	.Ltmp0-.Lfunc_begin0    # >> Call Site 1 <<
	.long	.Ltmp1-.Ltmp0           #   Call between .Ltmp0 and .Ltmp1
	.long	.Ltmp2-.Lfunc_begin0    #     jumps to .Ltmp2
	.byte	0                       #   On action: cleanup
	.long	.Ltmp1-.Lfunc_begin0    # >> Call Site 2 <<
	.long	.Lfunc_end0-.Ltmp1      #   Call between .Ltmp1 and .Lfunc_end0
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.align	4

	.text
	.globl	_ZN9hashTable18calculateTableSizeEj
	.align	16, 0x90
	.type	_ZN9hashTable18calculateTableSizeEj,@function
_ZN9hashTable18calculateTableSizeEj:    # @_ZN9hashTable18calculateTableSizeEj
	.cfi_startproc
# BB#0:
	lea	ecx, [rsi + 2*rsi]
	.align	16, 0x90
.LBB1_1:                                # %_Z10checkprimej.exit.i
                                        # =>This Loop Header: Depth=1
                                        #     Child Loop BB1_8 Depth 2
	inc	ecx
	cmp	ecx, 2
	jb	.LBB1_1
# BB#2:                                 #   in Loop: Header=BB1_1 Depth=1
	mov	eax, 2
	je	.LBB1_6
# BB#3:                                 #   in Loop: Header=BB1_1 Depth=1
	test	cl, 1
	je	.LBB1_1
# BB#4:                                 # %.preheader.i.i
                                        #   in Loop: Header=BB1_1 Depth=1
	mov	esi, 5
	cmp	ecx, 9
	jb	.LBB1_5
	.align	16, 0x90
.LBB1_8:                                # %.lr.ph.i.i
                                        #   Parent Loop BB1_1 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lea	edi, [rsi - 2]
	xor	edx, edx
	mov	eax, ecx
	div	edi
	test	edx, edx
	je	.LBB1_1
# BB#7:                                 #   in Loop: Header=BB1_8 Depth=2
	mov	eax, esi
	imul	eax, eax
	add	esi, 2
	cmp	eax, ecx
	jbe	.LBB1_8
.LBB1_5:
	mov	eax, ecx
.LBB1_6:                                # %_Z12getNextPrimej.exit
	ret
.Lfunc_end1:
	.size	_ZN9hashTable18calculateTableSizeEj, .Lfunc_end1-_ZN9hashTable18calculateTableSizeEj
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
	call	_ZSt9terminatev
.Lfunc_end2:
	.size	__clang_call_terminate, .Lfunc_end2-__clang_call_terminate

	.text
	.globl	_ZN9hashTable6insertENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.align	16, 0x90
	.type	_ZN9hashTable6insertENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,@function
_ZN9hashTable6insertENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE: # @_ZN9hashTable6insertENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.cfi_startproc
# BB#0:
	push	rbp
.Ltmp12:
	.cfi_def_cfa_offset 16
	push	r15
.Ltmp13:
	.cfi_def_cfa_offset 24
	push	r14
.Ltmp14:
	.cfi_def_cfa_offset 32
	push	r13
.Ltmp15:
	.cfi_def_cfa_offset 40
	push	r12
.Ltmp16:
	.cfi_def_cfa_offset 48
	push	rbx
.Ltmp17:
	.cfi_def_cfa_offset 56
	sub	rsp, 40
.Ltmp18:
	.cfi_def_cfa_offset 96
.Ltmp19:
	.cfi_offset rbx, -56
.Ltmp20:
	.cfi_offset r12, -48
.Ltmp21:
	.cfi_offset r13, -40
.Ltmp22:
	.cfi_offset r14, -32
.Ltmp23:
	.cfi_offset r15, -24
.Ltmp24:
	.cfi_offset rbp, -16
	mov	r14, rsi
	mov	r13, rdi
	lea	rbx, [rsp + 16]
	mov	qword ptr [rsp], rbx
	mov	r15, qword ptr [r14]
	mov	r12, qword ptr [r14 + 8]
	test	r15, r15
	jne	.LBB3_2
# BB#1:
	test	r12, r12
	jne	.LBB3_25
.LBB3_2:
	mov	qword ptr [rsp + 32], r12
	cmp	r12, 15
	jbe	.LBB3_3
# BB#4:                                 # %.noexc1.i
	lea	rdi, [rsp]
	lea	rsi, [rsp + 32]
	xor	edx, edx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
	mov	qword ptr [rsp], rax
	mov	rcx, qword ptr [rsp + 32]
	mov	qword ptr [rsp + 16], rcx
	jmp	.LBB3_5
.LBB3_3:                                # %._crit_edge.i.i.i.i
	mov	rax, rbx
.LBB3_5:
	test	r12, r12
	je	.LBB3_9
# BB#6:
	cmp	r12, 1
	jne	.LBB3_8
# BB#7:
	mov	cl, byte ptr [r15]
	mov	byte ptr [rax], cl
	jmp	.LBB3_9
.LBB3_8:
	mov	rdi, rax
	mov	rsi, r15
	mov	rdx, r12
	call	memcpy
.LBB3_9:                                # %_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_.exit
	mov	rax, qword ptr [rsp + 32]
	mov	qword ptr [rsp + 8], rax
	mov	rcx, qword ptr [rsp]
	mov	byte ptr [rcx + rax], 0
	mov	rdi, qword ptr [rsp]
	mov	rax, qword ptr [rsp + 8]
	xor	ebp, ebp
	test	rax, rax
	je	.LBB3_21
# BB#10:                                # %.lr.ph.i.preheader
	xor	edx, edx
	cmp	rax, 8
	mov	ebp, 0
	jb	.LBB3_19
# BB#11:                                # %min.iters.checked
	xor	edx, edx
	mov	rcx, rax
	and	rcx, -8
	mov	ebp, 0
	je	.LBB3_19
# BB#12:                                # %vector.body.preheader
	lea	rsi, [rax - 8]
	mov	rdx, rsi
	shr	rdx, 3
	xor	ebp, ebp
	mov	r8, rbx
	bt	rsi, 3
	jb	.LBB3_13
# BB#14:                                # %vector.body.prol
	movd	xmm0, dword ptr [rdi]   # xmm0 = mem[0],zero,zero,zero
	punpcklbw	xmm0, xmm0      # xmm0 = xmm0[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm0, xmm0      # xmm0 = xmm0[0,0,1,1,2,2,3,3]
	psrad	xmm0, 24
	movd	xmm1, dword ptr [rdi + 4] # xmm1 = mem[0],zero,zero,zero
	punpcklbw	xmm1, xmm1      # xmm1 = xmm1[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm1, xmm1      # xmm1 = xmm1[0,0,1,1,2,2,3,3]
	psrad	xmm1, 24
	movdqu	xmm2, xmmword ptr [r13 + 32]
	movdqu	xmm3, xmmword ptr [r13 + 48]
	pshufd	xmm4, xmm0, 245         # xmm4 = xmm0[1,1,3,3]
	pmuludq	xmm0, xmm2
	pshufd	xmm0, xmm0, 232         # xmm0 = xmm0[0,2,2,3]
	pshufd	xmm2, xmm2, 245         # xmm2 = xmm2[1,1,3,3]
	pmuludq	xmm2, xmm4
	pshufd	xmm2, xmm2, 232         # xmm2 = xmm2[0,2,2,3]
	punpckldq	xmm0, xmm2      # xmm0 = xmm0[0],xmm2[0],xmm0[1],xmm2[1]
	pshufd	xmm2, xmm1, 245         # xmm2 = xmm1[1,1,3,3]
	pmuludq	xmm1, xmm3
	pshufd	xmm1, xmm1, 232         # xmm1 = xmm1[0,2,2,3]
	pshufd	xmm3, xmm3, 245         # xmm3 = xmm3[1,1,3,3]
	pmuludq	xmm3, xmm2
	pshufd	xmm2, xmm3, 232         # xmm2 = xmm3[0,2,2,3]
	punpckldq	xmm1, xmm2      # xmm1 = xmm1[0],xmm2[0],xmm1[1],xmm2[1]
	mov	ebp, 8
	jmp	.LBB3_15
.LBB3_13:
	pxor	xmm0, xmm0
	pxor	xmm1, xmm1
.LBB3_15:                               # %vector.body.preheader.split
	test	rdx, rdx
	je	.LBB3_18
# BB#16:                                # %vector.body.preheader.split.split
	mov	rdx, rax
	and	rdx, -8
	sub	rdx, rbp
	lea	rsi, [rbp + rdi + 12]
	lea	rbx, [r13 + 4*rbp + 80]
	.align	16, 0x90
.LBB3_17:                               # %vector.body
                                        # =>This Inner Loop Header: Depth=1
	movd	xmm2, dword ptr [rsi - 12] # xmm2 = mem[0],zero,zero,zero
	punpcklbw	xmm2, xmm2      # xmm2 = xmm2[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm2, xmm2      # xmm2 = xmm2[0,0,1,1,2,2,3,3]
	psrad	xmm2, 24
	movd	xmm3, dword ptr [rsi - 8] # xmm3 = mem[0],zero,zero,zero
	punpcklbw	xmm3, xmm3      # xmm3 = xmm3[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm4, xmm3      # xmm4 = xmm4[0],xmm3[0],xmm4[1],xmm3[1],xmm4[2],xmm3[2],xmm4[3],xmm3[3]
	psrad	xmm4, 24
	movdqu	xmm6, xmmword ptr [rbx - 48]
	movdqu	xmm7, xmmword ptr [rbx - 32]
	movdqu	xmm5, xmmword ptr [rbx - 16]
	movdqu	xmm8, xmmword ptr [rbx]
	pshufd	xmm3, xmm2, 245         # xmm3 = xmm2[1,1,3,3]
	pmuludq	xmm2, xmm6
	pshufd	xmm2, xmm2, 232         # xmm2 = xmm2[0,2,2,3]
	pshufd	xmm6, xmm6, 245         # xmm6 = xmm6[1,1,3,3]
	pmuludq	xmm6, xmm3
	pshufd	xmm3, xmm6, 232         # xmm3 = xmm6[0,2,2,3]
	punpckldq	xmm2, xmm3      # xmm2 = xmm2[0],xmm3[0],xmm2[1],xmm3[1]
	pshufd	xmm3, xmm4, 245         # xmm3 = xmm4[1,1,3,3]
	pmuludq	xmm4, xmm7
	pshufd	xmm4, xmm4, 232         # xmm4 = xmm4[0,2,2,3]
	pshufd	xmm6, xmm7, 245         # xmm6 = xmm7[1,1,3,3]
	pmuludq	xmm6, xmm3
	pshufd	xmm3, xmm6, 232         # xmm3 = xmm6[0,2,2,3]
	punpckldq	xmm4, xmm3      # xmm4 = xmm4[0],xmm3[0],xmm4[1],xmm3[1]
	paddd	xmm2, xmm0
	paddd	xmm4, xmm1
	movd	xmm0, dword ptr [rsi - 4] # xmm0 = mem[0],zero,zero,zero
	punpcklbw	xmm0, xmm0      # xmm0 = xmm0[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm0, xmm0      # xmm0 = xmm0[0,0,1,1,2,2,3,3]
	psrad	xmm0, 24
	movd	xmm1, dword ptr [rsi]   # xmm1 = mem[0],zero,zero,zero
	punpcklbw	xmm1, xmm1      # xmm1 = xmm1[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm1, xmm1      # xmm1 = xmm1[0,0,1,1,2,2,3,3]
	psrad	xmm1, 24
	pshufd	xmm3, xmm0, 245         # xmm3 = xmm0[1,1,3,3]
	pmuludq	xmm0, xmm5
	pshufd	xmm0, xmm0, 232         # xmm0 = xmm0[0,2,2,3]
	pshufd	xmm5, xmm5, 245         # xmm5 = xmm5[1,1,3,3]
	pmuludq	xmm5, xmm3
	pshufd	xmm3, xmm5, 232         # xmm3 = xmm5[0,2,2,3]
	punpckldq	xmm0, xmm3      # xmm0 = xmm0[0],xmm3[0],xmm0[1],xmm3[1]
	pshufd	xmm3, xmm1, 245         # xmm3 = xmm1[1,1,3,3]
	pmuludq	xmm1, xmm8
	pshufd	xmm1, xmm1, 232         # xmm1 = xmm1[0,2,2,3]
	pshufd	xmm5, xmm8, 245         # xmm5 = xmm8[1,1,3,3]
	pmuludq	xmm5, xmm3
	pshufd	xmm3, xmm5, 232         # xmm3 = xmm5[0,2,2,3]
	punpckldq	xmm1, xmm3      # xmm1 = xmm1[0],xmm3[0],xmm1[1],xmm3[1]
	paddd	xmm0, xmm2
	paddd	xmm1, xmm4
	add	rsi, 16
	add	rbx, 64
	add	rdx, -16
	jne	.LBB3_17
.LBB3_18:                               # %middle.block
	paddd	xmm1, xmm0
	pshufd	xmm0, xmm1, 78          # xmm0 = xmm1[2,3,0,1]
	paddd	xmm0, xmm1
	pshufd	xmm1, xmm0, 229         # xmm1 = xmm0[1,1,2,3]
	paddd	xmm1, xmm0
	movd	ebp, xmm1
	cmp	rax, rcx
	mov	rdx, rcx
	mov	rbx, r8
	je	.LBB3_21
.LBB3_19:                               # %.lr.ph.i.preheader13
	sub	rax, rdx
	lea	rcx, [r13 + 4*rdx + 32]
	add	rdx, rdi
	.align	16, 0x90
.LBB3_20:                               # %.lr.ph.i
                                        # =>This Inner Loop Header: Depth=1
	movsx	esi, byte ptr [rdx]
	imul	esi, dword ptr [rcx]
	add	ebp, esi
	add	rcx, 4
	inc	rdx
	dec	rax
	jne	.LBB3_20
.LBB3_21:                               # %_ZN9hashTable4hashENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE.exit
	cmp	rdi, rbx
	je	.LBB3_23
# BB#22:
	call	_ZdlPv
	.align	16, 0x90
.LBB3_23:                               # %_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev.exit
                                        # =>This Inner Loop Header: Depth=1
	mov	ebx, ebp
	xor	edx, edx
	mov	eax, ebx
	div	dword ptr [r13]
	shl	rdx, 5
	add	rdx, qword ptr [r13 + 8]
	mov	esi, .L.str
	mov	rdi, rdx
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7compareEPKc
	lea	ebp, [rbx + 1]
	test	eax, eax
	jne	.LBB3_23
# BB#24:
	xor	edx, edx
	mov	eax, ebx
	div	dword ptr [r13]
	shl	rdx, 5
	add	rdx, qword ptr [r13 + 8]
	mov	rdi, rdx
	mov	rsi, r14
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
	add	rsp, 40
	pop	rbx
	pop	r12
	pop	r13
	pop	r14
	pop	r15
	pop	rbp
	ret
.LBB3_25:                               # %.noexc.i
	mov	edi, .L.str.2
	call	_ZSt19__throw_logic_errorPKc
.Lfunc_end3:
	.size	_ZN9hashTable6insertENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, .Lfunc_end3-_ZN9hashTable6insertENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.cfi_endproc

	.globl	_ZN9hashTable4hashENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.align	16, 0x90
	.type	_ZN9hashTable4hashENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,@function
_ZN9hashTable4hashENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE: # @_ZN9hashTable4hashENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.cfi_startproc
# BB#0:
	mov	rcx, qword ptr [rsi + 8]
	xor	eax, eax
	test	rcx, rcx
	je	.LBB4_11
# BB#1:                                 # %.lr.ph
	mov	r9, qword ptr [rsi]
	xor	edx, edx
	cmp	rcx, 7
	mov	eax, 0
	jbe	.LBB4_10
# BB#2:                                 # %min.iters.checked
	xor	edx, edx
	mov	r8, rcx
	and	r8, -8
	mov	eax, 0
	je	.LBB4_10
# BB#3:                                 # %vector.body.preheader
	lea	rsi, [rcx - 8]
	mov	rax, rsi
	shr	rax, 3
	xor	edx, edx
	bt	rsi, 3
	jb	.LBB4_4
# BB#5:                                 # %vector.body.prol
	movd	xmm0, dword ptr [r9]    # xmm0 = mem[0],zero,zero,zero
	punpcklbw	xmm0, xmm0      # xmm0 = xmm0[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm0, xmm0      # xmm0 = xmm0[0,0,1,1,2,2,3,3]
	psrad	xmm0, 24
	movd	xmm1, dword ptr [r9 + 4] # xmm1 = mem[0],zero,zero,zero
	punpcklbw	xmm1, xmm1      # xmm1 = xmm1[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm1, xmm1      # xmm1 = xmm1[0,0,1,1,2,2,3,3]
	psrad	xmm1, 24
	movdqu	xmm2, xmmword ptr [rdi + 32]
	movdqu	xmm3, xmmword ptr [rdi + 48]
	pshufd	xmm4, xmm0, 245         # xmm4 = xmm0[1,1,3,3]
	pmuludq	xmm0, xmm2
	pshufd	xmm0, xmm0, 232         # xmm0 = xmm0[0,2,2,3]
	pshufd	xmm2, xmm2, 245         # xmm2 = xmm2[1,1,3,3]
	pmuludq	xmm2, xmm4
	pshufd	xmm2, xmm2, 232         # xmm2 = xmm2[0,2,2,3]
	punpckldq	xmm0, xmm2      # xmm0 = xmm0[0],xmm2[0],xmm0[1],xmm2[1]
	pshufd	xmm2, xmm1, 245         # xmm2 = xmm1[1,1,3,3]
	pmuludq	xmm1, xmm3
	pshufd	xmm1, xmm1, 232         # xmm1 = xmm1[0,2,2,3]
	pshufd	xmm3, xmm3, 245         # xmm3 = xmm3[1,1,3,3]
	pmuludq	xmm3, xmm2
	pshufd	xmm2, xmm3, 232         # xmm2 = xmm3[0,2,2,3]
	punpckldq	xmm1, xmm2      # xmm1 = xmm1[0],xmm2[0],xmm1[1],xmm2[1]
	mov	edx, 8
	jmp	.LBB4_6
.LBB4_4:
	pxor	xmm0, xmm0
	pxor	xmm1, xmm1
.LBB4_6:                                # %vector.body.preheader.split
	test	rax, rax
	je	.LBB4_9
# BB#7:                                 # %vector.body.preheader.split.split
	mov	rax, rcx
	and	rax, -8
	sub	rax, rdx
	lea	rsi, [rdx + r9 + 12]
	lea	rdx, [rdi + 4*rdx + 80]
	.align	16, 0x90
.LBB4_8:                                # %vector.body
                                        # =>This Inner Loop Header: Depth=1
	movd	xmm2, dword ptr [rsi - 12] # xmm2 = mem[0],zero,zero,zero
	punpcklbw	xmm2, xmm2      # xmm2 = xmm2[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm2, xmm2      # xmm2 = xmm2[0,0,1,1,2,2,3,3]
	psrad	xmm2, 24
	movd	xmm3, dword ptr [rsi - 8] # xmm3 = mem[0],zero,zero,zero
	punpcklbw	xmm3, xmm3      # xmm3 = xmm3[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm4, xmm3      # xmm4 = xmm4[0],xmm3[0],xmm4[1],xmm3[1],xmm4[2],xmm3[2],xmm4[3],xmm3[3]
	psrad	xmm4, 24
	movdqu	xmm6, xmmword ptr [rdx - 48]
	movdqu	xmm7, xmmword ptr [rdx - 32]
	movdqu	xmm5, xmmword ptr [rdx - 16]
	movdqu	xmm8, xmmword ptr [rdx]
	pshufd	xmm3, xmm2, 245         # xmm3 = xmm2[1,1,3,3]
	pmuludq	xmm2, xmm6
	pshufd	xmm2, xmm2, 232         # xmm2 = xmm2[0,2,2,3]
	pshufd	xmm6, xmm6, 245         # xmm6 = xmm6[1,1,3,3]
	pmuludq	xmm6, xmm3
	pshufd	xmm3, xmm6, 232         # xmm3 = xmm6[0,2,2,3]
	punpckldq	xmm2, xmm3      # xmm2 = xmm2[0],xmm3[0],xmm2[1],xmm3[1]
	pshufd	xmm3, xmm4, 245         # xmm3 = xmm4[1,1,3,3]
	pmuludq	xmm4, xmm7
	pshufd	xmm4, xmm4, 232         # xmm4 = xmm4[0,2,2,3]
	pshufd	xmm6, xmm7, 245         # xmm6 = xmm7[1,1,3,3]
	pmuludq	xmm6, xmm3
	pshufd	xmm3, xmm6, 232         # xmm3 = xmm6[0,2,2,3]
	punpckldq	xmm4, xmm3      # xmm4 = xmm4[0],xmm3[0],xmm4[1],xmm3[1]
	paddd	xmm2, xmm0
	paddd	xmm4, xmm1
	movd	xmm0, dword ptr [rsi - 4] # xmm0 = mem[0],zero,zero,zero
	punpcklbw	xmm0, xmm0      # xmm0 = xmm0[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm0, xmm0      # xmm0 = xmm0[0,0,1,1,2,2,3,3]
	psrad	xmm0, 24
	movd	xmm1, dword ptr [rsi]   # xmm1 = mem[0],zero,zero,zero
	punpcklbw	xmm1, xmm1      # xmm1 = xmm1[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm1, xmm1      # xmm1 = xmm1[0,0,1,1,2,2,3,3]
	psrad	xmm1, 24
	pshufd	xmm3, xmm0, 245         # xmm3 = xmm0[1,1,3,3]
	pmuludq	xmm0, xmm5
	pshufd	xmm0, xmm0, 232         # xmm0 = xmm0[0,2,2,3]
	pshufd	xmm5, xmm5, 245         # xmm5 = xmm5[1,1,3,3]
	pmuludq	xmm5, xmm3
	pshufd	xmm3, xmm5, 232         # xmm3 = xmm5[0,2,2,3]
	punpckldq	xmm0, xmm3      # xmm0 = xmm0[0],xmm3[0],xmm0[1],xmm3[1]
	pshufd	xmm3, xmm1, 245         # xmm3 = xmm1[1,1,3,3]
	pmuludq	xmm1, xmm8
	pshufd	xmm1, xmm1, 232         # xmm1 = xmm1[0,2,2,3]
	pshufd	xmm5, xmm8, 245         # xmm5 = xmm8[1,1,3,3]
	pmuludq	xmm5, xmm3
	pshufd	xmm3, xmm5, 232         # xmm3 = xmm5[0,2,2,3]
	punpckldq	xmm1, xmm3      # xmm1 = xmm1[0],xmm3[0],xmm1[1],xmm3[1]
	paddd	xmm0, xmm2
	paddd	xmm1, xmm4
	add	rsi, 16
	add	rdx, 64
	add	rax, -16
	jne	.LBB4_8
.LBB4_9:                                # %middle.block
	paddd	xmm1, xmm0
	pshufd	xmm0, xmm1, 78          # xmm0 = xmm1[2,3,0,1]
	paddd	xmm0, xmm1
	pshufd	xmm1, xmm0, 229         # xmm1 = xmm0[1,1,2,3]
	paddd	xmm1, xmm0
	movd	eax, xmm1
	cmp	rcx, r8
	mov	rdx, r8
	je	.LBB4_11
	.align	16, 0x90
.LBB4_10:                               # %scalar.ph
                                        # =>This Inner Loop Header: Depth=1
	movsx	esi, byte ptr [r9 + rdx]
	imul	esi, dword ptr [rdi + 4*rdx + 32]
	add	eax, esi
	inc	rdx
	cmp	rdx, rcx
	jb	.LBB4_10
.LBB4_11:                               # %._crit_edge
	ret
.Lfunc_end4:
	.size	_ZN9hashTable4hashENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, .Lfunc_end4-_ZN9hashTable4hashENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.cfi_endproc

	.globl	_Z12getNextPrimej
	.align	16, 0x90
	.type	_Z12getNextPrimej,@function
_Z12getNextPrimej:                      # @_Z12getNextPrimej
	.cfi_startproc
# BB#0:
	mov	ecx, edi
	.align	16, 0x90
.LBB5_1:                                # %_Z10checkprimej.exit
                                        # =>This Loop Header: Depth=1
                                        #     Child Loop BB5_8 Depth 2
	inc	ecx
	cmp	ecx, 2
	jb	.LBB5_1
# BB#2:                                 #   in Loop: Header=BB5_1 Depth=1
	mov	eax, 2
	je	.LBB5_6
# BB#3:                                 #   in Loop: Header=BB5_1 Depth=1
	test	cl, 1
	je	.LBB5_1
# BB#4:                                 # %.preheader.i
                                        #   in Loop: Header=BB5_1 Depth=1
	mov	esi, 5
	cmp	ecx, 9
	jb	.LBB5_5
	.align	16, 0x90
.LBB5_8:                                # %.lr.ph.i
                                        #   Parent Loop BB5_1 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lea	edi, [rsi - 2]
	xor	edx, edx
	mov	eax, ecx
	div	edi
	test	edx, edx
	je	.LBB5_1
# BB#7:                                 #   in Loop: Header=BB5_8 Depth=2
	mov	eax, esi
	imul	eax, eax
	add	esi, 2
	cmp	eax, ecx
	jbe	.LBB5_8
.LBB5_5:
	mov	eax, ecx
.LBB5_6:                                # %.loopexit
	ret
.Lfunc_end5:
	.size	_Z12getNextPrimej, .Lfunc_end5-_Z12getNextPrimej
	.cfi_endproc

	.globl	_ZN9hashTable4findENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.align	16, 0x90
	.type	_ZN9hashTable4findENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,@function
_ZN9hashTable4findENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE: # @_ZN9hashTable4findENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.cfi_startproc
# BB#0:
	push	rbp
.Ltmp25:
	.cfi_def_cfa_offset 16
	push	r15
.Ltmp26:
	.cfi_def_cfa_offset 24
	push	r14
.Ltmp27:
	.cfi_def_cfa_offset 32
	push	r13
.Ltmp28:
	.cfi_def_cfa_offset 40
	push	r12
.Ltmp29:
	.cfi_def_cfa_offset 48
	push	rbx
.Ltmp30:
	.cfi_def_cfa_offset 56
	sub	rsp, 40
.Ltmp31:
	.cfi_def_cfa_offset 96
.Ltmp32:
	.cfi_offset rbx, -56
.Ltmp33:
	.cfi_offset r12, -48
.Ltmp34:
	.cfi_offset r13, -40
.Ltmp35:
	.cfi_offset r14, -32
.Ltmp36:
	.cfi_offset r15, -24
.Ltmp37:
	.cfi_offset rbp, -16
	mov	r14, rsi
	mov	r12, rdi
	lea	rbx, [rsp + 16]
	mov	qword ptr [rsp], rbx
	mov	r15, qword ptr [r14]
	mov	rbp, qword ptr [r14 + 8]
	test	r15, r15
	jne	.LBB6_2
# BB#1:
	test	rbp, rbp
	jne	.LBB6_31
.LBB6_2:
	mov	qword ptr [rsp + 32], rbp
	cmp	rbp, 15
	jbe	.LBB6_3
# BB#4:                                 # %.noexc1.i
	lea	rdi, [rsp]
	lea	rsi, [rsp + 32]
	xor	edx, edx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
	mov	qword ptr [rsp], rax
	mov	rcx, qword ptr [rsp + 32]
	mov	qword ptr [rsp + 16], rcx
	jmp	.LBB6_5
.LBB6_3:                                # %._crit_edge.i.i.i.i
	mov	rax, rbx
.LBB6_5:
	test	rbp, rbp
	je	.LBB6_9
# BB#6:
	cmp	rbp, 1
	jne	.LBB6_8
# BB#7:
	mov	cl, byte ptr [r15]
	mov	byte ptr [rax], cl
	jmp	.LBB6_9
.LBB6_8:
	mov	rdi, rax
	mov	rsi, r15
	mov	rdx, rbp
	call	memcpy
.LBB6_9:                                # %_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_.exit
	mov	rax, qword ptr [rsp + 32]
	mov	qword ptr [rsp + 8], rax
	mov	rcx, qword ptr [rsp]
	mov	byte ptr [rcx + rax], 0
	mov	rdi, qword ptr [rsp]
	mov	rax, qword ptr [rsp + 8]
	xor	ebp, ebp
	test	rax, rax
	je	.LBB6_21
# BB#10:                                # %.lr.ph.i.preheader
	xor	edx, edx
	cmp	rax, 8
	mov	ebp, 0
	jb	.LBB6_19
# BB#11:                                # %min.iters.checked
	xor	edx, edx
	mov	rcx, rax
	and	rcx, -8
	mov	ebp, 0
	je	.LBB6_19
# BB#12:                                # %vector.body.preheader
	lea	rsi, [rax - 8]
	mov	rdx, rsi
	shr	rdx, 3
	xor	ebp, ebp
	bt	rsi, 3
	jb	.LBB6_13
# BB#14:                                # %vector.body.prol
	movd	xmm0, dword ptr [rdi]   # xmm0 = mem[0],zero,zero,zero
	punpcklbw	xmm0, xmm0      # xmm0 = xmm0[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm0, xmm0      # xmm0 = xmm0[0,0,1,1,2,2,3,3]
	psrad	xmm0, 24
	movd	xmm1, dword ptr [rdi + 4] # xmm1 = mem[0],zero,zero,zero
	punpcklbw	xmm1, xmm1      # xmm1 = xmm1[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm1, xmm1      # xmm1 = xmm1[0,0,1,1,2,2,3,3]
	psrad	xmm1, 24
	movdqu	xmm2, xmmword ptr [r12 + 32]
	movdqu	xmm3, xmmword ptr [r12 + 48]
	pshufd	xmm4, xmm0, 245         # xmm4 = xmm0[1,1,3,3]
	pmuludq	xmm0, xmm2
	pshufd	xmm0, xmm0, 232         # xmm0 = xmm0[0,2,2,3]
	pshufd	xmm2, xmm2, 245         # xmm2 = xmm2[1,1,3,3]
	pmuludq	xmm2, xmm4
	pshufd	xmm2, xmm2, 232         # xmm2 = xmm2[0,2,2,3]
	punpckldq	xmm0, xmm2      # xmm0 = xmm0[0],xmm2[0],xmm0[1],xmm2[1]
	pshufd	xmm2, xmm1, 245         # xmm2 = xmm1[1,1,3,3]
	pmuludq	xmm1, xmm3
	pshufd	xmm1, xmm1, 232         # xmm1 = xmm1[0,2,2,3]
	pshufd	xmm3, xmm3, 245         # xmm3 = xmm3[1,1,3,3]
	pmuludq	xmm3, xmm2
	pshufd	xmm2, xmm3, 232         # xmm2 = xmm3[0,2,2,3]
	punpckldq	xmm1, xmm2      # xmm1 = xmm1[0],xmm2[0],xmm1[1],xmm2[1]
	mov	ebp, 8
	jmp	.LBB6_15
.LBB6_13:
	pxor	xmm0, xmm0
	pxor	xmm1, xmm1
.LBB6_15:                               # %vector.body.preheader.split
	test	rdx, rdx
	je	.LBB6_18
# BB#16:                                # %vector.body.preheader.split.split
	mov	rdx, rax
	and	rdx, -8
	sub	rdx, rbp
	lea	rsi, [rbp + rdi + 12]
	lea	rbp, [r12 + 4*rbp + 80]
	.align	16, 0x90
.LBB6_17:                               # %vector.body
                                        # =>This Inner Loop Header: Depth=1
	movd	xmm2, dword ptr [rsi - 12] # xmm2 = mem[0],zero,zero,zero
	punpcklbw	xmm2, xmm2      # xmm2 = xmm2[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm2, xmm2      # xmm2 = xmm2[0,0,1,1,2,2,3,3]
	psrad	xmm2, 24
	movd	xmm3, dword ptr [rsi - 8] # xmm3 = mem[0],zero,zero,zero
	punpcklbw	xmm3, xmm3      # xmm3 = xmm3[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm4, xmm3      # xmm4 = xmm4[0],xmm3[0],xmm4[1],xmm3[1],xmm4[2],xmm3[2],xmm4[3],xmm3[3]
	psrad	xmm4, 24
	movdqu	xmm6, xmmword ptr [rbp - 48]
	movdqu	xmm7, xmmword ptr [rbp - 32]
	movdqu	xmm5, xmmword ptr [rbp - 16]
	movdqu	xmm8, xmmword ptr [rbp]
	pshufd	xmm3, xmm2, 245         # xmm3 = xmm2[1,1,3,3]
	pmuludq	xmm2, xmm6
	pshufd	xmm2, xmm2, 232         # xmm2 = xmm2[0,2,2,3]
	pshufd	xmm6, xmm6, 245         # xmm6 = xmm6[1,1,3,3]
	pmuludq	xmm6, xmm3
	pshufd	xmm3, xmm6, 232         # xmm3 = xmm6[0,2,2,3]
	punpckldq	xmm2, xmm3      # xmm2 = xmm2[0],xmm3[0],xmm2[1],xmm3[1]
	pshufd	xmm3, xmm4, 245         # xmm3 = xmm4[1,1,3,3]
	pmuludq	xmm4, xmm7
	pshufd	xmm4, xmm4, 232         # xmm4 = xmm4[0,2,2,3]
	pshufd	xmm6, xmm7, 245         # xmm6 = xmm7[1,1,3,3]
	pmuludq	xmm6, xmm3
	pshufd	xmm3, xmm6, 232         # xmm3 = xmm6[0,2,2,3]
	punpckldq	xmm4, xmm3      # xmm4 = xmm4[0],xmm3[0],xmm4[1],xmm3[1]
	paddd	xmm2, xmm0
	paddd	xmm4, xmm1
	movd	xmm0, dword ptr [rsi - 4] # xmm0 = mem[0],zero,zero,zero
	punpcklbw	xmm0, xmm0      # xmm0 = xmm0[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm0, xmm0      # xmm0 = xmm0[0,0,1,1,2,2,3,3]
	psrad	xmm0, 24
	movd	xmm1, dword ptr [rsi]   # xmm1 = mem[0],zero,zero,zero
	punpcklbw	xmm1, xmm1      # xmm1 = xmm1[0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7]
	punpcklwd	xmm1, xmm1      # xmm1 = xmm1[0,0,1,1,2,2,3,3]
	psrad	xmm1, 24
	pshufd	xmm3, xmm0, 245         # xmm3 = xmm0[1,1,3,3]
	pmuludq	xmm0, xmm5
	pshufd	xmm0, xmm0, 232         # xmm0 = xmm0[0,2,2,3]
	pshufd	xmm5, xmm5, 245         # xmm5 = xmm5[1,1,3,3]
	pmuludq	xmm5, xmm3
	pshufd	xmm3, xmm5, 232         # xmm3 = xmm5[0,2,2,3]
	punpckldq	xmm0, xmm3      # xmm0 = xmm0[0],xmm3[0],xmm0[1],xmm3[1]
	pshufd	xmm3, xmm1, 245         # xmm3 = xmm1[1,1,3,3]
	pmuludq	xmm1, xmm8
	pshufd	xmm1, xmm1, 232         # xmm1 = xmm1[0,2,2,3]
	pshufd	xmm5, xmm8, 245         # xmm5 = xmm8[1,1,3,3]
	pmuludq	xmm5, xmm3
	pshufd	xmm3, xmm5, 232         # xmm3 = xmm5[0,2,2,3]
	punpckldq	xmm1, xmm3      # xmm1 = xmm1[0],xmm3[0],xmm1[1],xmm3[1]
	paddd	xmm0, xmm2
	paddd	xmm1, xmm4
	add	rsi, 16
	add	rbp, 64
	add	rdx, -16
	jne	.LBB6_17
.LBB6_18:                               # %middle.block
	paddd	xmm1, xmm0
	pshufd	xmm0, xmm1, 78          # xmm0 = xmm1[2,3,0,1]
	paddd	xmm0, xmm1
	pshufd	xmm1, xmm0, 229         # xmm1 = xmm0[1,1,2,3]
	paddd	xmm1, xmm0
	movd	ebp, xmm1
	cmp	rax, rcx
	mov	rdx, rcx
	je	.LBB6_21
.LBB6_19:                               # %.lr.ph.i.preheader15
	sub	rax, rdx
	lea	rcx, [r12 + 4*rdx + 32]
	add	rdx, rdi
	.align	16, 0x90
.LBB6_20:                               # %.lr.ph.i
                                        # =>This Inner Loop Header: Depth=1
	movsx	esi, byte ptr [rdx]
	imul	esi, dword ptr [rcx]
	add	ebp, esi
	add	rcx, 4
	inc	rdx
	dec	rax
	jne	.LBB6_20
.LBB6_21:                               # %_ZN9hashTable4hashENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE.exit
	cmp	rdi, rbx
	je	.LBB6_23
# BB#22:
	call	_ZdlPv
.LBB6_23:                               # %_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev.exit.preheader
	xor	edx, edx
	mov	eax, ebp
	div	dword ptr [r12]
	shl	rdx, 5
	add	rdx, qword ptr [r12 + 8]
	mov	esi, .L.str
	mov	rdi, rdx
	jmp	.LBB6_24
	.align	16, 0x90
.LBB6_28:                               # %_ZSteqIcEN9__gnu_cxx11__enable_ifIXsr9__is_charIT_EE7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS2_St11char_traitsIS2_ESaIS2_EEESC_.exit.thread1
                                        #   in Loop: Header=BB6_24 Depth=1
	inc	ebp
	xor	edx, edx
	mov	eax, ebp
	div	r13d
	shl	rdx, 5
	add	rbx, rdx
	mov	esi, .L.str
	mov	rdi, rbx
.LBB6_24:                               # %_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev.exit.preheader
                                        # =>This Inner Loop Header: Depth=1
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7compareEPKc
	test	eax, eax
	je	.LBB6_29
# BB#25:                                # %.lr.ph
                                        #   in Loop: Header=BB6_24 Depth=1
	mov	r13d, dword ptr [r12]
	xor	edx, edx
	mov	eax, ebp
	div	r13d
	mov	rbx, qword ptr [r12 + 8]
	shl	rdx, 5
	mov	rax, qword ptr [rbx + rdx + 8]
	cmp	rax, qword ptr [r14 + 8]
	jne	.LBB6_28
# BB#26:                                #   in Loop: Header=BB6_24 Depth=1
	mov	r15b, 1
	test	rax, rax
	je	.LBB6_30
# BB#27:                                # %_ZSteqIcEN9__gnu_cxx11__enable_ifIXsr9__is_charIT_EE7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS2_St11char_traitsIS2_ESaIS2_EEESC_.exit
                                        #   in Loop: Header=BB6_24 Depth=1
	mov	rsi, qword ptr [r14]
	mov	rdi, qword ptr [rbx + rdx]
	mov	rdx, rax
	call	memcmp
	test	eax, eax
	jne	.LBB6_28
	jmp	.LBB6_30
.LBB6_29:
	xor	r15d, r15d
.LBB6_30:                               # %_ZSteqIcEN9__gnu_cxx11__enable_ifIXsr9__is_charIT_EE7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS2_St11char_traitsIS2_ESaIS2_EEESC_.exit.thread
	mov	al, r15b
	add	rsp, 40
	pop	rbx
	pop	r12
	pop	r13
	pop	r14
	pop	r15
	pop	rbp
	ret
.LBB6_31:                               # %.noexc.i
	mov	edi, .L.str.2
	call	_ZSt19__throw_logic_errorPKc
.Lfunc_end6:
	.size	_ZN9hashTable4findENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, .Lfunc_end6-_ZN9hashTable4findENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.cfi_endproc

	.globl	_Z10checkprimej
	.align	16, 0x90
	.type	_Z10checkprimej,@function
_Z10checkprimej:                        # @_Z10checkprimej
	.cfi_startproc
# BB#0:
	mov	esi, edi
	cmp	esi, 2
	jb	.LBB7_7
# BB#1:
	mov	cl, 1
	je	.LBB7_8
# BB#2:
	test	sil, 1
	je	.LBB7_7
# BB#3:                                 # %.preheader
	cmp	esi, 9
	jb	.LBB7_8
# BB#4:
	mov	edi, 3
	.align	16, 0x90
.LBB7_6:                                # %.lr.ph
                                        # =>This Inner Loop Header: Depth=1
	xor	edx, edx
	mov	eax, esi
	div	edi
	test	edx, edx
	je	.LBB7_7
# BB#5:                                 #   in Loop: Header=BB7_6 Depth=1
	add	edi, 2
	mov	eax, edi
	imul	eax, eax
	cmp	eax, esi
	jbe	.LBB7_6
	jmp	.LBB7_8
.LBB7_7:
	xor	ecx, ecx
.LBB7_8:                                # %.loopexit
	mov	al, cl
	ret
.Lfunc_end7:
	.size	_Z10checkprimej, .Lfunc_end7-_Z10checkprimej
	.cfi_endproc

	.section	.text._ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS5_S7_EEmRKS5_,"axG",@progbits,_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS5_S7_EEmRKS5_,comdat
	.weak	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS5_S7_EEmRKS5_
	.align	16, 0x90
	.type	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS5_S7_EEmRKS5_,@function
_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS5_S7_EEmRKS5_: # @_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS5_S7_EEmRKS5_
.Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception1
# BB#0:
	push	rbp
.Ltmp67:
	.cfi_def_cfa_offset 16
	push	r15
.Ltmp68:
	.cfi_def_cfa_offset 24
	push	r14
.Ltmp69:
	.cfi_def_cfa_offset 32
	push	r13
.Ltmp70:
	.cfi_def_cfa_offset 40
	push	r12
.Ltmp71:
	.cfi_def_cfa_offset 48
	push	rbx
.Ltmp72:
	.cfi_def_cfa_offset 56
	sub	rsp, 56
.Ltmp73:
	.cfi_def_cfa_offset 112
.Ltmp74:
	.cfi_offset rbx, -56
.Ltmp75:
	.cfi_offset r12, -48
.Ltmp76:
	.cfi_offset r13, -40
.Ltmp77:
	.cfi_offset r14, -32
.Ltmp78:
	.cfi_offset r15, -24
.Ltmp79:
	.cfi_offset rbp, -16
	mov	r14, rcx
	mov	r15, rdx
	mov	r13, rsi
	mov	rbp, rdi
	test	r15, r15
	je	.LBB8_47
# BB#1:
	mov	rcx, qword ptr [rbp + 8]
	mov	rax, qword ptr [rbp + 16]
	sub	rax, rcx
	sar	rax, 5
	cmp	rax, r15
	jae	.LBB8_2
# BB#32:
	movabs	rsi, 576460752303423487
	mov	qword ptr [rsp], rbp    # 8-byte Spill
	mov	rbp, qword ptr [rbp]
	sub	rcx, rbp
	sar	rcx, 5
	mov	rdx, rsi
	sub	rdx, rcx
	cmp	rdx, r15
	jb	.LBB8_65
# BB#33:                                # %_ZNKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE12_M_check_lenEmPKc.exit
	cmp	rcx, r15
	mov	rdx, rcx
	cmovb	rdx, r15
	lea	r12, [rdx + rcx]
	cmp	r12, rsi
	cmova	r12, rsi
	add	rdx, rcx
	cmovb	r12, rsi
	xor	eax, eax
	test	r12, r12
	je	.LBB8_36
# BB#34:
	cmp	r12, rsi
	ja	.LBB8_66
# BB#35:                                # %_ZN9__gnu_cxx14__alloc_traitsISaINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE8allocateERS7_m.exit.i
	mov	rdi, r12
	shl	rdi, 5
	call	_Znwm
.LBB8_36:                               # %_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE11_M_allocateEm.exit
	mov	qword ptr [rsp + 8], rax # 8-byte Spill
	mov	rbx, r13
	sub	rbx, rbp
	sar	rbx, 5
	shl	rbx, 5
	add	rbx, rax
.Ltmp54:
	mov	rbp, rax
	mov	rdi, rbx
	mov	rsi, r15
	mov	rdx, r14
	call	_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmS7_EET_S9_T0_RKT1_
.Ltmp55:
	mov	r14, qword ptr [rsp]    # 8-byte Reload
# BB#37:                                # %_ZSt24__uninitialized_fill_n_aIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmS5_S5_ET_S7_T0_RKT1_RSaIT2_E.exit19
	mov	rdi, qword ptr [r14]
	xor	ebp, ebp
.Ltmp56:
	mov	rsi, r13
	mov	rdx, qword ptr [rsp + 8] # 8-byte Reload
	call	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EET0_T_SA_S9_
.Ltmp57:
# BB#38:                                # %_ZSt34__uninitialized_move_if_noexcept_aIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_SaIS5_EET0_T_S9_S8_RT1_.exit15
	mov	rcx, r15
	shl	rcx, 5
	add	rax, rcx
	mov	rsi, qword ptr [r14 + 8]
.Ltmp58:
	mov	rbp, rax
	mov	rdi, r13
	mov	rdx, rax
	call	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EET0_T_SA_S9_
	mov	r13, rax
.Ltmp59:
# BB#39:                                # %_ZSt34__uninitialized_move_if_noexcept_aIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_SaIS5_EET0_T_S9_S8_RT1_.exit
	mov	rbx, qword ptr [r14]
	mov	rbp, qword ptr [r14 + 8]
	cmp	rbx, rbp
	je	.LBB8_44
	.align	16, 0x90
.LBB8_40:                               # %.lr.ph.i.i.i9
                                        # =>This Inner Loop Header: Depth=1
	mov	rdi, qword ptr [rbx]
	add	rbx, 16
	cmp	rdi, rbx
	je	.LBB8_42
# BB#41:                                #   in Loop: Header=BB8_40 Depth=1
	call	_ZdlPv
.LBB8_42:                               # %_ZSt8_DestroyINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEvPT_.exit.i.i.i10
                                        #   in Loop: Header=BB8_40 Depth=1
	add	rbx, 16
	cmp	rbx, rbp
	jne	.LBB8_40
# BB#43:                                # %_ZSt8_DestroyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_EvT_S7_RSaIT0_E.exit11thread-pre-split
	mov	rbx, qword ptr [r14]
.LBB8_44:                               # %_ZSt8_DestroyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_EvT_S7_RSaIT0_E.exit11
	test	rbx, rbx
	je	.LBB8_46
# BB#45:
	mov	rdi, rbx
	call	_ZdlPv
.LBB8_46:                               # %_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE13_M_deallocateEPS5_m.exit6
	mov	rax, qword ptr [rsp + 8] # 8-byte Reload
	mov	qword ptr [r14], rax
	mov	qword ptr [r14 + 8], r13
	shl	r12, 5
	add	r12, rax
	mov	qword ptr [r14 + 16], r12
	jmp	.LBB8_47
.LBB8_2:
	lea	rax, [rsp + 32]
	mov	qword ptr [rsp + 16], rax
	mov	r12, qword ptr [r14]
	mov	rbx, qword ptr [r14 + 8]
	test	r12, r12
	jne	.LBB8_4
# BB#3:
	test	rbx, rbx
	jne	.LBB8_62
.LBB8_4:
	mov	qword ptr [rsp + 48], rbx
	cmp	rbx, 15
	jbe	.LBB8_6
# BB#5:                                 # %.noexc1.i
	lea	rdi, [rsp + 16]
	lea	rsi, [rsp + 48]
	xor	edx, edx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
	mov	qword ptr [rsp + 16], rax
	mov	rcx, qword ptr [rsp + 48]
	mov	qword ptr [rsp + 32], rcx
.LBB8_6:
	test	rbx, rbx
	je	.LBB8_10
# BB#7:
	cmp	rbx, 1
	jne	.LBB8_9
# BB#8:
	mov	cl, byte ptr [r12]
	mov	byte ptr [rax], cl
	jmp	.LBB8_10
.LBB8_9:
	mov	rdi, rax
	mov	rsi, r12
	mov	rdx, rbx
	call	memcpy
.LBB8_10:
	mov	rax, qword ptr [rsp + 48]
	mov	qword ptr [rsp + 24], rax
	mov	rcx, qword ptr [rsp + 16]
	mov	byte ptr [rcx + rax], 0
	mov	rbx, qword ptr [rbp + 8]
	mov	r12, rbp
	mov	rbp, rbx
	sub	rbp, r13
	sar	rbp, 5
	cmp	rbp, r15
	jbe	.LBB8_24
# BB#11:
	mov	r14, r15
	shl	r14, 5
	mov	rbp, rbx
	sub	rbp, r14
.Ltmp45:
	mov	rdi, rbp
	mov	rsi, rbx
	mov	rdx, rbx
	call	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EET0_T_SA_S9_
.Ltmp46:
# BB#12:                                # %_ZSt22__uninitialized_move_aIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_SaIS5_EET0_T_S9_S8_RT1_.exit
	add	qword ptr [r12 + 8], r14
	sub	rbp, r13
	test	rbp, rbp
	jle	.LBB8_16
# BB#13:                                # %.lr.ph.preheader.i.i.i.i
	sar	rbp, 5
	inc	rbp
	add	rbx, -32
	shl	r15, 5
	neg	r15
	.align	16, 0x90
.LBB8_14:                               # %.lr.ph.i.i.i.i
                                        # =>This Inner Loop Header: Depth=1
	lea	rsi, [rbx + r15]
.Ltmp48:
	mov	rdi, rbx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
.Ltmp49:
# BB#15:                                # %.noexc
                                        #   in Loop: Header=BB8_14 Depth=1
	dec	rbp
	add	rbx, -32
	cmp	rbp, 1
	jg	.LBB8_14
.LBB8_16:                               # %.lr.ph.i.i.preheader
	lea	rbx, [rsp + 16]
	.align	16, 0x90
.LBB8_17:                               # %.lr.ph.i.i
                                        # =>This Inner Loop Header: Depth=1
.Ltmp51:
	mov	rdi, r13
	mov	rsi, rbx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
.Ltmp52:
# BB#18:                                # %.noexc7
                                        #   in Loop: Header=BB8_17 Depth=1
	add	r13, 32
	add	r14, -32
	jne	.LBB8_17
	jmp	.LBB8_30
.LBB8_24:
	sub	r15, rbp
.Ltmp38:
	lea	rdx, [rsp + 16]
	mov	rdi, rbx
	mov	rsi, r15
	call	_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmS7_EET_S9_T0_RKT1_
.Ltmp39:
# BB#25:                                # %_ZSt24__uninitialized_fill_n_aIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmS5_S5_ET_S7_T0_RKT1_RSaIT2_E.exit
	mov	qword ptr [r12 + 8], rax
.Ltmp40:
	mov	rdi, r13
	mov	rsi, rbx
	mov	rdx, rax
	call	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EET0_T_SA_S9_
.Ltmp41:
# BB#26:                                # %_ZSt22__uninitialized_move_aIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_SaIS5_EET0_T_S9_S8_RT1_.exit17
	shl	rbp, 5
	add	qword ptr [r12 + 8], rbp
	cmp	rbx, r13
	je	.LBB8_30
# BB#27:
	lea	rbp, [rsp + 16]
	.align	16, 0x90
.LBB8_28:                               # %.lr.ph.i.i21
                                        # =>This Inner Loop Header: Depth=1
.Ltmp42:
	mov	rdi, r13
	mov	rsi, rbp
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
.Ltmp43:
# BB#29:                                # %.noexc22
                                        #   in Loop: Header=BB8_28 Depth=1
	add	r13, 32
	cmp	rbx, r13
	jne	.LBB8_28
.LBB8_30:                               # %_ZSt4fillIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_EvT_S7_RKT0_.exit
	mov	rdi, qword ptr [rsp + 16]
	lea	rax, [rsp + 32]
	cmp	rdi, rax
	je	.LBB8_47
# BB#31:
	call	_ZdlPv
.LBB8_47:
	add	rsp, 56
	pop	rbx
	pop	r12
	pop	r13
	pop	r14
	pop	r15
	pop	rbp
	ret
.LBB8_19:                               # %.loopexit
.Ltmp53:
	jmp	.LBB8_21
.LBB8_63:                               # %.loopexit.split-lp.loopexit
.Ltmp50:
	jmp	.LBB8_21
.LBB8_64:                               # %.loopexit.split-lp.loopexit.split-lp.loopexit
.Ltmp44:
.LBB8_21:                               # %.loopexit.split-lp
	mov	rbx, rax
	mov	rdi, qword ptr [rsp + 16]
	lea	rax, [rsp + 32]
	cmp	rdi, rax
	je	.LBB8_23
# BB#22:
	call	_ZdlPv
.LBB8_23:                               # %_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev.exit
	mov	rdi, rbx
	call	_Unwind_Resume
.LBB8_48:
.Ltmp60:
	mov	rdi, rax
	call	__cxa_begin_catch
	test	rbp, rbp
	je	.LBB8_49
# BB#54:
	cmp	qword ptr [rsp + 8], rbp # 8-byte Folded Reload
	je	.LBB8_59
# BB#55:
	mov	rbx, qword ptr [rsp + 8] # 8-byte Reload
	.align	16, 0x90
.LBB8_56:                               # %.lr.ph.i.i.i
                                        # =>This Inner Loop Header: Depth=1
	mov	rdi, qword ptr [rbx]
	add	rbx, 16
	cmp	rdi, rbx
	je	.LBB8_58
# BB#57:                                #   in Loop: Header=BB8_56 Depth=1
	call	_ZdlPv
.LBB8_58:                               # %_ZSt8_DestroyINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEvPT_.exit.i.i.i
                                        #   in Loop: Header=BB8_56 Depth=1
	add	rbx, 16
	cmp	rbx, rbp
	jne	.LBB8_56
	jmp	.LBB8_59
.LBB8_20:                               # %.loopexit.split-lp.loopexit.split-lp.loopexit.split-lp
.Ltmp47:
	jmp	.LBB8_21
.LBB8_49:                               # %.lr.ph.i.i.i3.preheader
	shl	r15, 5
	add	r15, rbx
	.align	16, 0x90
.LBB8_50:                               # %.lr.ph.i.i.i3
                                        # =>This Inner Loop Header: Depth=1
	mov	rdi, qword ptr [rbx]
	add	rbx, 16
	cmp	rdi, rbx
	je	.LBB8_52
# BB#51:                                #   in Loop: Header=BB8_50 Depth=1
	call	_ZdlPv
.LBB8_52:                               # %_ZSt8_DestroyINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEvPT_.exit.i.i.i4
                                        #   in Loop: Header=BB8_50 Depth=1
	add	rbx, 16
	cmp	rbx, r15
	jne	.LBB8_50
.LBB8_59:                               # %_ZSt8_DestroyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_EvT_S7_RSaIT0_E.exit5
	cmp	qword ptr [rsp + 8], 0  # 8-byte Folded Reload
	je	.LBB8_61
# BB#60:
	mov	rdi, qword ptr [rsp + 8] # 8-byte Reload
	call	_ZdlPv
.LBB8_61:                               # %_ZNSt12_Vector_baseINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE13_M_deallocateEPS5_m.exit
.Ltmp61:
	call	__cxa_rethrow
.Ltmp62:
.LBB8_62:                               # %.noexc.i
	mov	edi, .L.str.2
	call	_ZSt19__throw_logic_errorPKc
.LBB8_65:
	mov	edi, .L.str.1
	call	_ZSt20__throw_length_errorPKc
.LBB8_66:
	call	_ZSt17__throw_bad_allocv
.LBB8_53:
.Ltmp63:
	mov	rbx, rax
.Ltmp64:
	call	__cxa_end_catch
.Ltmp65:
	jmp	.LBB8_23
.LBB8_67:
.Ltmp66:
	mov	rdi, rax
	call	__clang_call_terminate
.Lfunc_end8:
	.size	_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS5_S7_EEmRKS5_, .Lfunc_end8-_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS5_S7_EEmRKS5_
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.align	4
GCC_except_table8:
.Lexception1:
	.byte	255                     # @LPStart Encoding = omit
	.byte	3                       # @TType Encoding = udata4
	.asciz	"\245\201\200\200"      # @TType base offset
	.byte	3                       # Call site Encoding = udata4
	.ascii	"\234\001"              # Call site table length
	.long	.Lfunc_begin1-.Lfunc_begin1 # >> Call Site 1 <<
	.long	.Ltmp54-.Lfunc_begin1   #   Call between .Lfunc_begin1 and .Ltmp54
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.long	.Ltmp54-.Lfunc_begin1   # >> Call Site 2 <<
	.long	.Ltmp59-.Ltmp54         #   Call between .Ltmp54 and .Ltmp59
	.long	.Ltmp60-.Lfunc_begin1   #     jumps to .Ltmp60
	.byte	1                       #   On action: 1
	.long	.Ltmp59-.Lfunc_begin1   # >> Call Site 3 <<
	.long	.Ltmp45-.Ltmp59         #   Call between .Ltmp59 and .Ltmp45
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.long	.Ltmp45-.Lfunc_begin1   # >> Call Site 4 <<
	.long	.Ltmp46-.Ltmp45         #   Call between .Ltmp45 and .Ltmp46
	.long	.Ltmp47-.Lfunc_begin1   #     jumps to .Ltmp47
	.byte	0                       #   On action: cleanup
	.long	.Ltmp48-.Lfunc_begin1   # >> Call Site 5 <<
	.long	.Ltmp49-.Ltmp48         #   Call between .Ltmp48 and .Ltmp49
	.long	.Ltmp50-.Lfunc_begin1   #     jumps to .Ltmp50
	.byte	0                       #   On action: cleanup
	.long	.Ltmp51-.Lfunc_begin1   # >> Call Site 6 <<
	.long	.Ltmp52-.Ltmp51         #   Call between .Ltmp51 and .Ltmp52
	.long	.Ltmp53-.Lfunc_begin1   #     jumps to .Ltmp53
	.byte	0                       #   On action: cleanup
	.long	.Ltmp38-.Lfunc_begin1   # >> Call Site 7 <<
	.long	.Ltmp41-.Ltmp38         #   Call between .Ltmp38 and .Ltmp41
	.long	.Ltmp47-.Lfunc_begin1   #     jumps to .Ltmp47
	.byte	0                       #   On action: cleanup
	.long	.Ltmp42-.Lfunc_begin1   # >> Call Site 8 <<
	.long	.Ltmp43-.Ltmp42         #   Call between .Ltmp42 and .Ltmp43
	.long	.Ltmp44-.Lfunc_begin1   #     jumps to .Ltmp44
	.byte	0                       #   On action: cleanup
	.long	.Ltmp43-.Lfunc_begin1   # >> Call Site 9 <<
	.long	.Ltmp61-.Ltmp43         #   Call between .Ltmp43 and .Ltmp61
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.long	.Ltmp61-.Lfunc_begin1   # >> Call Site 10 <<
	.long	.Ltmp62-.Ltmp61         #   Call between .Ltmp61 and .Ltmp62
	.long	.Ltmp63-.Lfunc_begin1   #     jumps to .Ltmp63
	.byte	0                       #   On action: cleanup
	.long	.Ltmp62-.Lfunc_begin1   # >> Call Site 11 <<
	.long	.Ltmp64-.Ltmp62         #   Call between .Ltmp62 and .Ltmp64
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.long	.Ltmp64-.Lfunc_begin1   # >> Call Site 12 <<
	.long	.Ltmp65-.Ltmp64         #   Call between .Ltmp64 and .Ltmp65
	.long	.Ltmp66-.Lfunc_begin1   #     jumps to .Ltmp66
	.byte	1                       #   On action: 1
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
	.align	4

	.section	.text._ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EET0_T_SA_S9_,"axG",@progbits,_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EET0_T_SA_S9_,comdat
	.weak	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EET0_T_SA_S9_
	.align	16, 0x90
	.type	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EET0_T_SA_S9_,@function
_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EET0_T_SA_S9_: # @_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EET0_T_SA_S9_
.Lfunc_begin2:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception2
# BB#0:
	push	rbp
.Ltmp92:
	.cfi_def_cfa_offset 16
	push	r15
.Ltmp93:
	.cfi_def_cfa_offset 24
	push	r14
.Ltmp94:
	.cfi_def_cfa_offset 32
	push	r13
.Ltmp95:
	.cfi_def_cfa_offset 40
	push	r12
.Ltmp96:
	.cfi_def_cfa_offset 48
	push	rbx
.Ltmp97:
	.cfi_def_cfa_offset 56
	sub	rsp, 40
.Ltmp98:
	.cfi_def_cfa_offset 96
.Ltmp99:
	.cfi_offset rbx, -56
.Ltmp100:
	.cfi_offset r12, -48
.Ltmp101:
	.cfi_offset r13, -40
.Ltmp102:
	.cfi_offset r14, -32
.Ltmp103:
	.cfi_offset r15, -24
.Ltmp104:
	.cfi_offset rbp, -16
	mov	rbx, rdx
	mov	qword ptr [rsp + 24], rsi # 8-byte Spill
	mov	qword ptr [rsp + 8], rdi # 8-byte Spill
	cmp	rdi, rsi
	je	.LBB9_14
# BB#1:                                 # %.lr.ph
	xor	eax, eax
	mov	r15, rbx
	.align	16, 0x90
.LBB9_2:                                # =>This Inner Loop Header: Depth=1
	mov	r12, rax
	lea	r14, [rbx + r12]
	lea	rax, [rbx + r12 + 16]
	mov	qword ptr [rbx + r12], rax
	mov	rsi, qword ptr [rdi + r12]
	mov	r13, qword ptr [rdi + r12 + 8]
	test	rsi, rsi
	jne	.LBB9_5
# BB#3:                                 #   in Loop: Header=BB9_2 Depth=1
	test	r13, r13
	jne	.LBB9_4
.LBB9_5:                                #   in Loop: Header=BB9_2 Depth=1
	mov	qword ptr [rsp + 32], r13
	cmp	r13, 15
	jbe	.LBB9_8
# BB#6:                                 # %.noexc1.i.i
                                        #   in Loop: Header=BB9_2 Depth=1
.Ltmp83:
	mov	qword ptr [rsp + 16], rsi # 8-byte Spill
	mov	rbp, rdi
	xor	edx, edx
	mov	rdi, r14
	lea	rsi, [rsp + 32]
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
.Ltmp84:
# BB#7:                                 # %.noexc1
                                        #   in Loop: Header=BB9_2 Depth=1
	mov	qword ptr [rbx + r12], rax
	mov	rcx, qword ptr [rsp + 32]
	mov	qword ptr [rbx + r12 + 16], rcx
	mov	r14, r15
	mov	rdi, rbp
	mov	rsi, qword ptr [rsp + 16] # 8-byte Reload
.LBB9_8:                                #   in Loop: Header=BB9_2 Depth=1
	lea	rbp, [rdi + r12]
	test	r13, r13
	je	.LBB9_12
# BB#9:                                 #   in Loop: Header=BB9_2 Depth=1
	cmp	r13, 1
	jne	.LBB9_11
# BB#10:                                #   in Loop: Header=BB9_2 Depth=1
	mov	cl, byte ptr [rsi]
	mov	byte ptr [rax], cl
	jmp	.LBB9_12
	.align	16, 0x90
.LBB9_11:                               #   in Loop: Header=BB9_2 Depth=1
	mov	rdi, rax
	mov	rdx, r13
	call	memcpy
	mov	rdi, qword ptr [rsp + 8] # 8-byte Reload
.LBB9_12:                               #   in Loop: Header=BB9_2 Depth=1
	mov	rax, qword ptr [rsp + 32]
	mov	qword ptr [rbx + r12 + 8], rax
	mov	rcx, qword ptr [r14]
	mov	byte ptr [rcx + rax], 0
	add	r15, 32
	lea	rax, [r12 + 32]
	add	rbp, 32
	cmp	rbp, qword ptr [rsp + 24] # 8-byte Folded Reload
	jne	.LBB9_2
	jmp	.LBB9_13
.LBB9_4:                                # %.noexc.i.i
                                        #   in Loop: Header=BB9_2 Depth=1
.Ltmp80:
	mov	edi, .L.str.2
	call	_ZSt19__throw_logic_errorPKc
.Ltmp81:
	jmp	.LBB9_5
.LBB9_16:                               # %.loopexit.split-lp
.Ltmp82:
	jmp	.LBB9_17
.LBB9_13:
	lea	rbx, [rbx + r12 + 32]
.LBB9_14:                               # %._crit_edge
	mov	rax, rbx
	add	rsp, 40
	pop	rbx
	pop	r12
	pop	r13
	pop	r14
	pop	r15
	pop	rbp
	ret
.LBB9_15:                               # %.loopexit
.Ltmp85:
.LBB9_17:
	mov	rdi, rax
	call	__cxa_begin_catch
	cmp	r14, rbx
	je	.LBB9_21
	.align	16, 0x90
.LBB9_18:                               # %.lr.ph.i.i
                                        # =>This Inner Loop Header: Depth=1
	mov	rdi, qword ptr [rbx]
	add	rbx, 16
	cmp	rdi, rbx
	je	.LBB9_20
# BB#19:                                #   in Loop: Header=BB9_18 Depth=1
	call	_ZdlPv
.LBB9_20:                               # %_ZSt8_DestroyINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEvPT_.exit.i.i
                                        #   in Loop: Header=BB9_18 Depth=1
	add	rbx, 16
	cmp	rbx, r14
	jne	.LBB9_18
.LBB9_21:                               # %_ZSt8_DestroyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEvT_S7_.exit
.Ltmp86:
	call	__cxa_rethrow
.Ltmp87:
# BB#25:
.LBB9_22:
.Ltmp88:
	mov	rbx, rax
.Ltmp89:
	call	__cxa_end_catch
.Ltmp90:
# BB#23:
	mov	rdi, rbx
	call	_Unwind_Resume
.LBB9_24:
.Ltmp91:
	mov	rdi, rax
	call	__clang_call_terminate
.Lfunc_end9:
	.size	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EET0_T_SA_S9_, .Lfunc_end9-_ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_EET0_T_SA_S9_
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.align	4
GCC_except_table9:
.Lexception2:
	.byte	255                     # @LPStart Encoding = omit
	.byte	3                       # @TType Encoding = udata4
	.asciz	"\343\200"              # @TType base offset
	.byte	3                       # Call site Encoding = udata4
	.byte	91                      # Call site table length
	.long	.Ltmp83-.Lfunc_begin2   # >> Call Site 1 <<
	.long	.Ltmp84-.Ltmp83         #   Call between .Ltmp83 and .Ltmp84
	.long	.Ltmp85-.Lfunc_begin2   #     jumps to .Ltmp85
	.byte	1                       #   On action: 1
	.long	.Ltmp84-.Lfunc_begin2   # >> Call Site 2 <<
	.long	.Ltmp80-.Ltmp84         #   Call between .Ltmp84 and .Ltmp80
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.long	.Ltmp80-.Lfunc_begin2   # >> Call Site 3 <<
	.long	.Ltmp81-.Ltmp80         #   Call between .Ltmp80 and .Ltmp81
	.long	.Ltmp82-.Lfunc_begin2   #     jumps to .Ltmp82
	.byte	1                       #   On action: 1
	.long	.Ltmp81-.Lfunc_begin2   # >> Call Site 4 <<
	.long	.Ltmp86-.Ltmp81         #   Call between .Ltmp81 and .Ltmp86
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.long	.Ltmp86-.Lfunc_begin2   # >> Call Site 5 <<
	.long	.Ltmp87-.Ltmp86         #   Call between .Ltmp86 and .Ltmp87
	.long	.Ltmp88-.Lfunc_begin2   #     jumps to .Ltmp88
	.byte	0                       #   On action: cleanup
	.long	.Ltmp89-.Lfunc_begin2   # >> Call Site 6 <<
	.long	.Ltmp90-.Ltmp89         #   Call between .Ltmp89 and .Ltmp90
	.long	.Ltmp91-.Lfunc_begin2   #     jumps to .Ltmp91
	.byte	1                       #   On action: 1
	.long	.Ltmp90-.Lfunc_begin2   # >> Call Site 7 <<
	.long	.Lfunc_end9-.Ltmp90     #   Call between .Ltmp90 and .Lfunc_end9
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
	.align	4

	.section	.text._ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmS7_EET_S9_T0_RKT1_,"axG",@progbits,_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmS7_EET_S9_T0_RKT1_,comdat
	.weak	_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmS7_EET_S9_T0_RKT1_
	.align	16, 0x90
	.type	_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmS7_EET_S9_T0_RKT1_,@function
_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmS7_EET_S9_T0_RKT1_: # @_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmS7_EET_S9_T0_RKT1_
.Lfunc_begin3:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception3
# BB#0:
	push	rbp
.Ltmp117:
	.cfi_def_cfa_offset 16
	push	r15
.Ltmp118:
	.cfi_def_cfa_offset 24
	push	r14
.Ltmp119:
	.cfi_def_cfa_offset 32
	push	r13
.Ltmp120:
	.cfi_def_cfa_offset 40
	push	r12
.Ltmp121:
	.cfi_def_cfa_offset 48
	push	rbx
.Ltmp122:
	.cfi_def_cfa_offset 56
	push	rax
.Ltmp123:
	.cfi_def_cfa_offset 64
.Ltmp124:
	.cfi_offset rbx, -56
.Ltmp125:
	.cfi_offset r12, -48
.Ltmp126:
	.cfi_offset r13, -40
.Ltmp127:
	.cfi_offset r14, -32
.Ltmp128:
	.cfi_offset r15, -24
.Ltmp129:
	.cfi_offset rbp, -16
	mov	r15, rdx
	mov	r12, rsi
	mov	rbx, rdi
	test	r12, r12
	je	.LBB10_1
# BB#2:                                 # %.lr.ph
	mov	r14, rbx
	.align	16, 0x90
.LBB10_3:                               # =>This Inner Loop Header: Depth=1
	lea	rax, [r14 + 16]
	mov	qword ptr [r14], rax
	mov	rbp, qword ptr [r15]
	mov	r13, qword ptr [r15 + 8]
	test	rbp, rbp
	jne	.LBB10_6
# BB#4:                                 #   in Loop: Header=BB10_3 Depth=1
	test	r13, r13
	jne	.LBB10_5
.LBB10_6:                               #   in Loop: Header=BB10_3 Depth=1
	mov	qword ptr [rsp], r13
	cmp	r13, 16
	jb	.LBB10_9
# BB#7:                                 # %.noexc1.i.i
                                        #   in Loop: Header=BB10_3 Depth=1
.Ltmp108:
	xor	edx, edx
	mov	rdi, r14
	lea	rsi, [rsp]
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
.Ltmp109:
# BB#8:                                 # %.noexc1
                                        #   in Loop: Header=BB10_3 Depth=1
	mov	qword ptr [r14], rax
	mov	rcx, qword ptr [rsp]
	mov	qword ptr [r14 + 16], rcx
.LBB10_9:                               #   in Loop: Header=BB10_3 Depth=1
	test	r13, r13
	je	.LBB10_13
# BB#10:                                #   in Loop: Header=BB10_3 Depth=1
	cmp	r13, 1
	jne	.LBB10_12
# BB#11:                                #   in Loop: Header=BB10_3 Depth=1
	mov	cl, byte ptr [rbp]
	mov	byte ptr [rax], cl
	jmp	.LBB10_13
	.align	16, 0x90
.LBB10_12:                              #   in Loop: Header=BB10_3 Depth=1
	mov	rdi, rax
	mov	rsi, rbp
	mov	rdx, r13
	call	memcpy
.LBB10_13:                              #   in Loop: Header=BB10_3 Depth=1
	mov	rax, qword ptr [rsp]
	mov	qword ptr [r14 + 8], rax
	mov	rcx, qword ptr [r14]
	mov	byte ptr [rcx + rax], 0
	add	r14, 32
	dec	r12
	jne	.LBB10_3
	jmp	.LBB10_14
.LBB10_5:                               # %.noexc.i.i
                                        #   in Loop: Header=BB10_3 Depth=1
.Ltmp105:
	mov	edi, .L.str.2
	call	_ZSt19__throw_logic_errorPKc
.Ltmp106:
	jmp	.LBB10_6
.LBB10_16:                              # %.loopexit.split-lp
.Ltmp107:
	jmp	.LBB10_17
.LBB10_1:
	mov	r14, rbx
.LBB10_14:                              # %._crit_edge
	mov	rax, r14
	add	rsp, 8
	pop	rbx
	pop	r12
	pop	r13
	pop	r14
	pop	r15
	pop	rbp
	ret
.LBB10_15:                              # %.loopexit
.Ltmp110:
.LBB10_17:
	mov	rdi, rax
	call	__cxa_begin_catch
	cmp	r14, rbx
	je	.LBB10_21
	.align	16, 0x90
.LBB10_18:                              # %.lr.ph.i.i
                                        # =>This Inner Loop Header: Depth=1
	mov	rdi, qword ptr [rbx]
	add	rbx, 16
	cmp	rdi, rbx
	je	.LBB10_20
# BB#19:                                #   in Loop: Header=BB10_18 Depth=1
	call	_ZdlPv
.LBB10_20:                              # %_ZSt8_DestroyINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEvPT_.exit.i.i
                                        #   in Loop: Header=BB10_18 Depth=1
	add	rbx, 16
	cmp	rbx, r14
	jne	.LBB10_18
.LBB10_21:                              # %_ZSt8_DestroyIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEvT_S7_.exit
.Ltmp111:
	call	__cxa_rethrow
.Ltmp112:
# BB#25:
.LBB10_22:
.Ltmp113:
	mov	rbx, rax
.Ltmp114:
	call	__cxa_end_catch
.Ltmp115:
# BB#23:
	mov	rdi, rbx
	call	_Unwind_Resume
.LBB10_24:
.Ltmp116:
	mov	rdi, rax
	call	__clang_call_terminate
.Lfunc_end10:
	.size	_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmS7_EET_S9_T0_RKT1_, .Lfunc_end10-_ZNSt22__uninitialized_fill_nILb0EE15__uninit_fill_nIPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmS7_EET_S9_T0_RKT1_
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.align	4
GCC_except_table10:
.Lexception3:
	.byte	255                     # @LPStart Encoding = omit
	.byte	3                       # @TType Encoding = udata4
	.asciz	"\343\200"              # @TType base offset
	.byte	3                       # Call site Encoding = udata4
	.byte	91                      # Call site table length
	.long	.Ltmp108-.Lfunc_begin3  # >> Call Site 1 <<
	.long	.Ltmp109-.Ltmp108       #   Call between .Ltmp108 and .Ltmp109
	.long	.Ltmp110-.Lfunc_begin3  #     jumps to .Ltmp110
	.byte	1                       #   On action: 1
	.long	.Ltmp109-.Lfunc_begin3  # >> Call Site 2 <<
	.long	.Ltmp105-.Ltmp109       #   Call between .Ltmp109 and .Ltmp105
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.long	.Ltmp105-.Lfunc_begin3  # >> Call Site 3 <<
	.long	.Ltmp106-.Ltmp105       #   Call between .Ltmp105 and .Ltmp106
	.long	.Ltmp107-.Lfunc_begin3  #     jumps to .Ltmp107
	.byte	1                       #   On action: 1
	.long	.Ltmp106-.Lfunc_begin3  # >> Call Site 4 <<
	.long	.Ltmp111-.Ltmp106       #   Call between .Ltmp106 and .Ltmp111
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.long	.Ltmp111-.Lfunc_begin3  # >> Call Site 5 <<
	.long	.Ltmp112-.Ltmp111       #   Call between .Ltmp111 and .Ltmp112
	.long	.Ltmp113-.Lfunc_begin3  #     jumps to .Ltmp113
	.byte	0                       #   On action: cleanup
	.long	.Ltmp114-.Lfunc_begin3  # >> Call Site 6 <<
	.long	.Ltmp115-.Ltmp114       #   Call between .Ltmp114 and .Ltmp115
	.long	.Ltmp116-.Lfunc_begin3  #     jumps to .Ltmp116
	.byte	1                       #   On action: 1
	.long	.Ltmp115-.Lfunc_begin3  # >> Call Site 7 <<
	.long	.Lfunc_end10-.Ltmp115   #   Call between .Ltmp115 and .Lfunc_end10
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
	.align	4

	.section	.text.startup,"ax",@progbits
	.align	16, 0x90
	.type	_GLOBAL__sub_I_hashTable.cpp,@function
_GLOBAL__sub_I_hashTable.cpp:           # @_GLOBAL__sub_I_hashTable.cpp
	.cfi_startproc
# BB#0:
	push	rax
.Ltmp130:
	.cfi_def_cfa_offset 16
	mov	edi, _ZStL8__ioinit
	call	_ZNSt8ios_base4InitC1Ev
	mov	edi, _ZNSt8ios_base4InitD1Ev
	mov	esi, _ZStL8__ioinit
	mov	edx, __dso_handle
	pop	rax
	jmp	__cxa_atexit            # TAILCALL
.Lfunc_end11:
	.size	_GLOBAL__sub_I_hashTable.cpp, .Lfunc_end11-_GLOBAL__sub_I_hashTable.cpp
	.cfi_endproc

	.type	_ZStL8__ioinit,@object  # @_ZStL8__ioinit
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"?"
	.size	.L.str, 2

	.type	.L.str.1,@object        # @.str.1
.L.str.1:
	.asciz	"vector::_M_fill_insert"
	.size	.L.str.1, 23

	.type	.L.str.2,@object        # @.str.2
.L.str.2:
	.asciz	"basic_string::_M_construct null not valid"
	.size	.L.str.2, 42

	.section	.init_array,"aw",@init_array
	.align	8
	.quad	_GLOBAL__sub_I_hashTable.cpp

	.globl	_ZN9hashTableC1Ej
	.type	_ZN9hashTableC1Ej,@function
_ZN9hashTableC1Ej = _ZN9hashTableC2Ej
	.ident	"clang version 3.8.0-2ubuntu4 (tags/RELEASE_380/final)"
	.section	".note.GNU-stack","",@progbits
