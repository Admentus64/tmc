@ Kinstone Cutscene for Carlov
SCRIPT_START script_CarlovKinstone
	BeginBlock
	_0807E930 0x0000
	EndBlock
script_0800BBE4:
	CheckRoomFlag 0x00ff
	JumpIfNot script_0800BBE4
	DoPostScriptAction 0x0004
	Wait 0x003c
	MessageNoOverlap 0x0e03
	WaitUntilTextboxCloses
	Wait 0x0078
	Call sub_08054968
SCRIPT_END
	.2byte 0x0000