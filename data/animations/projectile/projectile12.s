	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.section .rodata
    .align 2

gUnk_08129C08:: @ 08129C08
	.incbin "assets/projectile12/gUnk_08129C08.bin"

gUnk_08129C74:: @ 08129C74
	.4byte gUnk_08129C08
	.4byte 00000000
