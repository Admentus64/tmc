@ Trilby Highlands Percy in front of house
SCRIPT_START script_PercyOutside
	BeginBlock
	_0807EB44 0x0004
	CallWithArg sub_0807F3D8, 0x00000008
	DoPostScriptAction 0x000a
	Call sub_0806B60C
	EndBlock
script_08012EDC:
	CheckEntityInteractType
	JumpIfNot script_08012EDC
	_0807E864
	_0807EB74
	CallWithArg sub_0807F3D8, 0x0000000c
	Call sub_0806B4F0
	WaitUntilTextboxCloses
	Wait 0x000f
	_0807E878
	CallWithArg sub_0807F3D8, 0x00000008
	Jump script_08012EDC