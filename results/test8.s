	.file	"test8.c"
	.intel_syntax noprefix
	.text
	.comm	head,8,8
	.comm	tail,8,8
	.section	.rodata
.LC0:
	.string	"\nEnter (x): "
.LC1:
	.string	"%d"
.LC2:
	.string	"\nInserted data (%d)\n"
	.align 8
.LC3:
	.string	"\nNo data (%d)\nInserted to last\n"
	.text
	.globl	insertBefore
	.type	insertBefore, @function
insertBefore:
.LFB5:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 48
	mov	QWORD PTR -40[rbp], rdi
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	lea	rdi, .LC0[rip]
	mov	eax, 0
	call	printf@PLT
	lea	rax, -28[rbp]
	mov	rsi, rax
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	__isoc99_scanf@PLT
	mov	rax, QWORD PTR head[rip]
	mov	edx, DWORD PTR [rax]
	mov	eax, DWORD PTR -28[rbp]
	cmp	edx, eax
	jne	.L2
	mov	rax, QWORD PTR head[rip]
	mov	rdx, QWORD PTR -40[rbp]
	mov	QWORD PTR 8[rax], rdx
	mov	rdx, QWORD PTR head[rip]
	mov	rax, QWORD PTR -40[rbp]
	mov	QWORD PTR 16[rax], rdx
	mov	rax, QWORD PTR -40[rbp]
	mov	QWORD PTR head[rip], rax
	jmp	.L1
.L2:
	mov	rax, QWORD PTR head[rip]
	mov	QWORD PTR -24[rbp], rax
	jmp	.L4
