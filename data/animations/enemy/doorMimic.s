	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.section .rodata

gUnk_080CB8B4:: @ 080CB8B4
	.incbin "assets/doorMimic/gUnk_080CB8B4.bin"

gUnk_080CB8B9:: @ 080CB8B9
	.incbin "assets/doorMimic/gUnk_080CB8B9.bin"

gUnk_080CB8BE:: @ 080CB8BE
	.incbin "assets/doorMimic/gUnk_080CB8BE.bin"

gUnk_080CB8D7:: @ 080CB8D7
	.incbin "assets/doorMimic/gUnk_080CB8D7.bin"

gUnk_080CB8F0:: @ 080CB8F0
	.incbin "assets/doorMimic/gUnk_080CB8F0.bin"

gUnk_080CB901:: @ 080CB901
	.incbin "assets/doorMimic/gUnk_080CB901.bin"

gUnk_080CB914:: @ 080CB914
	.4byte gUnk_080CB8B4
	.4byte gUnk_080CB8B9
	.4byte gUnk_080CB8B9
	.4byte gUnk_080CB8B4
	.4byte gUnk_080CB8BE
	.4byte gUnk_080CB8D7
	.4byte gUnk_080CB8D7
	.4byte gUnk_080CB8BE
	.4byte gUnk_080CB8F0
	.4byte gUnk_080CB901
	.4byte gUnk_080CB901
	.4byte gUnk_080CB8F0
	.4byte 00000000
