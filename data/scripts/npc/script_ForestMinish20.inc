@ Some Forest Minish ?
SCRIPT_START script_ForestMinish20
	SetEntitySpeed 0x0100
script_08016848:
	WaitForSyncFlag 0x00000004
	ClearSyncFlag 0x00000004
	_0807EC94 0x0030
	Wait 0x000f
	DoPostScriptAction 0x0000
	_0807EB44 0x0004
	Wait 0x001e
	SetSyncFlag 0x00000003
	DoPostScriptAction 0x0003
	Wait 0x0002
	_0807EB44 0x0006
	Wait 0x0002
	_0807EB44 0x0000
	Wait 0x0002
	_0807EB44 0x0002
	Wait 0x0002
	_0807EB44 0x0004
	Wait 0x003c
	_0807ECF4 0x0030
	SetSyncFlag 0x00000002
	Wait 0x000f
	DoPostScriptAction 0x0000
	_0807EB44 0x0004
	WaitForSyncFlag 0x00000004
	ClearSyncFlag 0x00000004
	DoPostScriptAction 0x0003
	Wait 0x0002
	_0807EB44 0x0006
	Wait 0x0002
	_0807EB44 0x0000
	Wait 0x0002
	_0807EB44 0x0002
	Wait 0x0002
	_0807EB44 0x0004
	Jump script_08016848