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
	 * 		Name   -> PredefindFunction AGinkgo_village_LoadTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGinkgo_village_LoadTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ginkgo_village_LoadTrigger.Ginkgo_village_LoadTrigger_C");
		return ptr;
	}

}


