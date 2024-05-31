// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include "HookManager.h"

bool APIENTRY DllMain(HINSTANCE module, DWORD reason, LPVOID reserved)
{
    switch(reason)
    {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(module);
            CreateThread(nullptr, NULL, CreateDetour, nullptr, NULL, nullptr);
            break;
    }

    return true;
}

