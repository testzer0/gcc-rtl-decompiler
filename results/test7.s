	.file	"test7.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC0:
	.string	"\n Enter no of elements :"
.LC1:
	.string	"%d"
.LC2:
	.string	"\n Enter the nos : "
.LC3:
	.string	"Heap array : "
.LC4:
	.string	"%d\t "
.LC5:
	.string	"\n The sorted array is : "
.LC6:
	.string	"\t %d"
	.align 8
.LC7:
	.string	"\n Complexity : \n Best case = Avg case = Worst case = O(n logn) "
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 80
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	lea	rdi, .LC0[rip]
	mov	eax, 0
	call	printf@PLT
	lea	rax, -72[rbp]
	mov	rsi, rax
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	__isoc99_scanf@PLT
	lea	rdi, .LC2[rip]
	mov	eax, 0
	call	printf@PLT
	mov	DWORD PTR -68[rbp], 0
	jmp	.L2
.L3:
	lea	rax, -48[rbp]
	mov	edx, DWORD PTR -68[rbp]
	movsx	rdx, edx
	sal	rdx, 2
	add	rax, rdx
	mov	rsi, rax
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	__isoc99_scanf@PLT
	add	DWORD PTR -68[rbp], 1
.L2:
	mov	eax, DWORD PTR -72[rbp]
	cmp	DWORD PTR -68[rbp], eax
	jl	.L3
	mov	DWORD PTR -68[rbp], 1
	jmp	.L4
.L7:
	mov	eax, DWORD PTR -68[rbp]
	mov	DWORD PTR -60[rbp], eax
.L6:
	mov	eax, DWORD PTR -60[rbp]
	sub	eax, 1
	mov	edx, eax
	shr	edx, 31
	add	eax, edx
	sar	eax
	mov	DWORD PTR -56[rbp], eax
	mov	eax, DWORD PTR -56[rbp]
	cdqe
	mov	edx, DWORD PTR -48[rbp+rax*4]
	mov	eax, DWORD PTR -60[rbp]
	cdqe
	mov	eax, DWORD PTR -48[rbp+rax*4]
	cmp	edx, eax
	jge	.L5
	mov	eax, DWORD PTR -56[rbp]
	cdqe
	mov	eax, DWORD PTR -48[rbp+rax*4]
	mov	DWORD PTR -52[rbp], eax
	mov	eax, DWORD PTR -60[rbp]
	cdqe
	mov	edx, DWORD PTR -48[rbp+rax*4]
	mov	eax, DWORD PTR -56[rbp]
	cdqe
	mov	DWORD PTR -48[rbp+rax*4], edx
	mov	eax, DWORD PTR -60[rbp]
	cdqe
	mov	edx, DWORD PTR -52[rbp]
	mov	DWORD PTR -48[rbp+rax*4], edx
.L5:
	mov	eax, DWORD PTR -56[rbp]
	mov	DWORD PTR -60[rbp], eax
	cmp	DWORD PTR -60[rbp], 0
	jne	.L6
	add	DWORD PTR -68[rbp], 1
.L4:
	mov	eax, DWORD PTR -72[rbp]
	cmp	DWORD PTR -68[rbp], eax
	jl	.L7
	lea	rdi, .LC3[rip]
	mov	eax, 0
	call	printf@PLT
	mov	DWORD PTR -68[rbp], 0
	jmp	.L8
.L9:
	mov	eax, DWORD PTR -68[rbp]
	cdqe
	mov	eax, DWORD PTR -48[rbp+rax*4]
	mov	esi, eax
	lea	rdi, .LC4[rip]
	mov	eax, 0
	call	printf@PLT
	add	DWORD PTR -68[rbp], 1
.L8:
	mov	eax, DWORD PTR -72[rbp]
	cmp	DWORD PTR -68[rbp], eax
	jl	.L9
	mov	eax, DWORD PTR -72[rbp]
	sub	eax, 1
	mov	DWORD PTR -64[rbp], eax
	jmp	.L10
.L14:
	mov	eax, DWORD PTR -48[rbp]
	mov	DWORD PTR -52[rbp], eax
	mov	eax, DWORD PTR -64[rbp]
	cdqe
	mov	eax, DWORD PTR -48[rbp+rax*4]
	mov	DWORD PTR -48[rbp], eax
	mov	eax, DWORD PTR -64[rbp]
	cdqe
	mov	edx, DWORD PTR -52[rbp]
	mov	DWORD PTR -48[rbp+rax*4], edx
	mov	DWORD PTR -56[rbp], 0
.L13:
	mov	eax, DWORD PTR -56[rbp]
	add	eax, eax
	add	eax, 1
	mov	DWORD PTR -60[rbp], eax
	mov	eax, DWORD PTR -60[rbp]
	cdqe
	mov	edx, DWORD PTR -48[rbp+rax*4]
	mov	eax, DWORD PTR -60[rbp]
	add	eax, 1
	cdqe
	mov	eax, DWORD PTR -48[rbp+rax*4]
	cmp	edx, eax
	jge	.L11
	mov	eax, DWORD PTR -64[rbp]
	sub	eax, 1
	cmp	DWORD PTR -60[rbp], eax
	jge	.L11
	add	DWORD PTR -60[rbp], 1
.L11:
	mov	eax, DWORD PTR -56[rbp]
	cdqe
	mov	edx, DWORD PTR -48[rbp+rax*4]
	mov	eax, DWORD PTR -60[rbp]
	cdqe
	mov	eax, DWORD PTR -48[rbp+rax*4]
	cmp	edx, eax
	jge	.L12
	mov	eax, DWORD PTR -60[rbp]
	cmp	eax, DWORD PTR -64[rbp]
	jge	.L12
	mov	eax, DWORD PTR -56[rbp]
	cdqe
	mov	eax, DWORD PTR -48[rbp+rax*4]
	mov	DWORD PTR -52[rbp], eax
	mov	eax, DWORD PTR -60[rbp]
	cdqe
	mov	edx, DWORD PTR -48[rbp+rax*4]
	mov	eax, DWORD PTR -56[rbp]
	cdqe
	mov	DWORD PTR -48[rbp+rax*4], edx
	mov	eax, DWORD PTR -60[rbp]
	cdqe
	mov	edx, DWORD PTR -52[rbp]
	mov	DWORD PTR -48[rbp+rax*4], edx
.L12:
	mov	eax, DWORD PTR -60[rbp]
	mov	DWORD PTR -56[rbp], eax
	mov	eax, DWORD PTR -60[rbp]
	cmp	eax, DWORD PTR -64[rbp]
	jl	.L13
	sub	DWORD PTR -64[rbp], 1
.L10:
	cmp	DWORD PTR -64[rbp], 0
	jns	.L14
	lea	rdi, .LC5[rip]
	mov	eax, 0
	call	printf@PLT
	mov	DWORD PTR -68[rbp], 0
	jmp	.L15
.L16:
	mov	eax, DWORD PTR -68[rbp]
	cdqe
	mov	eax, DWORD PTR -48[rbp+rax*4]
	mov	esi, eax
	lea	rdi, .LC6[rip]
	mov	eax, 0
	call	printf@PLT
	add	DWORD PTR -68[rbp], 1
.L15:
	mov	eax, DWORD PTR -72[rbp]
	cmp	DWORD PTR -68[rbp], eax
	jl	.L16
	lea	rdi, .LC7[rip]
	call	puts@PLT
	nop
	mov	rax, QWORD PTR -8[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L17
	call	__stack_chk_fail@PLT
.L17:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
