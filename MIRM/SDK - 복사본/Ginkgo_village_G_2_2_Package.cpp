﻿/**
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
	 * 		Name   -> PredefindFunction AGinkgo_village_G_2_2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGinkgo_village_G_2_2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ginkgo_village_G_2_2.Ginkgo_village_G_2-2_C");
		return ptr;
	}

}


