	.file	"test10.c"
	.text
	.globl	newNode
	.type	newNode, @function
newNode:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$40, %edi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	-20(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 16(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 24(%rax)
	movq	-8(%rbp), %rax
	movl	$1, 32(%rax)
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	newNode, .-newNode
	.globl	isLeaf
	.type	isLeaf, @function
isLeaf:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	jne	.L4
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	jne	.L4
	movl	$1, %eax
	jmp	.L5
.L4:
	movl	$0, %eax
.L5:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	isLeaf, .-isLeaf
	.globl	leftRotate
	.type	leftRotate, @function
leftRotate:
.LFB7:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	16(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 24(%rax)
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L7
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 8(%rax)
.L7:
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-24(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 16(%rax)
	cmpq	$0, -8(%rbp)
	je	.L8
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	cmpq	%rax, -16(%rbp)
	jne	.L9
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 24(%rax)
	jmp	.L8
.L9:
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 16(%rax)
.L8:
	movq	-24(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	leftRotate, .-leftRotate
	.globl	rightRotate
	.type	rightRotate, @function
rightRotate:
.LFB8:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	24(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 16(%rax)
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L12
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 8(%rax)
.L12:
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-24(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 24(%rax)
	cmpq	$0, -8(%rbp)
	je	.L13
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	cmpq	%rax, -16(%rbp)
	jne	.L14
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 24(%rax)
	jmp	.L13
.L14:
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 16(%rax)
.L13:
	movq	-24(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	rightRotate, .-rightRotate
	.globl	checkNode
	.type	checkNode, @function
checkNode:
.LFB9:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -40(%rbp)
	cmpq	$0, -40(%rbp)
	je	.L42
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	je	.L42
	movq	-40(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-40(%rbp), %rax
	movl	32(%rax), %eax
	testl	%eax, %eax
	je	.L43
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	movl	32(%rax), %eax
	testl	%eax, %eax
	je	.L43
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -16(%rbp)
	cmpq	$0, -16(%rbp)
	jne	.L22
	movq	-24(%rbp), %rax
	movl	$0, 32(%rax)
	jmp	.L16
.L22:
	movq	-16(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L23
	movq	-16(%rbp), %rax
	movq	24(%rax), %rax
	movl	32(%rax), %eax
	cmpl	$1, %eax
	jne	.L23
	movq	-16(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L23
	movq	-16(%rbp), %rax
	movq	16(%rax), %rax
	movl	32(%rax), %eax
	cmpl	$1, %eax
	jne	.L23
	movq	-16(%rbp), %rax
	movq	24(%rax), %rax
	movl	$0, 32(%rax)
	movq	-16(%rbp), %rax
	movq	16(%rax), %rax
	movl	$0, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$1, 32(%rax)
	jmp	.L16
.L23:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-16(%rbp), %rax
	movq	24(%rax), %rax
	cmpq	%rax, -24(%rbp)
	jne	.L24
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	cmpq	%rax, -40(%rbp)
	jne	.L25
	movq	-24(%rbp), %rax
	movq	16(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 24(%rax)
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L26
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 8(%rax)
.L26:
	movq	-24(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 16(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 8(%rax)
	cmpq	$0, -8(%rbp)
	je	.L27
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L28
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	cmpq	%rax, -16(%rbp)
	jne	.L28
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 16(%rax)
	jmp	.L27
.L28:
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 24(%rax)
.L27:
	movq	-24(%rbp), %rax
	movl	$0, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$1, 32(%rax)
	jmp	.L16
.L25:
	movq	-32(%rbp), %rax
	movq	24(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 16(%rax)
	movq	-32(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L30
	movq	-32(%rbp), %rax
	movq	24(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
.L30:
	movq	-32(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 24(%rax)
	movq	-24(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-32(%rbp), %rax
	movq	16(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 24(%rax)
	movq	-32(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L31
	movq	-32(%rbp), %rax
	movq	16(%rax), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 8(%rax)
.L31:
	movq	-32(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 16(%rax)
	movq	-16(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-32(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 8(%rax)
	cmpq	$0, -8(%rbp)
	je	.L32
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L33
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	cmpq	%rax, -16(%rbp)
	jne	.L33
	movq	-8(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, 16(%rax)
	jmp	.L32
.L33:
	movq	-8(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, 24(%rax)
.L32:
	movq	-32(%rbp), %rax
	movl	$0, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$1, 32(%rax)
	jmp	.L16
.L24:
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	cmpq	%rax, -40(%rbp)
	jne	.L34
	movq	-24(%rbp), %rax
	movq	24(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 16(%rax)
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L35
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 8(%rax)
.L35:
	movq	-24(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 24(%rax)
	movq	-16(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 8(%rax)
	cmpq	$0, -8(%rbp)
	je	.L36
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L37
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	cmpq	%rax, -16(%rbp)
	jne	.L37
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 16(%rax)
	jmp	.L36
.L37:
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 24(%rax)
.L36:
	movq	-24(%rbp), %rax
	movl	$0, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$1, 32(%rax)
	jmp	.L16
.L34:
	movq	-32(%rbp), %rax
	movq	16(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, 24(%rax)
	movq	-32(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L38
	movq	-32(%rbp), %rax
	movq	16(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
.L38:
	movq	-32(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 16(%rax)
	movq	-24(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-32(%rbp), %rax
	movq	24(%rax), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, 16(%rax)
	movq	-32(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L39
	movq	-32(%rbp), %rax
	movq	24(%rax), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 8(%rax)
.L39:
	movq	-32(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 24(%rax)
	movq	-16(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-32(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 8(%rax)
	cmpq	$0, -8(%rbp)
	je	.L40
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L41
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	cmpq	%rax, -16(%rbp)
	jne	.L41
	movq	-8(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, 16(%rax)
	jmp	.L40
.L41:
	movq	-8(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, 24(%rax)
.L40:
	movq	-32(%rbp), %rax
	movl	$0, 32(%rax)
	movq	-16(%rbp), %rax
	movl	$1, 32(%rax)
	jmp	.L16
.L42:
	nop
	jmp	.L16
.L43:
	nop
.L16:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	checkNode, .-checkNode
	.globl	insertNode
	.type	insertNode, @function
insertNode:
.LFB10:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -24(%rbp)
	jmp	.L45
.L50:
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -36(%rbp)
	jge	.L46
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L47
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, -24(%rbp)
	jmp	.L45
.L47:
	movq	-24(%rbp), %rdx
	movl	-36(%rbp), %eax
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	newNode
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
	jmp	.L48
.L46:
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L49
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -24(%rbp)
	jmp	.L45
.L49:
	movq	-24(%rbp), %rdx
	movl	-36(%rbp), %eax
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	newNode
	movq	%rax, -16(%rbp)
	movq	-24(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 24(%rax)
	movq	-16(%rbp), %rax
	movq	%rax, -24(%rbp)
	jmp	.L48
.L45:
	cmpq	$0, -24(%rbp)
	jne	.L50
.L48:
	jmp	.L51
.L54:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	checkNode
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L52
	movq	-48(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, (%rax)
	jmp	.L53
.L52:
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -24(%rbp)
	movq	-48(%rbp), %rax
	movq	(%rax), %rax
	cmpq	%rax, -24(%rbp)
	jne	.L51
	movq	-24(%rbp), %rax
	movl	$0, 32(%rax)
.L51:
	movq	-48(%rbp), %rax
	movq	(%rax), %rax
	cmpq	%rax, -24(%rbp)
	jne	.L54
.L53:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	insertNode, .-insertNode
	.section	.rodata
.LC0:
	.string	"\nroot - %d - %d\n"
	.text
	.globl	checkForCase2
	.type	checkForCase2, @function
checkForCase2:
.LFB11:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%rdi, -56(%rbp)
	movl	%esi, -60(%rbp)
	movl	%edx, -64(%rbp)
	movq	%rcx, -72(%rbp)
	movq	-72(%rbp), %rax
	movq	(%rax), %rax
	cmpq	%rax, -56(%rbp)
	jne	.L56
	movq	-72(%rbp), %rax
	movq	(%rax), %rax
	movl	$0, 32(%rax)
	jmp	.L55
.L56:
	cmpl	$0, -60(%rbp)
	jne	.L58
	movq	-56(%rbp), %rax
	movl	32(%rax), %eax
	cmpl	$1, %eax
	jne	.L58
	cmpl	$0, -64(%rbp)
	jne	.L59
	movq	-56(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L61
	movq	-56(%rbp), %rax
	movq	24(%rax), %rax
	movl	$1, 32(%rax)
	jmp	.L61
.L59:
	movq	-56(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L61
	movq	-56(%rbp), %rax
	movq	16(%rax), %rax
	movl	$1, 32(%rax)
.L61:
	movq	-56(%rbp), %rax
	movl	$0, 32(%rax)
	jmp	.L55
.L58:
	movq	-56(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$0, -36(%rbp)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	cmpq	%rax, -56(%rbp)
	jne	.L62
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, -16(%rbp)
	movl	$1, -36(%rbp)
	jmp	.L63
.L62:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -16(%rbp)
.L63:
	movq	-16(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L64
	movq	-16(%rbp), %rax
	movq	24(%rax), %rax
	movl	32(%rax), %eax
	cmpl	$1, %eax
	je	.L65
.L64:
	movq	-16(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L66
	movq	-16(%rbp), %rax
	movq	16(%rax), %rax
	movl	32(%rax), %eax
	cmpl	$1, %eax
	jne	.L66
.L65:
	movq	-16(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L67
	movq	-16(%rbp), %rax
	movq	24(%rax), %rax
	movl	32(%rax), %eax
	cmpl	$1, %eax
	jne	.L67
	cmpl	$1, -36(%rbp)
	jne	.L68
	movq	-8(%rbp), %rax
	movl	32(%rax), %eax
	movl	%eax, -28(%rbp)
	movq	-16(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, %rdi
	call	leftRotate
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	rightRotate
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L69
	movq	-72(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, (%rax)
.L69:
	movq	-8(%rbp), %rax
	movl	-28(%rbp), %edx
	movl	%edx, 32(%rax)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movl	$0, 32(%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movl	$0, 32(%rax)
	cmpl	$0, -60(%rbp)
	je	.L91
	movq	-56(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L71
	movq	-56(%rbp), %rax
	movq	16(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	24(%rdx), %rdx
	movq	%rdx, 8(%rax)
.L71:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	-56(%rbp), %rdx
	movq	16(%rdx), %rdx
	movq	%rdx, 24(%rax)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	jmp	.L91
.L68:
	movq	-8(%rbp), %rax
	movl	32(%rax), %eax
	movl	%eax, -32(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	leftRotate
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L73
	movq	-72(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, (%rax)
.L73:
	movq	-8(%rbp), %rax
	movl	-32(%rbp), %edx
	movl	%edx, 32(%rax)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movl	$0, 32(%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movl	$0, 32(%rax)
	cmpl	$0, -60(%rbp)
	je	.L91
	movq	-56(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L74
	movq	-56(%rbp), %rax
	movq	24(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	16(%rdx), %rdx
	movq	%rdx, 8(%rax)
.L74:
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	-56(%rbp), %rdx
	movq	16(%rdx), %rdx
	movq	%rdx, 16(%rax)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	jmp	.L91
.L67:
	cmpl	$0, -36(%rbp)
	jne	.L76
	movq	-8(%rbp), %rax
	movl	32(%rax), %eax
	movl	%eax, -20(%rbp)
	movq	-16(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdi
	call	rightRotate
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	leftRotate
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L77
	movq	-72(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, (%rax)
.L77:
	movq	-8(%rbp), %rax
	movl	-20(%rbp), %edx
	movl	%edx, 32(%rax)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movl	$0, 32(%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movl	$0, 32(%rax)
	cmpl	$0, -60(%rbp)
	je	.L92
	movq	-56(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L79
	movq	-56(%rbp), %rax
	movq	24(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	16(%rdx), %rdx
	movq	%rdx, 8(%rax)
.L79:
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	-56(%rbp), %rdx
	movq	24(%rdx), %rdx
	movq	%rdx, 16(%rax)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	jmp	.L92
.L76:
	movq	-8(%rbp), %rax
	movl	32(%rax), %eax
	movl	%eax, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	rightRotate
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L80
	movq	-72(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, (%rax)
.L80:
	movq	-8(%rbp), %rax
	movl	-24(%rbp), %edx
	movl	%edx, 32(%rax)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movl	$0, 32(%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movl	$0, 32(%rax)
	cmpl	$0, -60(%rbp)
	je	.L92
	movq	-56(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L81
	movq	-56(%rbp), %rax
	movq	16(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	24(%rdx), %rdx
	movq	%rdx, 8(%rax)
.L81:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	-56(%rbp), %rdx
	movq	16(%rdx), %rdx
	movq	%rdx, 24(%rax)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	jmp	.L92
.L91:
	nop
	jmp	.L92
.L66:
	movq	-16(%rbp), %rax
	movl	32(%rax), %eax
	testl	%eax, %eax
	jne	.L82
	movq	-16(%rbp), %rax
	movl	$1, 32(%rax)
	cmpl	$0, -60(%rbp)
	je	.L83
	cmpl	$0, -36(%rbp)
	je	.L84
	movq	-56(%rbp), %rax
	movq	8(%rax), %rax
	movq	-56(%rbp), %rdx
	movq	16(%rdx), %rdx
	movq	%rdx, 24(%rax)
	movq	-56(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L83
	movq	-56(%rbp), %rax
	movq	16(%rax), %rax
	movq	-56(%rbp), %rdx
	movq	8(%rdx), %rdx
	movq	%rdx, 8(%rax)
	jmp	.L83
.L84:
	movq	-56(%rbp), %rax
	movq	8(%rax), %rax
	movq	-56(%rbp), %rdx
	movq	24(%rdx), %rdx
	movq	%rdx, 16(%rax)
	movq	-56(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L83
	movq	-56(%rbp), %rax
	movq	24(%rax), %rax
	movq	-56(%rbp), %rdx
	movq	8(%rdx), %rdx
	movq	%rdx, 8(%rax)
.L83:
	movq	-72(%rbp), %rcx
	movl	-36(%rbp), %edx
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	checkForCase2
	jmp	.L55
.L82:
	cmpl	$0, -36(%rbp)
	je	.L86
	movq	-56(%rbp), %rax
	movq	8(%rax), %rax
	movq	-56(%rbp), %rdx
	movq	16(%rdx), %rdx
	movq	%rdx, 24(%rax)
	movq	-56(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L87
	movq	-56(%rbp), %rax
	movq	16(%rax), %rax
	movq	-56(%rbp), %rdx
	movq	8(%rdx), %rdx
	movq	%rdx, 8(%rax)
.L87:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	rightRotate
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L88
	movq	-72(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, (%rax)
.L88:
	movq	-8(%rbp), %rax
	movl	$0, 32(%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movl	$1, 32(%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	-72(%rbp), %rdx
	movq	%rdx, %rcx
	movl	$1, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	checkForCase2
	jmp	.L55
.L86:
	movq	-56(%rbp), %rax
	movq	8(%rax), %rax
	movq	-56(%rbp), %rdx
	movq	24(%rdx), %rdx
	movq	%rdx, 16(%rax)
	movq	-56(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L89
	movq	-56(%rbp), %rax
	movq	24(%rax), %rax
	movq	-56(%rbp), %rdx
	movq	8(%rdx), %rdx
	movq	%rdx, 8(%rax)
.L89:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	leftRotate
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L90
	movq	-72(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, (%rax)
.L90:
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-8(%rbp), %rax
	movl	$0, 32(%rax)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movl	$1, 32(%rax)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	-72(%rbp), %rdx
	movq	%rdx, %rcx
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	checkForCase2
	jmp	.L55
.L92:
	nop
.L55:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	checkForCase2, .-checkForCase2
	.section	.rodata
.LC1:
	.string	"Node Not Found!!!"
	.text
	.globl	deleteNode
	.type	deleteNode, @function
deleteNode:
.LFB12:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
.L101:
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -20(%rbp)
	je	.L118
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jle	.L96
	movq	-16(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L97
	movq	-16(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -16(%rbp)
	jmp	.L101
.L97:
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L93
.L96:
	movq	-16(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L100
	movq	-16(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, -16(%rbp)
	jmp	.L101
.L100:
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L93
.L118:
	nop
	movq	-16(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L102
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, -8(%rbp)
	jmp	.L103
.L104:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -8(%rbp)
.L103:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	jne	.L104
	jmp	.L105
.L102:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L105
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, -8(%rbp)
	jmp	.L106
.L107:
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, -8(%rbp)
.L106:
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	jne	.L107
.L105:
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	cmpq	%rax, -8(%rbp)
	jne	.L108
	movq	-32(%rbp), %rax
	movq	$0, (%rax)
	jmp	.L93
.L108:
	movq	-8(%rbp), %rax
	movl	(%rax), %edx
	movq	-16(%rbp), %rax
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	-20(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	32(%rax), %eax
	cmpl	$1, %eax
	je	.L109
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L110
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movl	32(%rax), %eax
	cmpl	$1, %eax
	je	.L109
.L110:
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	je	.L111
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movl	32(%rax), %eax
	cmpl	$1, %eax
	jne	.L111
.L109:
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	jne	.L112
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	testq	%rax, %rax
	jne	.L112
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	16(%rax), %rax
	cmpq	%rax, -8(%rbp)
	jne	.L113
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	$0, 16(%rax)
	jmp	.L115
.L113:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	$0, 24(%rax)
	jmp	.L115
.L112:
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L116
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	16(%rdx), %rdx
	movq	%rdx, 24(%rax)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	8(%rdx), %rdx
	movq	%rdx, 8(%rax)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movl	$1, 32(%rax)
	jmp	.L115
.L116:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	24(%rdx), %rdx
	movq	%rdx, 16(%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	8(%rdx), %rdx
	movq	%rdx, 8(%rax)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movl	$1, 32(%rax)
.L115:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	jmp	.L93
.L111:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	24(%rax), %rax
	cmpq	%rax, -8(%rbp)
	sete	%al
	movzbl	%al, %edx
	movq	-32(%rbp), %rcx
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	checkForCase2
.L93:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	deleteNode, .-deleteNode
	.section	.rodata
.LC2:
	.string	"%d c-%d "
	.text
	.globl	printInorder
	.type	printInorder, @function
printInorder:
.LFB13:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L121
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdi
	call	printInorder
	movq	-8(%rbp), %rax
	movl	32(%rax), %edx
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, %rdi
	call	printInorder
.L121:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	printInorder, .-printInorder
	.section	.rodata
.LC3:
	.string	"%d "
	.text
	.globl	checkBlack
	.type	checkBlack, @function
checkBlack:
.LFB14:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L123
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L122
.L123:
	movq	-8(%rbp), %rax
	movl	32(%rax), %eax
	testl	%eax, %eax
	jne	.L125
	addl	$1, -12(%rbp)
.L125:
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movl	-12(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	checkBlack
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movl	-12(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	checkBlack
.L122:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	checkBlack, .-checkBlack
	.section	.rodata
	.align 8
.LC4:
	.string	"1 - Input\n2 - Delete\n3 - Inorder Traversel\n0 - Quit\n\nPlease Enter the Choice - "
.LC5:
	.string	"%d"
	.align 8
.LC6:
	.string	"\n\nPlease Enter A Value to insert - "
	.align 8
.LC7:
	.string	"\nSuccessfully Inserted %d in the tree\n\n"
	.align 8
.LC8:
	.string	"\n\nPlease Enter A Value to Delete - "
.LC9:
	.string	"\nInorder Traversel - "
.LC10:
	.string	"\n"
.LC11:
	.string	"Root - %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB15:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	$0, -16(%rbp)
	movl	$1, -20(%rbp)
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	jmp	.L127
.L135:
	movl	-20(%rbp), %eax
	cmpl	$2, %eax
	je	.L129
	cmpl	$3, %eax
	je	.L130
	cmpl	$1, %eax
	jne	.L138
	leaq	.LC6(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movq	-16(%rbp), %rax
	testq	%rax, %rax
	jne	.L132
	movl	-24(%rbp), %eax
	movl	$0, %esi
	movl	%eax, %edi
	call	newNode
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	$0, 32(%rax)
	jmp	.L133
.L132:
	movl	-24(%rbp), %eax
	leaq	-16(%rbp), %rdx
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	insertNode
.L133:
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC7(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L134
.L129:
	leaq	.LC8(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-24(%rbp), %eax
	leaq	-16(%rbp), %rdx
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	deleteNode
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC7(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L134
.L130:
	leaq	.LC9(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	printInorder
	leaq	.LC10(%rip), %rdi
	call	puts@PLT
	jmp	.L134
.L138:
	movq	-16(%rbp), %rax
	testq	%rax, %rax
	je	.L134
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC11(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L134:
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
.L127:
	movl	-20(%rbp), %eax
	testl	%eax, %eax
	jne	.L135
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L137
	call	__stack_chk_fail@PLT
.L137:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
