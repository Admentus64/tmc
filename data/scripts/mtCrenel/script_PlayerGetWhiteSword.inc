@ Mines Player get white sword
SCRIPT_START script_PlayerGetWhiteSword
	_0807F078 0x0002, 0x0001
	CallWithArg sub_0807F918, 0x00000002
	PlaySound SFX_109
	CallWithArg sub_0807F238, 0x000001e2
	Call sub_0807F304
	MessageNoOverlap 0x0502
	WaitUntilTextboxCloses
	SetSyncFlag 0x00000008
	Call sub_080791BC
SCRIPT_END