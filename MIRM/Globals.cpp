#include "Globals.h"

namespace Offsets {
	DWORD64 Base = 0;
	DWORD64 gObjectsOffset = 0x63A5E60; // 48 8B 05 ?? ?? ?? ?? 48 8B 0C C8 48 8D 04 D1 EB
	DWORD64 gNamesOffset = 0x63696C0; // 48 8D 35 ?? ?? ?? ?? EB 16
	DWORD64 gWorldOffset = 0x64E85F8; // 48 8B 1D ?? ?? ?? ?? 48 85 DB 74 3B 41
	DWORD64 gProcessEventOffset = 0x1D70460; // 40 55 56 57 41 54 41 55 41 56 41 57 48 81 EC F0 ?? ?? ?? 48 8D 6C 24 30

	DWORD64 dwProcessEvent = 0;
}

namespace Functions {
	tProcessEvent vProcessEvent = nullptr;
}