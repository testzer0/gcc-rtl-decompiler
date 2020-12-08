	.file	"test9.c"
	.intel_syntax noprefix
	.text
	.comm	tail,8,8
	.comm	head,8,8
	.section	.rodata
.LC0:
	.string	"brk: %p\n"
.LC1:
	.string	"head->"
.LC2:
	.string	"[%d:%ld:%d]->"
.LC3:
	.string	"test9.c"
	.align 8
.LC4:
	.string	"(char*)cur >= (char*)head && (char*)cur + cur->size <= (char*)sbrk(0)"
.LC5:
	.string	"cur->next->prev == cur"
	.align 8
.LC6:
	.string	"(char*)cur + cur->size == (char*)cur->next"
.LC7:
	.string	"NULL"
	.text
	.globl	dump_heap
	.type	dump_heap, @function
dump_heap:
.LFB5:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 24
	.cfi_offset 3, -24
	mov	edi, 0
	call	sbrk@PLT
	mov	rsi, rax
	lea	rdi, .LC0[rip]
	mov	eax, 0
	call	printf@PLT
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	printf@PLT
	mov	rax, QWORD PTR head[rip]
	mov	QWORD PTR -24[rbp], rax
	jmp	.L2
.L7:
	mov	rax, QWORD PTR -24[rbp]
	mov	edx, DWORD PTR 16[rax]
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR head[rip]
	sub	rax, rcx
	mov	rsi, rax
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 20[rax]
	mov	ecx, edx
	mov	rdx, rsi
	mov	esi, eax
	lea	rdi, .LC2[rip]
	mov	eax, 0
	call	printf@PLT
	mov	rax, QWORD PTR stdout[rip]
	mov	rdi, rax
	call	fflush@PLT
	mov	rax, QWORD PTR head[rip]
	cmp	QWORD PTR -24[rbp], rax
	jb	.L3
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 16[rax]
	movsx	rdx, eax
	mov	rax, QWORD PTR -24[rbp]
	lea	rbx, [rdx+rax]
	mov	edi, 0
	call	sbrk@PLT
	cmp	rbx, rax
	jbe	.L8
.L3:
	lea	rcx, __PRETTY_FUNCTION__.3572[rip]
	mov	edx, 26
	lea	rsi, .LC3[rip]
	lea	rdi, .LC4[rip]
	call	__assert_fail@PLT
.L8:
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	je	.L5
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rax, QWORD PTR 8[rax]
	cmp	QWORD PTR -24[rbp], rax
	je	.L6
	lea	rcx, __PRETTY_FUNCTION__.3572[rip]
	mov	edx, 28
	lea	rsi, .LC3[rip]
	lea	rdi, .LC5[rip]
	call	__assert_fail@PLT
.L6:
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 16[rax]
	movsx	rdx, eax
	mov	rax, QWORD PTR -24[rbp]
	add	rdx, rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR [rax]
	cmp	rdx, rax
	je	.L5
	lea	rcx, __PRETTY_FUNCTION__.3572[rip]
	mov	edx, 29
	lea	rsi, .LC3[rip]
	lea	rdi, .LC6[rip]
	call	__assert_fail@PLT
.L5:
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR [rax]
	mov	QWORD PTR -24[rbp], rax
.L2:
	cmp	QWORD PTR -24[rbp], 0
	jne	.L7
	lea	rdi, .LC7[rip]
	call	puts@PLT
	nop
	add	rsp, 24
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	dump_heap, .-dump_heap
	.globl	my_malloc
	.type	my_malloc, @function
my_malloc:
.LFB6:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	DWORD PTR -20[rbp], edi
	mov	QWORD PTR -16[rbp], 0
	mov	QWORD PTR -8[rbp], 0
	mov	rax, QWORD PTR head[rip]
	test	rax, rax
	jne	.L10
	mov	eax, DWORD PTR -20[rbp]
	cdqe
	add	rax, 24
	mov	rdi, rax
	call	sbrk@PLT
	mov	QWORD PTR head[rip], rax
	mov	eax, DWORD PTR -20[rbp]
	lea	edx, 24[rax]
	mov	rax, QWORD PTR head[rip]
	mov	DWORD PTR 16[rax], edx
	mov	rax, QWORD PTR head[rip]
	mov	DWORD PTR 20[rax], 1
	mov	rax, QWORD PTR head[rip]
	mov	QWORD PTR [rax], 0
	mov	rax, QWORD PTR head[rip]
	mov	QWORD PTR 8[rax], 0
	mov	rax, QWORD PTR head[rip]
	mov	QWORD PTR tail[rip], rax
	mov	rax, QWORD PTR head[rip]
	mov	QWORD PTR -16[rbp], rax
	mov	rax, QWORD PTR -16[rbp]
	add	rax, 24
	jmp	.L11
