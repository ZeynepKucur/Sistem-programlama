	.file	"wholeProcess.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.ascii	"The compilation process starts with pre-processing. .c to .i"
	.ascii	"\nthen compiler compiles intermediate source code to assembl"
	.ascii	"y source code, .i to .s\nthen the assembly code is passed"
	.string	" on to the assembler for further compilation into object code, .s to .o,\nthen object code is passed on to the linker for further compilation into executable code, .o to .exe,\nthen with loader executable code is loaded in CPU and executed by loader program."
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04.1) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
