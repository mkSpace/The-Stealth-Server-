#pragma once
#include "TcpProtocol.h"

typedef struct _S_PT_CHANNEL_NICKNAME
{
	WCHAR USER_ID[32];
} S_PT_CHANNEL_NICKNAME;

typedef struct _S_PT_CHANNEL_NICKNAME_SUCC_U
{
	WCHAR USER_ID[32];
	WCHAR NICK_NAME[32];
} S_PT_CHANNEL_NICKNAME_SUCC_U;

typedef struct _S_PT_CHANNEL_NICKNAME_FAIL_U
{
	DWORD ERROR_CODE;
} S_PT_CHANNEL_NICKNAME_FAIL_U;

typedef struct _S_PT_QUERY_NICKNAME
{
	WCHAR NICK_NAME[32];
} S_PT_QUERY_NICKNAME;

typedef struct _S_PT_QUERY_NICKNAME_SUCC_U
{
} S_PT_QUERY_NICKNAME_SUCC_U;

typedef struct _S_PT_QUERY_NICKNAME_FAIL_U
{
} S_PT_QUERY_NICKNAME_FAIL_U;

typedef struct _S_PT_INSERT_NICKNAME
{
	WCHAR USER_ID[32];
	WCHAR NICKNAME[32];
} S_PT_INSERT_NICKNAME;

typedef struct _S_PT_INSERT_NICKNAME_SUCC_U
{
} S_PT_INSERT_NICKNAME_SUCC_U;

typedef struct _S_PT_INSERT_NICKNAME_FAIL_U
{
} S_PT_INSERT_NICKNAME_FAIL_U;

typedef struct _S_PT_CHANNEL_CHATTING
{
	WCHAR CHAT[256];
} S_PT_CHANNEL_CHATTING;

typedef struct _S_PT_CHANNEL_SUCC_U
{
} S_PT_CHANNEL_SUCC_U;

typedef struct _S_PT_CHANNEL_FAIL_U
{
	DWORD ERROR_CODE;
} S_PT_CHANNEL_FAIL_U;

typedef struct _S_PT_CHANNEL_CHATTING_M
{
	DWORD_PTR SESSION_ID;
	WCHAR NICKNAME[32];
	WCHAR CHAT[256];
} S_PT_CHANNEL_CHATTING_M;

typedef struct _S_PT_ROOM_CHATTING
{
	WCHAR CHAT[256];
} S_PT_ROOM_CHATTING;

typedef struct _S_PT_ROOM_CHATTING_SUCC_U
{
} S_PT_ROOM_CHATTING_SUCC_U;

typedef struct _S_PT_ROOM_CHATTING_FAIL_U
{
	DWORD ERROR_CODE;
} S_PT_ROOM_CHATTING_FAIL_U;

typedef struct _S_PT_ROOM_CHATTING_M
{
	WCHAR NICKNAME[16];
	WCHAR CHAT[256];
} S_PT_ROOM_CHATTING_M;

typedef struct _S_PT_LOGIN_USER
{
	WCHAR USER_ID[32];
	WCHAR USER_PWD[32];
} S_PT_LOGIN_USER;

typedef struct _S_PT_LOGIN_USER_SUCC_U
{
	DWORD OID;
} S_PT_LOGIN_USER_SUCC_U;

typedef struct _S_PT_LOGIN_USER_FAIL_U
{
	DWORD ERROR_CODE;
} S_PT_LOGIN_USER_FAIL_U;

typedef struct _S_PT_LOBBY_ENTER
{
} S_PT_LOBBY_ENTER;

typedef struct _S_PT_LOBBY_ENTER_SUCC_U
{
} S_PT_LOBBY_ENTER_SUCC_U;

typedef struct _S_PT_LOBBY_ENTER_FAIL_U
{
} S_PT_LOBBY_ENTER_FAIL_U;

typedef struct _S_PT_LOBBY_ENTER_M
{
	WCHAR NICKNAME[32];
} S_PT_LOBBY_ENTER_M;

typedef struct _S_PT_ROOM_INFO_REQ
{
} S_PT_ROOM_INFO_REQ;

typedef struct _S_PT_ROOM_INFO_REQ_SUCC_U
{
	ROOM_INFO_DATA ROOMS[10];
} S_PT_ROOM_INFO_REQ_SUCC_U;

typedef struct _S_PT_ROOM_INFO_REQ_FAIL_U
{
} S_PT_ROOM_INFO_REQ_FAIL_U;

typedef struct _S_PT_ROOM_INFO_REQ_M
{
	WCHAR TITLE[32];
	DWORD CURRENTUSER;
	BOOL STATE;
	DWORD INDEX;
} S_PT_ROOM_INFO_REQ_M;

typedef struct _S_PT_USER_INFO_REQ
{
} S_PT_USER_INFO_REQ;

