@ Castor Wilds Statue right
SCRIPT_START script_CastorWildsStatueRight
	BeginBlock
	CheckKinstoneFused 0x0008
	JumpIf script_0800B302
	_0807EA88 0x0008
	_0807EB44 0x0002
	EndBlock
script_0800B2C8:
	_0807EA4C
	_0807E9F0
	_0807E864
	CheckKinstoneFused 0x0008
	JumpIf script_0800B2E2
	Call sub_0807DF50
	_0807E878
	Jump script_0800B2C8
script_0800B2E2:
	DoPostScriptAction 0x0013
	_0807EB44 0x0004
	_0807E9DC
	Call sub_080676E0
	Call sub_08067534
	DoPostScriptAction 0x0012
	SetSyncFlag 0x00000001
script_0800B302:
	EndBlock
SCRIPT_END
	.2byte 0x0000