.L10:
	mov	eax, DWORD PTR -20[rbp]
	mov	edi, eax
	call	fit
	mov	QWORD PTR -16[rbp], rax
	cmp	QWORD PTR -16[rbp], 0
	jne	.L12
	mov	eax, DWORD PTR -20[rbp]
	mov	edi, eax
	call	heap
	mov	QWORD PTR -16[rbp], rax
	jmp	.L13
.L12:
	mov	rax, QWORD PTR -16[rbp]
	mov	eax, DWORD PTR 16[rax]
	cdqe
	mov	edx, DWORD PTR -20[rbp]
	movsx	rdx, edx
	add	rdx, 48
	cmp	rax, rdx
	jbe	.L14
	mov	eax, DWORD PTR -20[rbp]
	cdqe
	lea	rdx, 24[rax]
	mov	rax, QWORD PTR -16[rbp]
	add	rax, rdx
	mov	QWORD PTR -8[rbp], rax
	mov	rax, QWORD PTR -16[rbp]
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	QWORD PTR [rax], rdx
	mov	rax, QWORD PTR -8[rbp]
	mov	rdx, QWORD PTR -16[rbp]
	mov	QWORD PTR 8[rax], rdx
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rdx, QWORD PTR -8[rbp]
	mov	QWORD PTR 8[rax], rdx
	mov	rax, QWORD PTR -8[rbp]
	mov	DWORD PTR 20[rax], 0
	mov	rax, QWORD PTR -16[rbp]
	mov	eax, DWORD PTR 16[rax]
	mov	edx, eax
	mov	eax, DWORD PTR -20[rbp]
	sub	edx, eax
	mov	eax, edx
	sub	eax, 24
	mov	edx, eax
	mov	rax, QWORD PTR -8[rbp]
	mov	DWORD PTR 16[rax], edx
	mov	rax, QWORD PTR -16[rbp]
	mov	DWORD PTR 20[rax], 1
	mov	eax, DWORD PTR -20[rbp]
	add	eax, 24
	mov	edx, eax
	mov	rax, QWORD PTR -16[rbp]
	mov	DWORD PTR 16[rax], edx
	mov	rax, QWORD PTR -16[rbp]
	mov	rdx, QWORD PTR -8[rbp]
	mov	QWORD PTR [rax], rdx
	mov	rax, QWORD PTR -16[rbp]
	add	rax, 24
	jmp	.L11
.L14:
	mov	rax, QWORD PTR -16[rbp]
	mov	DWORD PTR 20[rax], 1
.L13:
	mov	rax, QWORD PTR -16[rbp]
	add	rax, 24
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	my_malloc, .-my_malloc
	.globl	my_free
	.type	my_free, @function
my_free:
.LFB7:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	cmp	QWORD PTR -24[rbp], 0
	je	.L23
	mov	rax, QWORD PTR -24[rbp]
	sub	rax, 24
	mov	QWORD PTR -8[rbp], rax
	mov	rax, QWORD PTR -8[rbp]
	mov	DWORD PTR 20[rax], 0
	mov	rax, QWORD PTR tail[rip]
	cmp	QWORD PTR -8[rbp], rax
	jne	.L18
	mov	rax, QWORD PTR head[rip]
	cmp	QWORD PTR -8[rbp], rax
	je	.L18
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR 8[rax]
	mov	QWORD PTR tail[rip], rax
	mov	rax, QWORD PTR tail[rip]
	mov	QWORD PTR [rax], 0
	mov	rax, QWORD PTR -8[rbp]
	mov	eax, DWORD PTR 16[rax]
	neg	eax
	cdqe
	mov	rdi, rax
	call	sbrk@PLT
	mov	rax, QWORD PTR tail[rip]
	mov	eax, DWORD PTR 20[rax]
	test	eax, eax
	jne	.L24
	mov	rax, QWORD PTR tail[rip]
	add	rax, 24
	mov	rdi, rax
	call	my_free
	jmp	.L24
.L18:
	mov	rax, QWORD PTR tail[rip]
	cmp	QWORD PTR -8[rbp], rax
	jne	.L20
	mov	rax, QWORD PTR head[rip]
	cmp	QWORD PTR -8[rbp], rax
	jne	.L20
	mov	QWORD PTR tail[rip], 0
	mov	rax, QWORD PTR tail[rip]
	mov	QWORD PTR head[rip], rax
	mov	rax, QWORD PTR -8[rbp]
	mov	eax, DWORD PTR 16[rax]
	neg	eax
	cdqe
	mov	rdi, rax
	call	sbrk@PLT
	jmp	.L15
