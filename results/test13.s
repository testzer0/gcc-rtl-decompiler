	.file	"test13.c"
	.text
	.section	.rodata
.LC0:
	.string	"pointer is at address %p\n"
	.align 8
.LC1:
	.string	"value at address of pointer is %c\n\n"
.LC2:
	.string	"array[3] = %c, addr = %p\n"
	.align 8
.LC3:
	.string	"same_array[3] = %c, addr = %p\n"
	.align 8
.LC4:
	.string	"**fancy_same_array[3] = %c, addr = %p\n"
.LC5:
	.string	"array string %s, addr = %p\n"
	.align 8
.LC6:
	.string	"same array string %s, addr = %p\n"
	.align 8
.LC7:
	.string	"fancy array string %s, addr = %p\n\n"
.LC8:
	.string	"**ptr_array = %c\n"
.LC9:
	.string	"addr at **ptr_array = %p\n"
.LC10:
	.string	"addr at **ptr_array[0] = %p\n\n"
.LC11:
	.string	"*ptr_array[1] = %c\n"
.LC12:
	.string	"addr at *ptr_array[0] = %p\n"
.LC13:
	.string	"addr at *ptr_array[1] = %p\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
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
	movl	$65, -76(%rbp)
	leaq	-76(%rbp), %rax
	movq	%rax, -72(%rbp)
	leaq	-72(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-72(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movb	$97, -13(%rbp)
	movb	$65, -12(%rbp)
	movb	$98, -11(%rbp)
	movb	$122, -10(%rbp)
	movb	$77, -9(%rbp)
	leaq	-13(%rbp), %rax
	movq	%rax, -64(%rbp)
	leaq	-64(%rbp), %rax
	movq	%rax, -56(%rbp)
	movzbl	-10(%rbp), %eax
	movsbl	%al, %eax
	leaq	-13(%rbp), %rdx
	addq	$3, %rdx
	movl	%eax, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-64(%rbp), %rax
	leaq	3(%rax), %rdx
	movq	-64(%rbp), %rax
	addq	$3, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	leaq	3(%rax), %rdx
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	addq	$3, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-13(%rbp), %rdx
	leaq	-13(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-64(%rbp), %rax
	leaq	-64(%rbp), %rdx
	movq	%rax, %rsi
	leaq	.LC6(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	movq	-56(%rbp), %rdx
	movq	%rax, %rsi
	leaq	.LC7(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	$0, -48(%rbp)
	movq	$0, -40(%rbp)
	movb	$72, -15(%rbp)
	movb	$105, -14(%rbp)
	leaq	-15(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -48(%rbp)
	leaq	-15(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	.LC8(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-32(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC9(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-32(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC10(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	.LC11(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-32(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC12(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-32(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC12(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC13(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
