	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.section .rodata
    .align 2

gUnk_08114208:: @ 08114208
	.incbin "assets/npc4F/gUnk_08114208.bin"

gUnk_0811420D:: @ 0811420D
	.incbin "assets/npc4F/gUnk_0811420D.bin"

gUnk_08114216:: @ 08114216
	.incbin "assets/npc4F/gUnk_08114216.bin"

gUnk_0811421F:: @ 0811421F
	.incbin "assets/npc4F/gUnk_0811421F.bin"

gUnk_08114228:: @ 08114228
	.4byte gUnk_08114208
	.4byte gUnk_0811420D
	.4byte gUnk_08114216
	.4byte gUnk_0811421F
	.4byte 00000000
