	.file	"test6.c"
	.intel_syntax noprefix
	.text
	.globl	merge
	.type	merge, @function
merge:
.LFB5:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	r15
	push	r14
	push	r13
	push	r12
	sub	rsp, 96
	.cfi_offset 15, -24
	.cfi_offset 14, -32
	.cfi_offset 13, -40
	.cfi_offset 12, -48
	mov	QWORD PTR -104[rbp], rdi
	mov	DWORD PTR -108[rbp], esi
	mov	DWORD PTR -112[rbp], edx
	mov	DWORD PTR -116[rbp], ecx
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -40[rbp], rax
	xor	eax, eax
	mov	rax, rsp
	mov	rsi, rax
	mov	eax, DWORD PTR -112[rbp]
	sub	eax, DWORD PTR -108[rbp]
	add	eax, 1
	mov	DWORD PTR -80[rbp], eax
	mov	eax, DWORD PTR -116[rbp]
	sub	eax, DWORD PTR -112[rbp]
	mov	DWORD PTR -76[rbp], eax
	mov	eax, DWORD PTR -80[rbp]
	movsx	rdx, eax
	sub	rdx, 1
	mov	QWORD PTR -72[rbp], rdx
	movsx	rdx, eax
	mov	r14, rdx
	mov	r15d, 0
	movsx	rdx, eax
	mov	r12, rdx
	mov	r13d, 0
	cdqe
	sal	rax, 2
	lea	rdx, 3[rax]
	mov	eax, 16
	sub	rax, 1
	add	rax, rdx
	mov	edi, 16
	mov	edx, 0
	div	rdi
	imul	rax, rax, 16
	sub	rsp, rax
	mov	rax, rsp
	add	rax, 3
	shr	rax, 2
	sal	rax, 2
	mov	QWORD PTR -64[rbp], rax
	mov	eax, DWORD PTR -76[rbp]
	movsx	rdx, eax
	sub	rdx, 1
	mov	QWORD PTR -56[rbp], rdx
	movsx	rdx, eax
	mov	r10, rdx
	mov	r11d, 0
	movsx	rdx, eax
	mov	r8, rdx
	mov	r9d, 0
	cdqe
	sal	rax, 2
	lea	rdx, 3[rax]
	mov	eax, 16
	sub	rax, 1
	add	rax, rdx
	mov	edi, 16
	mov	edx, 0
	div	rdi
	imul	rax, rax, 16
	sub	rsp, rax
	mov	rax, rsp
	add	rax, 3
	shr	rax, 2
	sal	rax, 2
	mov	QWORD PTR -48[rbp], rax
	mov	DWORD PTR -84[rbp], 0
	jmp	.L2
.L3:
	mov	edx, DWORD PTR -108[rbp]
	mov	eax, DWORD PTR -84[rbp]
	add	eax, edx
	cdqe
	lea	rdx, 0[0+rax*4]
	mov	rax, QWORD PTR -104[rbp]
	add	rax, rdx
	mov	ecx, DWORD PTR [rax]
	mov	rax, QWORD PTR -64[rbp]
	mov	edx, DWORD PTR -84[rbp]
	movsx	rdx, edx
	mov	DWORD PTR [rax+rdx*4], ecx
	add	DWORD PTR -84[rbp], 1
.L2:
	mov	eax, DWORD PTR -84[rbp]
	cmp	eax, DWORD PTR -80[rbp]
	jl	.L3
	mov	DWORD PTR -88[rbp], 0
	jmp	.L4
.L5:
	mov	eax, DWORD PTR -112[rbp]
	lea	edx, 1[rax]
	mov	eax, DWORD PTR -88[rbp]
	add	eax, edx
	cdqe
	lea	rdx, 0[0+rax*4]
	mov	rax, QWORD PTR -104[rbp]
	add	rax, rdx
	mov	ecx, DWORD PTR [rax]
	mov	rax, QWORD PTR -48[rbp]
	mov	edx, DWORD PTR -88[rbp]
	movsx	rdx, edx
	mov	DWORD PTR [rax+rdx*4], ecx
	add	DWORD PTR -88[rbp], 1
