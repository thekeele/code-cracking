	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 11
	.globl	_fact
	.align	4, 0x90
_fact:                                  ## @fact
## BB#0:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%edi
	pushl	%esi
	subl	$48, %esp
	movl	12(%ebp), %eax
	movl	8(%ebp), %ecx
	movl	%ecx, -24(%ebp)
	movl	%eax, -20(%ebp)
	orl	%eax, %ecx
	movl	%ecx, -28(%ebp)         ## 4-byte Spill
	jne	LBB0_2
	jmp	LBB0_1
LBB0_1:
	movl	$0, -12(%ebp)
	movl	$1, -16(%ebp)
	jmp	LBB0_3
LBB0_2:
	movl	-24(%ebp), %eax
	movl	-20(%ebp), %ecx
	movl	%eax, %edx
	addl	$-1, %edx
	movl	%ecx, %esi
	adcl	$-1, %esi
	movl	%esp, %edi
	movl	%esi, 4(%edi)
	movl	%edx, (%edi)
	movl	%eax, -32(%ebp)         ## 4-byte Spill
	movl	%ecx, -36(%ebp)         ## 4-byte Spill
	calll	_fact
	movl	-32(%ebp), %ecx         ## 4-byte Reload
	imull	%edx, %ecx
	movl	-32(%ebp), %edx         ## 4-byte Reload
	movl	%eax, -40(%ebp)         ## 4-byte Spill
	movl	%edx, %eax
	movl	-40(%ebp), %esi         ## 4-byte Reload
	mull	%esi
	addl	%ecx, %edx
	movl	-36(%ebp), %ecx         ## 4-byte Reload
	imull	%esi, %ecx
	addl	%ecx, %edx
	movl	%eax, -16(%ebp)
	movl	%edx, -12(%ebp)
LBB0_3:
	movl	-16(%ebp), %eax
	movl	-12(%ebp), %edx
	addl	$48, %esp
	popl	%esi
	popl	%edi
	popl	%ebp
	retl

	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
## BB#0:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%esi
	subl	$68, %esp
	calll	L1$pb
L1$pb:
	popl	%eax
	movl	12(%ebp), %ecx
	movl	8(%ebp), %edx
	movl	$0, -8(%ebp)
	movl	%edx, -12(%ebp)
	movl	%ecx, -16(%ebp)
	cmpl	$2, -12(%ebp)
	movl	%eax, -36(%ebp)         ## 4-byte Spill
	jne	LBB1_2
## BB#1:
	movl	-36(%ebp), %eax         ## 4-byte Reload
	leal	L_.str1-L1$pb(%eax), %ecx
	movl	-16(%ebp), %edx
	movl	4(%edx), %edx
	movl	%esp, %esi
	movl	%edx, 4(%esi)
	leal	L_.str-L1$pb(%eax), %edx
	movl	%edx, (%esi)
	movl	%ecx, -40(%ebp)         ## 4-byte Spill
	calll	_printf
	movl	-16(%ebp), %ecx
	movl	4(%ecx), %ecx
	movl	%esp, %edx
	movl	%ecx, (%edx)
	movl	%eax, -44(%ebp)         ## 4-byte Spill
	calll	_atoi
	movl	%eax, %ecx
	sarl	$31, %ecx
	movl	%eax, -24(%ebp)
	movl	%ecx, -20(%ebp)
	movl	%esp, %edx
	movl	%ecx, 4(%edx)
	movl	%eax, (%edx)
	calll	_fact
	movl	%edx, -28(%ebp)
	movl	%eax, -32(%ebp)
	movl	%esp, %ecx
	movl	%edx, 8(%ecx)
	movl	%eax, 4(%ecx)
	movl	-36(%ebp), %eax         ## 4-byte Reload
	leal	L_.str1-L1$pb(%eax), %edx
	movl	%edx, (%ecx)
	calll	_printf
	movl	%eax, -48(%ebp)         ## 4-byte Spill
	jmp	LBB1_3
LBB1_2:
	movl	-36(%ebp), %eax         ## 4-byte Reload
	leal	L_.str2-L1$pb(%eax), %ecx
	leal	L_.str3-L1$pb(%eax), %edx
	movl	%ecx, (%esp)
	movl	%edx, 4(%esp)
	calll	_printf
	movl	%eax, -52(%ebp)         ## 4-byte Spill
LBB1_3:
	xorl	%eax, %eax
	addl	$68, %esp
	popl	%esi
	popl	%ebp
	retl

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"fact of %s"

L_.str1:                                ## @.str1
	.asciz	" -> %lld\n"

L_.str2:                                ## @.str2
	.asciz	"%s\n"

L_.str3:                                ## @.str3
	.asciz	"Please supply one integer"


.subsections_via_symbols
