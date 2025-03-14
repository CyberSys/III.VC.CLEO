#pragma once
#include "CustomScript.h"
#include <Windows.h>

class CustomOpcodes
{
	static eOpcodeResult WINAPI DUMMY(CScript *script);
	static eOpcodeResult WINAPI GOTO(CScript *script);
	static eOpcodeResult WINAPI GOTO_IF_TRUE(CScript *script);
	static eOpcodeResult WINAPI GOTO_IF_FALSE(CScript *script);
	static eOpcodeResult WINAPI GOSUB(CScript *script);
	static eOpcodeResult WINAPI TERMINATE_CUSTOM_THREAD(CScript *script);
	static eOpcodeResult WINAPI TERMINATE_NAMED_CUSTOM_THREAD(CScript *script);
	static eOpcodeResult WINAPI START_CUSTOM_THREAD(CScript *script);
	static eOpcodeResult WINAPI MEMORY_WRITE(CScript *script);
	static eOpcodeResult WINAPI MEMORY_READ(CScript *script);
	static eOpcodeResult WINAPI CALL(CScript *script);
	static eOpcodeResult WINAPI CALL_FUNCTION(CScript *script);
	static eOpcodeResult WINAPI CALL_METHOD(CScript *script);
	static eOpcodeResult WINAPI CALL_FUNCTION_METHOD(CScript *script);
	static eOpcodeResult WINAPI GET_GAME_VERSION(CScript *script);
	static eOpcodeResult WINAPI GET_CHAR_STRUCT(CScript *script);
	static eOpcodeResult WINAPI GET_CAR_STRUCT(CScript *script);
	static eOpcodeResult WINAPI GET_OBJECT_STRUCT(CScript *script);
	static eOpcodeResult WINAPI GET_CHAR_HANDLE(CScript *script);
	static eOpcodeResult WINAPI GET_CAR_HANDLE(CScript *script);
	static eOpcodeResult WINAPI GET_OBJECT_HANDLE(CScript *script);
	static eOpcodeResult WINAPI GET_THREAD_POINTER(CScript *script);
	static eOpcodeResult WINAPI GET_NAMED_THREAD_POINTER(CScript *script);
	static eOpcodeResult WINAPI IS_OLD_KEY_PRESSED(CScript *script);
	static eOpcodeResult WINAPI IS_KEY_PRESSED(CScript* script);
	static eOpcodeResult WINAPI FIND_RANDOM_CHAR(CScript *script);
	static eOpcodeResult WINAPI FIND_RANDOM_CAR(CScript *script);
	static eOpcodeResult WINAPI FIND_RANDOM_OBJECT(CScript *script);
	static eOpcodeResult WINAPI CALL_POP_FLOAT(CScript *script);
	static eOpcodeResult WINAPI MATH_EXP(CScript *script);
	static eOpcodeResult WINAPI MATH_LOG(CScript *script);
	static eOpcodeResult WINAPI CALL_SCM_FUNCTION(CScript *script);
	static eOpcodeResult WINAPI SCM_FUNCTION_RET(CScript *script);
	static eOpcodeResult WINAPI GET_LABEL_OFFSET(CScript *script);
	static eOpcodeResult WINAPI GET_VAR_OFFSET(CScript *script);
	static eOpcodeResult WINAPI BIT_AND(CScript *script);
	static eOpcodeResult WINAPI BIT_OR(CScript *script);
	static eOpcodeResult WINAPI BIT_XOR(CScript *script);
	static eOpcodeResult WINAPI BIT_NOT(CScript *script);
	static eOpcodeResult WINAPI BIT_MOD(CScript *script);
	static eOpcodeResult WINAPI BIT_SHR(CScript *script);
	static eOpcodeResult WINAPI BIT_SHL(CScript *script);
	static eOpcodeResult WINAPI STORE_COORDS_FROM_OBJECT_WITH_OFFSET(CScript *script);
	static eOpcodeResult WINAPI STORE_COORDS_FROM_CAR_WITH_OFFSET(CScript *script);
	static eOpcodeResult WINAPI STORE_COORDS_FROM_ACTOR_WITH_OFFSET(CScript *script);
	static eOpcodeResult WINAPI STORE_PLAYER_CURRENTLY_ARMED_WEAPON(CScript *script);
	static eOpcodeResult WINAPI START_CUSTOM_THREAD_VSTRING(CScript *script);
	static eOpcodeResult WINAPI IS_BUTTON_PRESSED_ON_PAD(CScript *script);
	static eOpcodeResult WINAPI EMULATE_BUTTON_PRESS_ON_PAD(CScript *script);
	static eOpcodeResult WINAPI IS_CAMERA_IN_WIDESCREEN_MODE(CScript *script);
	static eOpcodeResult WINAPI GET_MODEL_ID_FROM_WEAPON_ID(CScript *script);
	static eOpcodeResult WINAPI GET_WEAPON_ID_FROM_MODEL_ID(CScript *script);
	static eOpcodeResult WINAPI SET_MEM_OFFSET(CScript *script);
	static eOpcodeResult WINAPI GET_CURRENT_WEATHER(CScript *script);
	static eOpcodeResult WINAPI SHOW_TEXT_POSITION(CScript *script);
	static eOpcodeResult WINAPI SHOW_FORMATTED_TEXT_POSITION(CScript *script);
	static eOpcodeResult WINAPI DRAW_SHADOW(CScript *script);
	static eOpcodeResult WINAPI SET_TEXT_DRAW_FONT(CScript *script);
	static eOpcodeResult WINAPI GET_CHAR_ARMOUR(CScript *script);
	static eOpcodeResult WINAPI PLAYER_DRIVING_PLANE(CScript *script);
	static eOpcodeResult WINAPI PLAYER_DRIVING_BOAT(CScript *script);
	static eOpcodeResult WINAPI PLAYER_DRIVING_HELI(CScript *script);
	static eOpcodeResult WINAPI PLAYER_DRIVING_A_MOTORBIKE(CScript *script);
	static eOpcodeResult WINAPI IS_PC_VERSION(CScript *script);
	static eOpcodeResult WINAPI IS_AUSTRALIAN_GAME(CScript *script);
	static eOpcodeResult WINAPI PLAY_ANIMATION(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0A8E(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0A8F(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0A90(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0A91(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0A99(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0A9A(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0A9B(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0A9C(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0A9D(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0A9E(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AA0(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AA1(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AA2(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AA3(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AA4(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AA9(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AAB(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AB3(CScript* script);
	static eOpcodeResult WINAPI OPCODE_0AB4(CScript* script);
	static eOpcodeResult WINAPI OPCODE_0AC8(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AC9(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0ACA(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0ACB(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0ACC(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0ACD(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0ACE(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0ACF(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AD0(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AD1(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AD3(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AD4(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AD5(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AD6(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AD7(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AD8(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AD9(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0ADA(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0ADB(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0ADC(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0ADD(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0ADE(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0ADF(CScript *script);
	static eOpcodeResult WINAPI OPCODE_0AE0(CScript *script);
public:
	static void Register();
	static tScriptVar SHARED_VAR[0xFFFF];
};