@ 5th Goron during 5th Goron cutscene
SCRIPT_START script_Goron5Kinstone5
	BeginBlock
	_0807EB44 0x0000
	_0807E930 0x0000
	DoPostScriptAction 0x0008
	SetEntitySpeed 0x0080
	Call sub_0807F348
	EndBlock
	WaitForSyncFlagAndClear 0x00000002
	DoPostScriptAction 0x0007
	CallWithArg sub_0807F4F8, 0x00000128
	Wait 0x001e
	MessageNoOverlap 0x0e14
	WaitUntilTextboxCloses
	SetSyncFlag 0x0000003c
	WaitForSyncFlagAndClear 0x00000002
	SetEntitySpeed 0x0100
	_0807EDD4 0x0098, 0x00e8
	_0807EDD4 0x00a8, 0x00e8
	_0807EDD4 0x00a8, 0x00d8
	Wait 0x000f
	SetSyncFlag 0x0000003c
	DoPostScriptAction 0x000f
	_0807E930 0x0008
	Wait 0x00f0
	Call sub_08054968
SCRIPT_END