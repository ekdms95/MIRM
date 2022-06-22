#include "Utils.h"

HANDLE Utils::CreateFakeThread(LPVOID Thread)
{
    DWORD64 ThreadAddress = (DWORD64)GetProcAddress(GetModuleHandleA("ntdll.dll"), "RtlSetThreadWorkOnBehalfTicket") + 0x70;
    CONTEXT ctx = { 0 };
    ctx.ContextFlags = CONTEXT_FULL;
    HANDLE tHand = CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)0x0, NULL, CREATE_SUSPENDED, NULL);
    GetThreadContext(tHand, &ctx);
    ctx.Rcx = (DWORD64)Thread;
    SetThreadContext(tHand, &ctx);
    ResumeThread(tHand);
    return tHand;
}

void Utils::LogConsole(std::string print, ...) {
#ifdef DEBUGPRINT

    va_list(args);
    va_start(args, print);

    std::string a = "[+] ";
    a = a + print;

    vprintf(a.c_str(), args);
    va_end(args);
#endif
}