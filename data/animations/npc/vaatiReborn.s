	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.section .rodata
    .align 2

gUnk_08112F88:: @ 08112F88
	.incbin "assets/vaatiReborn/gUnk_08112F88.bin"

gUnk_08112FC4:: @ 08112FC4
	.incbin "assets/vaatiReborn/gUnk_08112FC4.bin"

gUnk_08112FD5:: @ 08112FD5
	.incbin "assets/vaatiReborn/gUnk_08112FD5.bin"

gUnk_08112FF4:: @ 08112FF4
	.4byte gUnk_08112F88
	.4byte gUnk_08112FC4
	.4byte gUnk_08112FD5
	.4byte 00000000