typedef struct _S_PT_USER_INFO_REQ_SUCC_U
{
	USER_INFO_DATA DATA[20];
} S_PT_USER_INFO_REQ_SUCC_U;

typedef struct _S_PT_USER_INFO_REQ_FAIL_U
{
} S_PT_USER_INFO_REQ_FAIL_U;

typedef struct _S_PT_CHANNEL_ENTER
{
	DWORD OID;
	WCHAR VIRTUAL_ADDRESS[32];
	USHORT VIRTUAL_PORT;
} S_PT_CHANNEL_ENTER;

typedef struct _S_PT_CHANNEL_ENTER_SUCC_U
{
	DWORD_PTR SESSION_ID;
	WCHAR VIRTUAL_ADDRESS[32];
	USHORT VIRTUAL_PORT;
	WCHAR REAL_ADDRESS[32];
	USHORT REAL_PORT;
} S_PT_CHANNEL_ENTER_SUCC_U;

typedef struct _S_PT_CHANNEL_ENTER_FAIL_U
{
	DWORD ERROR_CODE;
} S_PT_CHANNEL_ENTER_FAIL_U;

typedef struct _S_PT_CHANNEL_ENTER_M
{
} S_PT_CHANNEL_ENTER_M;

typedef struct _S_PT_SIGN_UP_USER
{
	WCHAR USER_ID[32];
	WCHAR USER_PWD[32];
} S_PT_SIGN_UP_USER;

typedef struct _S_PT_SIGN_UP_USER_SUCC_U
{
} S_PT_SIGN_UP_USER_SUCC_U;

typedef struct _S_PT_SIGN_UP_USER_FAIL_U
{
	DWORD ERROR_CODE;
} S_PT_SIGN_UP_USER_FAIL_U;

typedef struct _S_PT_QUERY_USER
{
	WCHAR USER_ID[32];
} S_PT_QUERY_USER;

typedef struct _S_PT_QUERY_USER_SUCC_U
{
} S_PT_QUERY_USER_SUCC_U;

typedef struct _S_PT_QUERY_USER_FAIL_U
{
	DWORD ERROR_CODE;
} S_PT_QUERY_USER_FAIL_U;

typedef struct _S_PT_ROOM_CREATE
{
	WCHAR TITLE[20];
} S_PT_ROOM_CREATE;

typedef struct _S_PT_ROOM_CREATE_SUCC_U
{
	DWORD INDEX;
} S_PT_ROOM_CREATE_SUCC_U;

typedef struct _S_PT_ROOM_CREATE_FAIL_U
{
	DWORD ERROR_CODE;
} S_PT_ROOM_CREATE_FAIL_U;

typedef struct _S_PT_ROOM_CREATE_M
{
	WCHAR TITLE[20];
	DWORD INDEX;
	DWORD CURRENTNUM;
} S_PT_ROOM_CREATE_M;

typedef struct _S_PT_ROOM_ENTER
{
	DWORD ROOM_ID;
} S_PT_ROOM_ENTER;

typedef struct _S_PT_ROOM_ENTER_SUCC_U
{
	USHORT SLOT_INDEX;
} S_PT_ROOM_ENTER_SUCC_U;

typedef struct _S_PT_ROOM_ENTER_FAIL_U
{
	DWORD ERROR_CODE;
} S_PT_ROOM_ENTER_FAIL_U;

typedef struct _S_PT_ROOM_ENTER_M
{
	DWORD OID;
	DWORD_PTR SESSION_ID;
	WCHAR NICKNAME[32];
	USHORT SLOT_INDEX;
} S_PT_ROOM_ENTER_M;

typedef struct _S_PT_ROOM_REQ_INFO
{
} S_PT_ROOM_REQ_INFO;

typedef struct _S_PT_ROOM_REQ_INFO_SUCC_U
{
	DWORD ROOM_INDEX;
	WCHAR TITLE[32];
	USHORT CURRENT_USER_COUNT;
	DWORD_PTR ROOT_USER_SESSION_ID;
	WCHAR ROOT_REAL_ADDRESS[32];
	USHORT ROOT_REAL_PORT;
	SLOT_USER_DATA DATA[8];
} S_PT_ROOM_REQ_INFO_SUCC_U;

typedef struct _S_PT_ROOM_REQ_INFO_FAIL_U
{
	DWORD ERROR_CODE;
} S_PT_ROOM_REQ_INFO_FAIL_U;

typedef struct _S_PT_ROOM_LEAVE
{
} S_PT_ROOM_LEAVE;

typedef struct _S_PT_ROOM_LEAVE_SUCC_U
{
} S_PT_ROOM_LEAVE_SUCC_U;

typedef struct _S_PT_ROOM_LEAVE_FAIL_U
{
	DWORD ERROR_CODE;
} S_PT_ROOM_LEAVE_FAIL_U;

