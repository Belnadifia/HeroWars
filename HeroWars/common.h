#ifndef _COMMON_H
#define _COMMON_H
#include <stdio.h>
#include <cstring>

typedef char int8;
typedef short int16;
typedef int int32;
typedef long long int64; 
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long long uint64; 

#define PKT_MAX = 0x100
enum PacketCmd : uint8
{
	PKT_KeyCheck = 0x00,
	PKT_S2C_QueryStatusAns = 0x90,
	PKT_World_SendGameNumber = 0x9B,
	PKT_C2S_QueryStatusReq = 0x17,
	PKT_C2S_SynchVersion = 0xC8,
	PKT_C2S_CharLoaded = 0xc9,
	PKT_C2S_Exit = 0x95,
	PKT_C2S_ClientReady = 0x64,  //ready >>for loading<<!!!
	PKT_C2S_GameNumberReq = 0xA7,
	PKT_C2S_Ping_Load_Info = 0x19,
	PKT_S2C_Ping_Load_Info = 0xA0,
	PKT_C2S_Loaded = 0x56,
	PKT_C2S_ViewReq = 0x30,
	PKT_S2C_ViewAns = 0x2E,
	PKT_S2C_FogUpdate = 0x7A,
	PKT_C2S_Click = 0xB8,
	PKT_C2S_AttentionPing = 0x5B,
	PKT_S2C_AttentionPing = 0x47,
	PKT_C2S_Emotion = 0x4D,
	PKT_S2C_Emotion = 0x49,
	PKT_C2S_ReqBuyItem = 0x88,
	PKT_C2S_SkillUp = 0x3E,
	PKT_S2C_SkillUp = 0x18,
	PKT_C2S_OpenShop = 0x61,
	PKT_C2S_MoveReq = 0x76,
	PKT_S2C_SynchVersion = 0x5A,

	PKT_S2C_LoadScreenInfo = 0x67,
	PKT_S2C_LoadName = 0x66,
	PKT_S2C_LoadHero = 0x65,

	PKT_ChatBoxMessage = 0x00,
	PKT_HeroSpawn = 0xFF,

	//Game Starting is 0x2E btw...
};

#define CHL_MAX = 7
enum Channel : uint8
{
	CHL_HANDSHAKE = 0,
	CHL_C2S = 1,
	CHL_GAMEPLAY =2,
	CHL_S2C = 3,
	CHL_LOW_PRIORITY = 4,
	CHL_COMMUNICATION = 5,
	CHL_LOADING_SCREEN = 6,
};

enum Spell : uint32
{
	SPL_Exhaust = 0x08A8BAE4,
	SPL_Cleanse = 0x064D2094,
};
#endif