.L20:
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	mov	eax, DWORD PTR 20[rax]
	test	eax, eax
	jne	.L21
	mov	rax, QWORD PTR -8[rbp]
	mov	edx, DWORD PTR 16[rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	mov	eax, DWORD PTR 16[rax]
	add	edx, eax
	mov	rax, QWORD PTR -8[rbp]
	mov	DWORD PTR 16[rax], edx
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	QWORD PTR [rax], rdx
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	jne	.L22
	mov	rax, QWORD PTR -8[rbp]
	mov	QWORD PTR tail[rip], rax
	jmp	.L21
.L22:
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rdx, QWORD PTR -8[rbp]
	mov	QWORD PTR 8[rax], rdx
.L21:
	mov	rax, QWORD PTR head[rip]
	cmp	QWORD PTR -8[rbp], rax
	je	.L15
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR 8[rax]
	mov	eax, DWORD PTR 20[rax]
	test	eax, eax
	jne	.L15
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR 8[rax]
	mov	ecx, DWORD PTR 16[rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	edx, DWORD PTR 16[rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR 8[rax]
	add	edx, ecx
	mov	DWORD PTR 16[rax], edx
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR 8[rax]
	mov	rdx, QWORD PTR -8[rbp]
	mov	rdx, QWORD PTR [rdx]
	mov	QWORD PTR [rax], rdx
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rdx, QWORD PTR -8[rbp]
	mov	rdx, QWORD PTR 8[rdx]
	mov	QWORD PTR 8[rax], rdx
	jmp	.L15
.L23:
	nop
	jmp	.L15
.L24:
	nop
.L15:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	my_free, .-my_free
	.globl	heap
	.type	heap, @function
heap:
.LFB8:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	DWORD PTR -20[rbp], edi
	mov	eax, DWORD PTR -20[rbp]
	cdqe
	add	rax, 24
	mov	rdi, rax
	call	sbrk@PLT
	mov	QWORD PTR -8[rbp], rax
	mov	rax, QWORD PTR tail[rip]
	mov	rdx, QWORD PTR -8[rbp]
	mov	QWORD PTR [rax], rdx
	mov	eax, DWORD PTR -20[rbp]
	add	eax, 24
	mov	edx, eax
	mov	rax, QWORD PTR -8[rbp]
	mov	DWORD PTR 16[rax], edx
	mov	rax, QWORD PTR -8[rbp]
	mov	DWORD PTR 20[rax], 1
	mov	rax, QWORD PTR -8[rbp]
	mov	QWORD PTR [rax], 0
	mov	rdx, QWORD PTR tail[rip]
	mov	rax, QWORD PTR -8[rbp]
	mov	QWORD PTR 8[rax], rdx
	mov	rax, QWORD PTR -8[rbp]
	mov	QWORD PTR tail[rip], rax
	mov	rax, QWORD PTR -8[rbp]
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	heap, .-heap
	.globl	fit
	.type	fit, @function
fit:
.LFB9:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	DWORD PTR -20[rbp], edi
	mov	QWORD PTR -16[rbp], 0
	mov	rax, QWORD PTR head[rip]
	mov	QWORD PTR -8[rbp], rax
	jmp	.L28
.L34:
	mov	rax, QWORD PTR -8[rbp]
	mov	eax, DWORD PTR 20[rax]
	test	eax, eax
	jne	.L29
	mov	rax, QWORD PTR -8[rbp]
	mov	eax, DWORD PTR 16[rax]
	cdqe
	mov	edx, DWORD PTR -20[rbp]
	movsx	rdx, edx
	add	rdx, 24
	cmp	rax, rdx
	jb	.L30
	cmp	QWORD PTR -16[rbp], 0
	je	.L31
	mov	rax, QWORD PTR -8[rbp]
	mov	edx, DWORD PTR 16[rax]
	mov	rax, QWORD PTR -16[rbp]
	mov	eax, DWORD PTR 16[rax]
	cmp	edx, eax
	jge	.L30
.L31:
	mov	rax, QWORD PTR -8[rbp]
	mov	QWORD PTR -16[rbp], rax
	mov	rax, QWORD PTR -16[rbp]
	mov	eax, DWORD PTR 16[rax]
	cdqe
	mov	edx, DWORD PTR -20[rbp]
	movsx	rdx, edx
	add	rdx, 24
	cmp	rax, rdx
	jne	.L30
	mov	rax, QWORD PTR -16[rbp]
	mov	DWORD PTR 20[rax], 1
	mov	rax, QWORD PTR -16[rbp]
	jmp	.L32
.L30:
	cmp	QWORD PTR -16[rbp], 0
	je	.L29
	mov	rax, QWORD PTR -16[rbp]
	mov	eax, DWORD PTR 16[rax]
	cdqe
	mov	edx, DWORD PTR -20[rbp]
	movsx	rdx, edx
	add	rdx, 24
	cmp	rax, rdx
	je	.L35
.L29:
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	mov	QWORD PTR -8[rbp], rax
.L28:
	cmp	QWORD PTR -8[rbp], 0
	jne	.L34
	jmp	.L33
.L35:
	nop
.L33:
	mov	rax, QWORD PTR -16[rbp]
.L32:
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	fit, .-fit
	.section	.rodata
	.align 8
	.type	__PRETTY_FUNCTION__.3572, @object
	.size	__PRETTY_FUNCTION__.3572, 10
__PRETTY_FUNCTION__.3572:
	.string	"dump_heap"
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