.L6:
	mov	rax, QWORD PTR -24[rbp]
	mov	edx, DWORD PTR [rax]
	mov	eax, DWORD PTR -28[rbp]
	cmp	edx, eax
	jne	.L5
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR 8[rax]
	mov	QWORD PTR -16[rbp], rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, QWORD PTR -40[rbp]
	mov	QWORD PTR 8[rax], rdx
	mov	rax, QWORD PTR -40[rbp]
	mov	rdx, QWORD PTR -24[rbp]
	mov	QWORD PTR 16[rax], rdx
	mov	rax, QWORD PTR -40[rbp]
	mov	rdx, QWORD PTR -16[rbp]
	mov	QWORD PTR 8[rax], rdx
	mov	rax, QWORD PTR -16[rbp]
	mov	rdx, QWORD PTR -40[rbp]
	mov	QWORD PTR 16[rax], rdx
	mov	rax, QWORD PTR -40[rbp]
	mov	eax, DWORD PTR [rax]
	mov	esi, eax
	lea	rdi, .LC2[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L1
.L5:
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	QWORD PTR -24[rbp], rax
.L4:
	cmp	QWORD PTR -24[rbp], 0
	jne	.L6
	mov	eax, DWORD PTR -28[rbp]
	mov	esi, eax
	lea	rdi, .LC3[rip]
	mov	eax, 0
	call	printf@PLT
	mov	rax, QWORD PTR tail[rip]
	mov	rdx, QWORD PTR -40[rbp]
	mov	QWORD PTR 16[rax], rdx
	mov	rdx, QWORD PTR tail[rip]
	mov	rax, QWORD PTR -40[rbp]
	mov	QWORD PTR 8[rax], rdx
	mov	rax, QWORD PTR -40[rbp]
	mov	QWORD PTR tail[rip], rax
.L1:
	mov	rax, QWORD PTR -8[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L8
	call	__stack_chk_fail@PLT
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	insertBefore, .-insertBefore
	.globl	insertAfter
	.type	insertAfter, @function
insertAfter:
.LFB6:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 48
	mov	QWORD PTR -40[rbp], rdi
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	lea	rdi, .LC0[rip]
	mov	eax, 0
	call	printf@PLT
	lea	rax, -28[rbp]
	mov	rsi, rax
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	__isoc99_scanf@PLT
	mov	rax, QWORD PTR head[rip]
	mov	QWORD PTR -24[rbp], rax
	jmp	.L10
.L13:
	mov	rax, QWORD PTR -24[rbp]
	mov	edx, DWORD PTR [rax]
	mov	eax, DWORD PTR -28[rbp]
	cmp	edx, eax
	jne	.L11
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	QWORD PTR -16[rbp], rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, QWORD PTR -40[rbp]
	mov	QWORD PTR 16[rax], rdx
	mov	rax, QWORD PTR -40[rbp]
	mov	rdx, QWORD PTR -24[rbp]
	mov	QWORD PTR 8[rax], rdx
	mov	rax, QWORD PTR -40[rbp]
	mov	rdx, QWORD PTR -16[rbp]
	mov	QWORD PTR 16[rax], rdx
	mov	rax, QWORD PTR -16[rbp]
	mov	rdx, QWORD PTR -40[rbp]
	mov	QWORD PTR 8[rax], rdx
	mov	rax, QWORD PTR -40[rbp]
	mov	eax, DWORD PTR [rax]
	mov	esi, eax
	lea	rdi, .LC2[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L9
.L11:
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	QWORD PTR -24[rbp], rax
.L10:
	mov	rax, QWORD PTR tail[rip]
	cmp	QWORD PTR -24[rbp], rax
	jne	.L13
	mov	eax, DWORD PTR -28[rbp]
	mov	esi, eax
	lea	rdi, .LC3[rip]
	mov	eax, 0
	call	printf@PLT
	mov	rax, QWORD PTR tail[rip]
	mov	rdx, QWORD PTR -40[rbp]
	mov	QWORD PTR 16[rax], rdx
	mov	rdx, QWORD PTR tail[rip]
	mov	rax, QWORD PTR -40[rbp]
	mov	QWORD PTR 8[rax], rdx
	mov	rax, QWORD PTR -40[rbp]
	mov	QWORD PTR tail[rip], rax
.L9:
	mov	rax, QWORD PTR -8[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L15
	call	__stack_chk_fail@PLT
.L15:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	insertAfter, .-insertAfter
	.section	.rodata
.LC4:
	.string	"\nEnter data: "
.LC5:
	.string	"\nCreated List."
	.align 8
.LC6:
	.string	"\n1. First\n2. Before (x)\n3. After (x)\n4. Last"
.LC7:
	.string	"\nWrong input!"
	.text
	.globl	insert
	.type	insert, @function
insert:
.LFB7:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	lea	rdi, .LC4[rip]
	mov	eax, 0
	call	printf@PLT
	lea	rax, -24[rbp]
	mov	rsi, rax
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	__isoc99_scanf@PLT
	mov	edi, 24
	call	malloc@PLT
	mov	QWORD PTR -16[rbp], rax
	mov	edx, DWORD PTR -24[rbp]
	mov	rax, QWORD PTR -16[rbp]
	mov	DWORD PTR [rax], edx
	mov	rax, QWORD PTR -16[rbp]
	mov	QWORD PTR 8[rax], 0
	mov	rax, QWORD PTR -16[rbp]
	mov	QWORD PTR 16[rax], 0
	mov	rax, QWORD PTR head[rip]
	test	rax, rax
	jne	.L17
	mov	rax, QWORD PTR -16[rbp]
	mov	QWORD PTR tail[rip], rax
	mov	rax, QWORD PTR tail[rip]
	mov	QWORD PTR head[rip], rax
	lea	rdi, .LC5[rip]
	call	puts@PLT
	jmp	.L27
.L17:
	lea	rdi, .LC6[rip]
	call	puts@PLT
	lea	rax, -20[rbp]
	mov	rsi, rax
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	__isoc99_scanf@PLT
	mov	eax, DWORD PTR -20[rbp]
	cmp	eax, 2
	je	.L20
	cmp	eax, 2
	jg	.L21
	cmp	eax, 1
	je	.L22
	jmp	.L19
.L21:
	cmp	eax, 3
	je	.L23
	cmp	eax, 4
	je	.L24
	jmp	.L19
.L22:
	mov	rax, QWORD PTR head[rip]
	mov	rdx, QWORD PTR -16[rbp]
	mov	QWORD PTR 8[rax], rdx
	mov	rdx, QWORD PTR head[rip]
	mov	rax, QWORD PTR -16[rbp]
	mov	QWORD PTR 16[rax], rdx
	mov	rax, QWORD PTR -16[rbp]
	mov	QWORD PTR head[rip], rax
	jmp	.L18
.L20:
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	insertBefore
	jmp	.L18
.L23:
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	insertAfter
	jmp	.L18
.L24:
	mov	rax, QWORD PTR tail[rip]
	mov	rdx, QWORD PTR -16[rbp]
	mov	QWORD PTR 16[rax], rdx
	mov	rdx, QWORD PTR tail[rip]
	mov	rax, QWORD PTR -16[rbp]
	mov	QWORD PTR 8[rax], rdx
	mov	rax, QWORD PTR -16[rbp]
	mov	QWORD PTR tail[rip], rax
	jmp	.L18
.L19:
	lea	rdi, .LC7[rip]
	mov	eax, 0
	call	printf@PLT
	nop
.L18:
.L27:
	nop
	mov	rax, QWORD PTR -8[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L26
	call	__stack_chk_fail@PLT
.L26:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	insert, .-insert
	.section	.rodata
.LC8:
	.string	"\nNo data to display!"
.LC9:
	.string	"\nList data: "
.LC10:
	.string	" %d"
	.text
	.globl	displayForward
	.type	displayForward, @function
displayForward:
.LFB8:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	rax, QWORD PTR head[rip]
	mov	QWORD PTR -8[rbp], rax
	mov	rax, QWORD PTR head[rip]
	test	rax, rax
	jne	.L29
	lea	rdi, .LC8[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L28
.L29:
	lea	rdi, .LC9[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L31
.L32:
	mov	rax, QWORD PTR -8[rbp]
	mov	eax, DWORD PTR [rax]
	mov	esi, eax
	lea	rdi, .LC10[rip]
	mov	eax, 0
	call	printf@PLT
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	QWORD PTR -8[rbp], rax
.L31:
	cmp	QWORD PTR -8[rbp], 0
	jne	.L32
.L28:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	displayForward, .-displayForward
	.section	.rodata
.LC11:
	.string	"\nList data(Backward): "
	.text
	.globl	displayBackward
	.type	displayBackward, @function
displayBackward:
.LFB9:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	rax, QWORD PTR tail[rip]
	mov	QWORD PTR -8[rbp], rax
	mov	rax, QWORD PTR tail[rip]
	test	rax, rax
	jne	.L34
	lea	rdi, .LC8[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L33
.L34:
	lea	rdi, .LC11[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L36
.L37:
	mov	rax, QWORD PTR -8[rbp]
	mov	eax, DWORD PTR [rax]
	mov	esi, eax
	lea	rdi, .LC10[rip]
	mov	eax, 0
	call	printf@PLT
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR 8[rax]
	mov	QWORD PTR -8[rbp], rax
.L36:
	cmp	QWORD PTR -8[rbp], 0
	jne	.L37
.L33:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	displayBackward, .-displayBackward
	.section	.rodata
	.align 8
.LC12:
	.string	"\n1. Forward(head -> tail)\n2. Backward(tail -> head)\n Choice: "
	.text
	.globl	display
	.type	display, @function
display:
.LFB10:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	lea	rdi, .LC12[rip]
	mov	eax, 0
	call	printf@PLT
	lea	rax, -12[rbp]
	mov	rsi, rax
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	__isoc99_scanf@PLT
	mov	eax, DWORD PTR -12[rbp]
	cmp	eax, 1
	je	.L40
	cmp	eax, 2
	je	.L41
	jmp	.L44
.L40:
	mov	eax, 0
	call	displayForward
	jmp	.L42
.L41:
	mov	eax, 0
	call	displayBackward
	jmp	.L42
.L44:
	lea	rdi, .LC7[rip]
	mov	eax, 0
	call	printf@PLT
	nop
.L42:
	nop
	mov	rax, QWORD PTR -8[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L43
	call	__stack_chk_fail@PLT
.L43:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	display, .-display
	.section	.rodata
.LC13:
	.string	"\nDeleted data (%d)\n"
	.text
	.globl	delete
	.type	delete, @function
delete:
.LFB11:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	lea	rdi, .LC0[rip]
	mov	eax, 0
	call	printf@PLT
	lea	rax, -20[rbp]
	mov	rsi, rax
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	__isoc99_scanf@PLT
	mov	rax, QWORD PTR head[rip]
	mov	edx, DWORD PTR [rax]
	mov	eax, DWORD PTR -20[rbp]
	cmp	edx, eax
	jne	.L46
	mov	rax, QWORD PTR head[rip]
	mov	rax, QWORD PTR 16[rax]
	mov	QWORD PTR 8[rax], 0
	mov	rax, QWORD PTR head[rip]
	mov	rax, QWORD PTR 16[rax]
	mov	QWORD PTR head[rip], rax
	mov	rax, QWORD PTR head[rip]
	mov	rdi, rax
	call	free@PLT
	mov	eax, DWORD PTR -20[rbp]
	mov	esi, eax
	lea	rdi, .LC13[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L45
.L46:
	mov	rax, QWORD PTR tail[rip]
	mov	edx, DWORD PTR [rax]
	mov	eax, DWORD PTR -20[rbp]
	cmp	edx, eax
	jne	.L48
	mov	rax, QWORD PTR tail[rip]
	mov	rax, QWORD PTR 8[rax]
	mov	QWORD PTR 16[rax], 0
	mov	rax, QWORD PTR tail[rip]
	mov	rax, QWORD PTR 8[rax]
	mov	QWORD PTR tail[rip], rax
	mov	rax, QWORD PTR tail[rip]
	mov	rdi, rax
	call	free@PLT
	mov	eax, DWORD PTR -20[rbp]
	mov	esi, eax
	lea	rdi, .LC13[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L45
.L48:
	mov	rax, QWORD PTR head[rip]
	mov	QWORD PTR -16[rbp], rax
	jmp	.L49
.L51:
	mov	rax, QWORD PTR -16[rbp]
	mov	edx, DWORD PTR [rax]
	mov	eax, DWORD PTR -20[rbp]
	cmp	edx, eax
	jne	.L50
	mov	rax, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR 8[rax]
	mov	rdx, QWORD PTR -16[rbp]
	mov	rdx, QWORD PTR 16[rdx]
	mov	QWORD PTR 16[rax], rdx
	mov	rax, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	rdx, QWORD PTR -16[rbp]
	mov	rdx, QWORD PTR 8[rdx]
	mov	QWORD PTR 8[rax], rdx
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	free@PLT
	mov	eax, DWORD PTR -20[rbp]
	mov	esi, eax
	lea	rdi, .LC13[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L45
.L50:
	mov	rax, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	QWORD PTR -16[rbp], rax
.L49:
	cmp	QWORD PTR -16[rbp], 0
	jne	.L51
.L45:
	mov	rax, QWORD PTR -8[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L53
	call	__stack_chk_fail@PLT
.L53:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	delete, .-delete
	.section	.rodata
	.align 8
.LC14:
	.string	"\n1. Create/Insert\n2. Display\n3. Delete\n4. Exit\n Choice: "
	.text
	.globl	main
	.type	main, @function
main:
.LFB12:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
.L62:
	lea	rdi, .LC14[rip]
	mov	eax, 0
	call	printf@PLT
	lea	rax, -12[rbp]
	mov	rsi, rax
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	__isoc99_scanf@PLT
	mov	eax, DWORD PTR -12[rbp]
	cmp	eax, 2
	je	.L56
	cmp	eax, 2
	jg	.L57
	cmp	eax, 1
	je	.L58
	jmp	.L55
.L57:
	cmp	eax, 3
	je	.L59
	cmp	eax, 4
	je	.L60
	jmp	.L55
.L58:
	mov	eax, 0
	call	insert
	jmp	.L61
.L56:
	mov	eax, 0
	call	display
	jmp	.L61
.L59:
	mov	eax, 0
	call	delete
	jmp	.L61
.L60:
	mov	edi, 0
	call	exit@PLT
.L55:
	lea	rdi, .LC7[rip]
	mov	eax, 0
	call	printf@PLT
	nop
.L61:
	jmp	.L62
	.cfi_endproc
.LFE12:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
