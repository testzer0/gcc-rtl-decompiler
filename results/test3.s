	.file	"test3.c"
	.intel_syntax noprefix
	.text
	.globl	loopy
	.type	loopy, @function
loopy:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	DWORD PTR -20[rbp], edi
	mov	eax, DWORD PTR -20[rbp]
	mov	DWORD PTR -8[rbp], eax
	jmp	.L2
.L5:
	mov	DWORD PTR -4[rbp], 1
	jmp	.L3
.L4:
	sal	DWORD PTR -4[rbp]
.L3:
	mov	eax, DWORD PTR -20[rbp]
	cmp	eax, DWORD PTR -4[rbp]
	jg	.L4
	mov	eax, DWORD PTR -4[rbp]
	add	DWORD PTR -8[rbp], eax
	mov	eax, DWORD PTR -4[rbp]
	sub	DWORD PTR -20[rbp], eax
.L2:
	cmp	DWORD PTR -8[rbp], 999
	jle	.L5
	mov	eax, DWORD PTR -8[rbp]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	loopy, .-loopy
	.section	.rodata
.LC0:
	.string	"Hey!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
.L8:
	lea	rdi, .LC0[rip]
	call	puts@PLT
	jmp	.L8
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
