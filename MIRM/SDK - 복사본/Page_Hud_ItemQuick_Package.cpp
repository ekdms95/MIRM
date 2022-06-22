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
	 * 		Name   -> Function Page_Hud_ItemQuick.Page_Hud_ItemQuick_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Hud_ItemQuick_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_ItemQuick.Page_Hud_ItemQuick_C.PreConstruct");
		
		UPage_Hud_ItemQuick_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_ItemQuick.Page_Hud_ItemQuick_C.ExecuteUbergraph_Page_Hud_ItemQuick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Hud_ItemQuick_C::ExecuteUbergraph_Page_Hud_ItemQuick(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_ItemQuick.Page_Hud_ItemQuick_C.ExecuteUbergraph_Page_Hud_ItemQuick");
		
		UPage_Hud_ItemQuick_C_ExecuteUbergraph_Page_Hud_ItemQuick_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPage_Hud_ItemQuick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPage_Hud_ItemQuick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Page_Hud_ItemQuick.Page_Hud_ItemQuick_C");
		return ptr;
	}

}


