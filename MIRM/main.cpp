#include "pch.h"
#include "Globals.h"
#include "Utils.h"

void __fastcall HookedPe(UObject* obj, UFunction* func, void* pParams) {
	try {
		if (func) {
			std::string PrintFunc = func->GetFullName();
			if (GetAsyncKeyState(VK_DELETE)) {
				system("cls");
				Sleep(300);
				auto gWorld = (UWorld*)*(DWORD64*)(Offsets::Base + Offsets::gWorldOffset);
				auto MyVec = gWorld->OwningGameInstance->LocalPlayers[0]->PlayerController->Pawn->RootComponent->RelativeLocation;
				Utils::LogConsole("현재 내 위치 : %f %f %f\n", MyVec.X, MyVec.Y, MyVec.Z);
			}

			if (PrintFunc.find("Anim") == std::string::npos &&
				PrintFunc.find("Tick") == std::string::npos &&
				PrintFunc.find("Blueprint") == std::string::npos &&
				PrintFunc.find("Prefab") == std::string::npos &&
				PrintFunc.find("NavMesh") == std::string::npos &&
				PrintFunc.find("MirImage") == std::string::npos &&
				PrintFunc.find("Opacity") == std::string::npos &&
				PrintFunc.find("UMG") == std::string::npos &&
				PrintFunc.find("IsInOpenDungeon") == std::string::npos &&
				PrintFunc.find("SetIntensity") == std::string::npos &&
				PrintFunc.find("OnSetAlarmState") == std::string::npos &&
				PrintFunc.find("TimerEvent") == std::string::npos 
				) 
			{
				Utils::LogConsole("[ 0x%llX ]\n함수이름 : %s\n오브이름 : %s\n", obj, PrintFunc.c_str(), obj->GetFullName().c_str());
			}
		}
	}
	catch (...) {
	}
	Functions::vProcessEvent(obj, func, pParams);
}

void MainThread() {
	while (1) {
	}
}

void OnAttach() {
#ifdef DEBUGPRINT
	FILE* pFile = nullptr;
	AllocConsole();
	freopen_s(&pFile, "CONOUT$", "w", stdout);
#endif

	Offsets::dwProcessEvent = Offsets::Base + Offsets::gProcessEventOffset;
	Utils::LogConsole("Base : 0x%llX\n", Offsets::Base);
	Utils::LogConsole("dwProcessEvent = 0x%llX\n", Offsets::dwProcessEvent);

	Functions::vProcessEvent = (Functions::tProcessEvent)Offsets::dwProcessEvent;
	_wsetlocale(LC_ALL, L"Korean");
	if (CG::InitSdk(L"MirM-Win64-Shipping.exe", Offsets::gObjectsOffset, Offsets::gNamesOffset, Offsets::gWorldOffset)) {

		// 프로세스 이벤트 후킹.
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourAttach(&(PVOID&)Functions::vProcessEvent, HookedPe);
		DetourTransactionCommit();

		Utils::CreateFakeThread(MainThread);
	}

}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		Offsets::Base = (DWORD64)GetModuleHandleA("MirM-Win64-Shipping.exe");
		DisableThreadLibraryCalls(hModule);
		OnAttach();
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}