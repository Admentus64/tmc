	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.section .rodata
    .align 2

gUnk_08123698:: @ 08123698
	.incbin "assets/bigVortex/gUnk_08123698.bin"

gUnk_081236A9:: @ 081236A9
	.incbin "assets/bigVortex/gUnk_081236A9.bin"

gUnk_081236BA:: @ 081236BA
	.incbin "assets/bigVortex/gUnk_081236BA.bin"

gUnk_081236CC:: @ 081236CC
	.4byte gUnk_08123698
	.4byte gUnk_081236A9
	.4byte gUnk_081236BA
	.4byte 00000000
