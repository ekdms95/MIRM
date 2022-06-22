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
	 * 		Name   -> PredefindFunction AReflection_Ora_Effect_1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AReflection_Ora_Effect_1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Reflection_Ora_Effect_2.Reflection_Ora_Effect_1_C");
		return ptr;
	}

}


