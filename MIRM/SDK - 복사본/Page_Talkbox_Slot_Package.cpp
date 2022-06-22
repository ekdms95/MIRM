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
	 * 		Name   -> PredefindFunction UPage_Talkbox_Slot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPage_Talkbox_Slot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Page_Talkbox_Slot.Page_Talkbox_Slot_C");
		return ptr;
	}

}


