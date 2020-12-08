	.file	"test11.c"
	.text
	.globl	minKey
	.type	minKey, @function
minKey:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$2147483647, -12(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L4:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	xorl	$1, %eax
	testb	%al, %al
	je	.L3
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -12(%rbp)
	jle	.L3
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -12(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, -8(%rbp)
.L3:
	addl	$1, -4(%rbp)
.L2:
	cmpl	$4, -4(%rbp)
	jle	.L4
	movl	-8(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	minKey, .-minKey
	.section	.rodata
.LC0:
	.string	"Edge \tWeight"
.LC1:
	.string	"%d - %d \t%d \n"
	.text
	.globl	printMST
	.type	printMST, @function
printMST:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	movl	$1, -4(%rbp)
	jmp	.L7
.L8:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	movq	-32(%rbp), %rax
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	cltq
	movl	(%rdx,%rax,4), %ecx
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	-4(%rbp), %edx
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -4(%rbp)
.L7:
	cmpl	$4, -4(%rbp)
	jle	.L8
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	printMST, .-printMST
	.globl	primMST
	.type	primMST, @function
primMST:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$112, %rsp
	movq	%rdi, -104(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -88(%rbp)
	jmp	.L10
.L11:
	movl	-88(%rbp), %eax
	cltq
	movl	$2147483647, -32(%rbp,%rax,4)
	movl	-88(%rbp), %eax
	cltq
	movb	$0, -69(%rbp,%rax)
	addl	$1, -88(%rbp)
.L10:
	cmpl	$4, -88(%rbp)
	jle	.L11
	movl	$0, -32(%rbp)
	movl	$-1, -64(%rbp)
	movl	$0, -84(%rbp)
	jmp	.L12
.L16:
	leaq	-69(%rbp), %rdx
	leaq	-32(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	minKey
	movl	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	cltq
	movb	$1, -69(%rbp,%rax)
	movl	$0, -80(%rbp)
	jmp	.L13
.L15:
	movl	-76(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	movq	-104(%rbp), %rax
	addq	%rax, %rdx
	movl	-80(%rbp), %eax
	cltq
	movl	(%rdx,%rax,4), %eax
	testl	%eax, %eax
	je	.L14
	movl	-80(%rbp), %eax
	cltq
	movzbl	-69(%rbp,%rax), %eax
	xorl	$1, %eax
	testb	%al, %al
	je	.L14
	movl	-76(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	movq	-104(%rbp), %rax
	addq	%rax, %rdx
	movl	-80(%rbp), %eax
	cltq
	movl	(%rdx,%rax,4), %edx
	movl	-80(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %eax
	cmpl	%eax, %edx
	jge	.L14
	movl	-80(%rbp), %eax
	cltq
	movl	-76(%rbp), %edx
	movl	%edx, -64(%rbp,%rax,4)
	movl	-76(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	movq	-104(%rbp), %rax
	addq	%rax, %rdx
	movl	-80(%rbp), %eax
	cltq
	movl	(%rdx,%rax,4), %edx
	movl	-80(%rbp), %eax
	cltq
	movl	%edx, -32(%rbp,%rax,4)
.L14:
	addl	$1, -80(%rbp)
.L13:
	cmpl	$4, -80(%rbp)
	jle	.L15
	addl	$1, -84(%rbp)
.L12:
	cmpl	$3, -84(%rbp)
	jle	.L16
	movq	-104(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	printMST
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L17
	call	__stack_chk_fail@PLT
.L17:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	primMST, .-primMST
	.globl	main
	.type	main, @function
main:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$112, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -112(%rbp)
	movl	$2, -108(%rbp)
	movl	$0, -104(%rbp)
	movl	$6, -100(%rbp)
	movl	$0, -96(%rbp)
	movl	$2, -92(%rbp)
	movl	$0, -88(%rbp)
	movl	$3, -84(%rbp)
	movl	$8, -80(%rbp)
	movl	$5, -76(%rbp)
	movl	$0, -72(%rbp)
	movl	$3, -68(%rbp)
	movl	$0, -64(%rbp)
	movl	$0, -60(%rbp)
	movl	$7, -56(%rbp)
	movl	$6, -52(%rbp)
	movl	$8, -48(%rbp)
	movl	$0, -44(%rbp)
	movl	$0, -40(%rbp)
	movl	$9, -36(%rbp)
	movl	$0, -32(%rbp)
	movl	$5, -28(%rbp)
	movl	$7, -24(%rbp)
	movl	$9, -20(%rbp)
	movl	$0, -16(%rbp)
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	primMST
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L20
	call	__stack_chk_fail@PLT
.L20:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
