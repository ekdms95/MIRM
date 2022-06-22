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
	 * 		Name   -> PredefindFunction UNameTag_Back_slot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNameTag_Back_slot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NameTag_Back_slot.NameTag_Back_slot_C");
		return ptr;
	}

}


