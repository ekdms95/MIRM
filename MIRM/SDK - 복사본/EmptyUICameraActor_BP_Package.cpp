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
	 * 		Name   -> PredefindFunction AEmptyUICameraActor_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEmptyUICameraActor_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EmptyUICameraActor_BP.EmptyUICameraActor_BP_C");
		return ptr;
	}

}


