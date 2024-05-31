#include "stdafx.h"
#include "HookManager.h"
#include <future>

#include "ProgramManager.h"


DWORD WINAPI CreateDetour(LPVOID lpvoid)
{
	ProgramManager::call_changeVarVal();

	return 0;
}