typedef struct _S_PT_ROOM_LEAVE_M
{
	WCHAR OUTUSER[32];
	WCHAR ROOTUSER[32];
} S_PT_ROOM_LEAVE_M;

typedef struct _S_PT_ROOM_TEAM_CHANGE
{
	BOOL TEAM;
} S_PT_ROOM_TEAM_CHANGE;

typedef struct _S_PT_ROOM_TEAM_CHANGE_SUCC_U
{
	USHORT SLOT_INDEX;
} S_PT_ROOM_TEAM_CHANGE_SUCC_U;

typedef struct _S_PT_ROOM_TEAM_CHANGE_FAIL_U
{
} S_PT_ROOM_TEAM_CHANGE_FAIL_U;

typedef struct _S_PT_ROOM_TEAM_CHANGE_M
{
	WCHAR USER_ID[32];
	WCHAR NICKNAME[32];
	USHORT SLOT_INDEX;
} S_PT_ROOM_TEAM_CHANGE_M;

typedef struct _S_PT_ROOM_READY
{
	BOOL READY;
} S_PT_ROOM_READY;

typedef struct _S_PT_ROOM_READY_SUCC_U
{
} S_PT_ROOM_READY_SUCC_U;

typedef struct _S_PT_ROOM_READY_FAIL_U
{
	DWORD ERROR_CODE;
} S_PT_ROOM_READY_FAIL_U;

typedef struct _S_PT_ROOM_READY_M
{
	DWORD OID;
	WCHAR NICKNAME[32];
	BOOL READY;
} S_PT_ROOM_READY_M;

typedef struct _S_PT_ROOM_START
{
} S_PT_ROOM_START;

typedef struct _S_PT_ROOM_START_SUCC_U
{
} S_PT_ROOM_START_SUCC_U;

typedef struct _S_PT_ROOM_START_FAIL_U
{
	DWORD ERROR_CODE;
} S_PT_ROOM_START_FAIL_U;

typedef struct _S_PT_ROOM_START_M
{
	USER_START_INFO USERS[8];
} S_PT_ROOM_START_M;

typedef struct _S_PT_GAME_LOAD_COMPLETE
{
} S_PT_GAME_LOAD_COMPLETE;

typedef struct _S_PT_GAME_LOAD_COMPLETE_SUCC_U
{
} S_PT_GAME_LOAD_COMPLETE_SUCC_U;

typedef struct _S_PT_GAME_LOAD_COMPLETE_FAIL_U
{
	DWORD ERROR_CODE;
} S_PT_GAME_LOAD_COMPLETE_FAIL_U;

typedef struct _S_PT_GAME_LOAD_COMPLETE_M
{
	WCHAR USER_ID[32];
} S_PT_GAME_LOAD_COMPLETE_M;

typedef struct _S_PT_GAME_ALL_LOAD_COMPLETE_M
{
} S_PT_GAME_ALL_LOAD_COMPLETE_M;

typedef struct _S_PT_GAME_INTRO_COMPLETE
{
} S_PT_GAME_INTRO_COMPLETE;

typedef struct _S_PT_GAME_INTRO_COMPLETE_SUCC_U
{
} S_PT_GAME_INTRO_COMPLETE_SUCC_U;

typedef struct _S_PT_GAME_INTRO_COMPLETE_FAIL_U
{
	DWORD ERROR_CODE;
} S_PT_GAME_INTRO_COMPLETE_FAIL_U;

typedef struct _S_PT_GAME_INTRO_COMPLETE_M
{
	DWORD_PTR SESSION_ID;
} S_PT_GAME_INTRO_COMPLETE_M;

typedef struct _S_PT_GAME_ALL_INTRO_COMPLETE_M
{
} S_PT_GAME_ALL_INTRO_COMPLETE_M;

typedef struct _S_PT_GAME_START_M
{
	DWORD PORT;
} S_PT_GAME_START_M;

typedef struct _S_PT_ROOT_GAME_START
{
	USHORT CURRENT_USER_COUNT;
	SLOT_USER_DATA DATA[8];
	DWORD PORT;
} S_PT_ROOT_GAME_START;

typedef struct _S_PT_GAME_END_M
{
} S_PT_GAME_END_M;

typedef struct _S_PT_C2U_KILL_USER_M
{
	DWORD USEROID;
	DWORD TARGETID;
} S_PT_C2U_KILL_USER_M;

typedef struct _S_PT_U2C_REGEN_USER
{
} S_PT_U2C_REGEN_USER;

typedef struct _S_PT_C2U_REGEN_USER_SUCC_U
{
} S_PT_C2U_REGEN_USER_SUCC_U;

typedef struct _S_PT_C2U_REGEN_USER_FAIL_U
{
} S_PT_C2U_REGEN_USER_FAIL_U;

typedef struct _S_PT_C2U_RESULT_M
{
	USHORT WINTEAM;
	RESULT_USER_DATA DATA[8];
} S_PT_C2U_RESULT_M;