.L4:
	mov	eax, DWORD PTR -88[rbp]
	cmp	eax, DWORD PTR -76[rbp]
	jl	.L5
	mov	DWORD PTR -84[rbp], 0
	mov	DWORD PTR -88[rbp], 0
	mov	eax, DWORD PTR -108[rbp]
	mov	DWORD PTR -92[rbp], eax
	jmp	.L6
.L10:
	mov	rax, QWORD PTR -64[rbp]
	mov	edx, DWORD PTR -84[rbp]
	movsx	rdx, edx
	mov	ecx, DWORD PTR [rax+rdx*4]
	mov	rax, QWORD PTR -48[rbp]
	mov	edx, DWORD PTR -88[rbp]
	movsx	rdx, edx
	mov	eax, DWORD PTR [rax+rdx*4]
	cmp	ecx, eax
	jg	.L7
	mov	eax, DWORD PTR -92[rbp]
	cdqe
	lea	rdx, 0[0+rax*4]
	mov	rax, QWORD PTR -104[rbp]
	lea	rcx, [rdx+rax]
	mov	rax, QWORD PTR -64[rbp]
	mov	edx, DWORD PTR -84[rbp]
	movsx	rdx, edx
	mov	eax, DWORD PTR [rax+rdx*4]
	mov	DWORD PTR [rcx], eax
	add	DWORD PTR -84[rbp], 1
	jmp	.L8
.L7:
	mov	eax, DWORD PTR -92[rbp]
	cdqe
	lea	rdx, 0[0+rax*4]
	mov	rax, QWORD PTR -104[rbp]
	lea	rcx, [rdx+rax]
	mov	rax, QWORD PTR -48[rbp]
	mov	edx, DWORD PTR -88[rbp]
	movsx	rdx, edx
	mov	eax, DWORD PTR [rax+rdx*4]
	mov	DWORD PTR [rcx], eax
	add	DWORD PTR -88[rbp], 1
.L8:
	add	DWORD PTR -92[rbp], 1
.L6:
	mov	eax, DWORD PTR -84[rbp]
	cmp	eax, DWORD PTR -80[rbp]
	jge	.L11
	mov	eax, DWORD PTR -88[rbp]
	cmp	eax, DWORD PTR -76[rbp]
	jl	.L10
	jmp	.L11
.L12:
	mov	eax, DWORD PTR -92[rbp]
	cdqe
	lea	rdx, 0[0+rax*4]
	mov	rax, QWORD PTR -104[rbp]
	lea	rcx, [rdx+rax]
	mov	rax, QWORD PTR -64[rbp]
	mov	edx, DWORD PTR -84[rbp]
	movsx	rdx, edx
	mov	eax, DWORD PTR [rax+rdx*4]
	mov	DWORD PTR [rcx], eax
	add	DWORD PTR -84[rbp], 1
	add	DWORD PTR -92[rbp], 1
.L11:
	mov	eax, DWORD PTR -84[rbp]
	cmp	eax, DWORD PTR -80[rbp]
	jl	.L12
	jmp	.L13
.L14:
	mov	eax, DWORD PTR -92[rbp]
	cdqe
	lea	rdx, 0[0+rax*4]
	mov	rax, QWORD PTR -104[rbp]
	lea	rcx, [rdx+rax]
	mov	rax, QWORD PTR -48[rbp]
	mov	edx, DWORD PTR -88[rbp]
	movsx	rdx, edx
	mov	eax, DWORD PTR [rax+rdx*4]
	mov	DWORD PTR [rcx], eax
	add	DWORD PTR -88[rbp], 1
	add	DWORD PTR -92[rbp], 1
