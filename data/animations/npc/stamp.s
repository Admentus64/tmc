	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.section .rodata
    .align 2

gUnk_0810C2F4:: @ 0810C2F4
	.incbin "assets/stamp/gUnk_0810C2F4.bin"

gUnk_0810C325:: @ 0810C325
	.incbin "assets/stamp/gUnk_0810C325.bin"

gUnk_0810C32C:: @ 0810C32C
	.4byte gUnk_0810C2F4
	.4byte gUnk_0810C2F4
	.4byte gUnk_0810C2F4
	.4byte gUnk_0810C2F4
	.4byte gUnk_0810C325
	.4byte gUnk_0810C325
	.4byte gUnk_0810C325
	.4byte gUnk_0810C325
