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
	 * 		Name   -> PredefindFunction UPalyer_ReviveRequest_MarkWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPalyer_ReviveRequest_MarkWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Palyer_ReviveRequest_MarkWidget.Palyer_ReviveRequest_MarkWidget_C");
		return ptr;
	}

}