.L13:
	mov	eax, DWORD PTR -88[rbp]
	cmp	eax, DWORD PTR -76[rbp]
	jl	.L14
	mov	rsp, rsi
	nop
	mov	rax, QWORD PTR -40[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L15
	call	__stack_chk_fail@PLT
.L15:
	lea	rsp, -32[rbp]
	pop	r12
	pop	r13
	pop	r14
	pop	r15
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	merge, .-merge
	.globl	mergeSort
	.type	mergeSort, @function
mergeSort:
.LFB6:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	DWORD PTR -28[rbp], esi
	mov	DWORD PTR -32[rbp], edx
	mov	eax, DWORD PTR -28[rbp]
	cmp	eax, DWORD PTR -32[rbp]
	jge	.L18
	mov	eax, DWORD PTR -32[rbp]
	sub	eax, DWORD PTR -28[rbp]
	mov	edx, eax
	shr	edx, 31
	add	eax, edx
	sar	eax
	mov	edx, eax
	mov	eax, DWORD PTR -28[rbp]
	add	eax, edx
	mov	DWORD PTR -4[rbp], eax
	mov	edx, DWORD PTR -4[rbp]
	mov	ecx, DWORD PTR -28[rbp]
	mov	rax, QWORD PTR -24[rbp]
	mov	esi, ecx
	mov	rdi, rax
	call	mergeSort
	mov	eax, DWORD PTR -4[rbp]
	lea	ecx, 1[rax]
	mov	edx, DWORD PTR -32[rbp]
	mov	rax, QWORD PTR -24[rbp]
	mov	esi, ecx
	mov	rdi, rax
	call	mergeSort
	mov	ecx, DWORD PTR -32[rbp]
	mov	edx, DWORD PTR -4[rbp]
	mov	esi, DWORD PTR -28[rbp]
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	merge
.L18:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	mergeSort, .-mergeSort
	.section	.rodata
.LC0:
	.string	"%d "
	.text
	.globl	printArray
	.type	printArray, @function
printArray:
.LFB7:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	DWORD PTR -28[rbp], esi
	mov	DWORD PTR -4[rbp], 0
	jmp	.L20
.L21:
	mov	eax, DWORD PTR -4[rbp]
	cdqe
	lea	rdx, 0[0+rax*4]
	mov	rax, QWORD PTR -24[rbp]
	add	rax, rdx
	mov	eax, DWORD PTR [rax]
	mov	esi, eax
	lea	rdi, .LC0[rip]
	mov	eax, 0
	call	printf@PLT
	add	DWORD PTR -4[rbp], 1
.L20:
	mov	eax, DWORD PTR -4[rbp]
	cmp	eax, DWORD PTR -28[rbp]
	jl	.L21
	mov	edi, 10
	call	putchar@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	printArray, .-printArray
	.section	.rodata
.LC1:
	.string	"Given array is "
.LC2:
	.string	"\nSorted array is "
	.text
	.globl	main
	.type	main, @function
main:
.LFB8:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 48
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	mov	DWORD PTR -32[rbp], 12
	mov	DWORD PTR -28[rbp], 11
	mov	DWORD PTR -24[rbp], 13
	mov	DWORD PTR -20[rbp], 5
	mov	DWORD PTR -16[rbp], 6
	mov	DWORD PTR -12[rbp], 7
	mov	DWORD PTR -36[rbp], 6
	lea	rdi, .LC1[rip]
	call	puts@PLT
	mov	edx, DWORD PTR -36[rbp]
	lea	rax, -32[rbp]
	mov	esi, edx
	mov	rdi, rax
	call	printArray
	mov	eax, DWORD PTR -36[rbp]
	lea	edx, -1[rax]
	lea	rax, -32[rbp]
	mov	esi, 0
	mov	rdi, rax
	call	mergeSort
	lea	rdi, .LC2[rip]
	call	puts@PLT
	mov	edx, DWORD PTR -36[rbp]
	lea	rax, -32[rbp]
	mov	esi, edx
	mov	rdi, rax
	call	printArray
	mov	eax, 0
	mov	rcx, QWORD PTR -8[rbp]
	xor	rcx, QWORD PTR fs:40
	je	.L24
	call	__stack_chk_fail@PLT
.L24:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
