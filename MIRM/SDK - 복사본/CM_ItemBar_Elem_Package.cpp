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
	 * 		Name   -> PredefindFunction UCM_ItemBar_Elem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_ItemBar_Elem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_ItemBar_Elem.CM_ItemBar_Elem_C");
		return ptr;
	}

}


