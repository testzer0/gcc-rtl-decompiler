	.file	"test14.c"
	.text
	.globl	floydWarshall
	.type	floydWarshall, @function
floydWarshall:
.LFB0:
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
	movl	$0, -92(%rbp)
	jmp	.L2
.L5:
	movl	$0, -88(%rbp)
	jmp	.L3
.L4:
	movl	-92(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-104(%rbp), %rax
	addq	%rax, %rdx
	movl	-88(%rbp), %eax
	cltq
	movl	(%rdx,%rax,4), %eax
	movl	-88(%rbp), %edx
	movslq	%edx, %rdx
	movl	-92(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rdx
	movl	%eax, -80(%rbp,%rdx,4)
	addl	$1, -88(%rbp)
.L3:
	cmpl	$3, -88(%rbp)
	jle	.L4
	addl	$1, -92(%rbp)
.L2:
	cmpl	$3, -92(%rbp)
	jle	.L5
	movl	$0, -84(%rbp)
	jmp	.L6
.L12:
	movl	$0, -92(%rbp)
	jmp	.L7
.L11:
	movl	$0, -88(%rbp)
	jmp	.L8
.L10:
	movl	-84(%rbp), %eax
	cltq
	movl	-92(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	-80(%rbp,%rax,4), %edx
	movl	-88(%rbp), %eax
	cltq
	movl	-84(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rax
	movl	-80(%rbp,%rax,4), %eax
	leal	(%rdx,%rax), %ecx
	movl	-88(%rbp), %eax
	cltq
	movl	-92(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	-80(%rbp,%rax,4), %eax
	cmpl	%eax, %ecx
	jge	.L9
	movl	-84(%rbp), %eax
	cltq
	movl	-92(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	-80(%rbp,%rax,4), %edx
	movl	-88(%rbp), %eax
	cltq
	movl	-84(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rax
	movl	-80(%rbp,%rax,4), %eax
	addl	%eax, %edx
	movl	-88(%rbp), %eax
	cltq
	movl	-92(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rax
	movl	%edx, -80(%rbp,%rax,4)
.L9:
	addl	$1, -88(%rbp)
.L8:
	cmpl	$3, -88(%rbp)
	jle	.L10
	addl	$1, -92(%rbp)
.L7:
	cmpl	$3, -92(%rbp)
	jle	.L11
	addl	$1, -84(%rbp)
.L6:
	cmpl	$3, -84(%rbp)
	jle	.L12
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	printSolution
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L13
	call	__stack_chk_fail@PLT
.L13:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	floydWarshall, .-floydWarshall
	.section	.rodata
	.align 8
.LC0:
	.string	"The following matrix shows the shortest distances between every pair of vertices "
.LC1:
	.string	"INF"
.LC2:
	.string	"%7s"
.LC3:
	.string	"%7d"
	.text
	.globl	printSolution
	.type	printSolution, @function
printSolution:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	movl	$0, -8(%rbp)
	jmp	.L15
.L20:
	movl	$0, -4(%rbp)
	jmp	.L16
.L19:
	movl	-8(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	cltq
	movl	(%rdx,%rax,4), %eax
	cmpl	$99999, %eax
	jne	.L17
	leaq	.LC1(%rip), %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L18
.L17:
	movl	-8(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	cltq
	movl	(%rdx,%rax,4), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L18:
	addl	$1, -4(%rbp)
.L16:
	cmpl	$3, -4(%rbp)
	jle	.L19
	movl	$10, %edi
	call	putchar@PLT
	addl	$1, -8(%rbp)
.L15:
	cmpl	$3, -8(%rbp)
	jle	.L20
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	printSolution, .-printSolution
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -80(%rbp)
	movl	$5, -76(%rbp)
	movl	$99999, -72(%rbp)
	movl	$10, -68(%rbp)
	movl	$99999, -64(%rbp)
	movl	$0, -60(%rbp)
	movl	$3, -56(%rbp)
	movl	$99999, -52(%rbp)
	movl	$99999, -48(%rbp)
	movl	$99999, -44(%rbp)
	movl	$0, -40(%rbp)
	movl	$1, -36(%rbp)
	movl	$99999, -32(%rbp)
	movl	$99999, -28(%rbp)
	movl	$99999, -24(%rbp)
	movl	$0, -20(%rbp)
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	floydWarshall
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L23
	call	__stack_chk_fail@PLT
.L23:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
