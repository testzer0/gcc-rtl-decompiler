	.file	"test4.c"
	.text
	.globl	binary_search
	.type	binary_search, @function
binary_search:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	movl	%ecx, -36(%rbp)
	movl	-28(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jle	.L2
	movl	$-1, %eax
	jmp	.L3
.L2:
	movl	-32(%rbp), %eax
	subl	-28(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -36(%rbp)
	jne	.L4
	movl	-4(%rbp), %eax
	jmp	.L3
.L4:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -36(%rbp)
	jle	.L5
	movl	-4(%rbp), %eax
	leal	1(%rax), %esi
	movl	-36(%rbp), %ecx
	movl	-32(%rbp), %edx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	binary_search
	jmp	.L3
.L5:
	movl	-4(%rbp), %eax
	leal	-1(%rax), %edi
	movl	-36(%rbp), %edx
	movl	-28(%rbp), %esi
	movq	-24(%rbp), %rax
	movl	%edx, %ecx
	movl	%edi, %edx
	movq	%rax, %rdi
	call	binary_search
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	binary_search, .-binary_search
	.section	.rodata
.LC0:
	.string	"Pos is %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$3, -32(%rbp)
	movl	$5, -28(%rbp)
	movl	$11, -24(%rbp)
	movl	$33, -20(%rbp)
	movl	$71, -16(%rbp)
	leaq	-32(%rbp), %rax
	movl	$33, %ecx
	movl	$4, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	binary_search
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L8
	call	__stack_chk_fail@PLT
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
