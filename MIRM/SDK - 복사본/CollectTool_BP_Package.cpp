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
	 * 		Name   -> PredefindFunction ACollectTool_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACollectTool_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CollectTool_BP.CollectTool_BP_C");
		return ptr;
	}

}


