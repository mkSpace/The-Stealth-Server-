#pragma once

typedef struct _USER_MOVE_TO_DATA_
{
	DWORD		Oid;
	FLOAT		HP;
	FLOAT		X;
	FLOAT		Y;
	FLOAT		Z;
	FLOAT		DW;
	FLOAT		DX;
	FLOAT		DY;
	FLOAT		DZ;
	FLOAT		SPEED;
	FLOAT		BOOSTTIME;
	BOOL		isFired;
	BOOL		IsAlive;
} USER_MOVE_TO_DATA;

typedef enum UDP_PROTOCOL
{
	PU_VERSION	= 0x2000000,
	PU_TUNNELING,
	/*
	WCHAR				:	USERID[16]
	WCHAR				:	VIRTUAL_ADDRESS[32]
	USHORT				:	VIRTUAL_PORT
	*/
	PU_TUNNELING_SUCC_U,
	/*
	WCHAR				:	VIRTUAL_ADDRESS[32]
	USHORT				:	VIRTUAL_PORT
	WCHAR				:	REAL_ADDRESS[32]
	USHORT				:	REAL_PORT
	*/
	PU_TUNNELING_FAIL_U,
	/*
	*/
	PU_U2C_MOVE_TO,
	/*
	DWORD				:	ROOM_ID
	DWORD				:	OID
    FLOAT               :   X
    FLOAT               :   Y
	FLOAT				:	Z
	FLOAT				:	DW
	FLOAT				:	DX
	FLOAT				:	DY
	FLOAT				:	DZ
	FLOAT				:	SPEED
	FLOAT				:	BOOSTTIME
	BOOL				:	ISFIRED
	*/
	PU_H2C_MOVE_TO,
	/*
	WCHAR				:	USERID[32]
	DWORD				:	ROOM_ID
	*/
	PU_C2U_MOVE_TO,
	/*
	USER_MOVE_TO_DATA	:	USER[8]
	*/
	PU_U2C_DAMAGE,
	/*
	DWORD				:	USERID
	DWORD				:	TARGETID
	FLOAT				:	DAMAGE
	*/
	PU_END
};