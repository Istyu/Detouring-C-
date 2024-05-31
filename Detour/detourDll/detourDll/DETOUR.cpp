#include "stdafx.h"
#include "DETOUR.h"

#define DETOURDECLARE(SPACE, NAME, ADDRESS) SPACE##::##NAME##_t SPACE##::##NAME = (SPACE##::##NAME##_t)(ADDRESS)

namespace DETOUR
{
#pragma region UNKN
	DETOURDECLARE(UNKN, ExecuteFunction, 0x401460);
#pragma endregion
}

/*
	Memory address 0x401460 is the address of the changeVarVal() function of the program.exe


	Function name			Segment		Start

	changeVarVal(void)		.text		0000000000401460
	_main					.text		0000000000401473
*/