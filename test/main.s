	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp2:
	.cfi_def_cfa_offset 16
Ltmp3:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp4:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	leaq	L_.str(%rip), %rdi
	movabsq	$25, %rax
	cvtsi2ssq	%rax, %xmm0
	movabsq	$5, %rax
	cvtsi2ssq	%rax, %xmm1
	movl	$0, -4(%rbp)
	movss	%xmm1, -8(%rbp)
	movss	%xmm0, -12(%rbp)
	movss	-8(%rbp), %xmm0
	mulss	-12(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	movb	$1, %al
	callq	_printf
	leaq	L_.str(%rip), %rdi
	movss	-8(%rbp), %xmm0
	addss	-12(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	movl	$0, %ecx
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	 "%f\n"


.subsections_via_symbols
