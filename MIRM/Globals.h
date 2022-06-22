#pragma once
#include "../pch.h"

namespace Offsets {
	extern DWORD64 Base;
	extern DWORD64 gObjectsOffset; // 48 8B 05 ?? ?? ?? ?? 48 8B 0C C8 48 8D 04 D1 EB
	extern DWORD64 gNamesOffset; // 48 8B 05 ?? ?? ?? ?? 48 85 C0 75 5F // 48 8D 35 ?? ?? ?? ?? EB 16
	extern DWORD64 gWorldOffset; // 48 8B 1D ?? ?? ?? ?? 48 85 DB 74 3B 41
	extern DWORD64 gProcessEventOffset; // 40 55 56 57 41 54 41 55 41 56 41 57 48 81 EC F0 ?? ?? ?? 48 8D 6C 24 30

	extern DWORD64 dwProcessEvent;
}

namespace Functions {
	typedef void(__fastcall* tProcessEvent)(class UObject*, class UFunction*, void*);
	extern tProcessEvent vProcessEvent;
}