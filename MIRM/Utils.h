#pragma once
#include "../pch.h"

#define Delay(x, y) std::this_thread::sleep_for(std::chrono::milliseconds(Utils::Random(x, y)))
#define DEBUGPRINT

enum class CColor : WORD {
	NONE = 0,
	GREEN = 10,
	YELLOW = 14,
	WHITE = 15,
	PINK = 13,
	RED = 12,
	SKY = 11
};

class Utils {
private:
protected:
public:
	static HANDLE CreateFakeThread(LPVOID Thread);
	static void LogConsole(std::string print, ...);
};