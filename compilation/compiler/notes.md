# Compiler Stage
During this stage the compiler takes the output file (.i) as input and compiles it into an assembly code with an extension (.o)

### Example
```{c}
#include <stdio.h>

int main(void)
{
    return (0);
}
```

Output
```{asem}
	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	xorl	%eax, %eax
	movl	$0, -4(%rbp)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols

```

NB: To stop the compilation at the compiler stage we use the -S flag with the gcc command.

#### Command
gcc -S <source_file> -o <output_file>