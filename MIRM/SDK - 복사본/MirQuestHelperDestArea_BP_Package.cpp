/**
 * Name: MIRM
 * Version: 0623
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AMirQuestHelperDestArea_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMirQuestHelperDestArea_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MirQuestHelperDestArea_BP.MirQuestHelperDestArea_BP_C");
		return ptr;
	}

}


