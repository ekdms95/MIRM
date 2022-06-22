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
	 * 		Name   -> Function HUD_Key_Mapping_Guide_Elem.HUD_Key_Mapping_Guide_Elem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Key_Mapping_Guide_Elem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Key_Mapping_Guide_Elem.HUD_Key_Mapping_Guide_Elem_C.PreConstruct");
		
		UHUD_Key_Mapping_Guide_Elem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Key_Mapping_Guide_Elem.HUD_Key_Mapping_Guide_Elem_C.OnInitailizeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_Key_Mapping_Guide_Elem_C::OnInitailizeWidget(const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Key_Mapping_Guide_Elem.HUD_Key_Mapping_Guide_Elem_C.OnInitailizeWidget");
		
		UHUD_Key_Mapping_Guide_Elem_C_OnInitailizeWidget_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Key_Mapping_Guide_Elem.HUD_Key_Mapping_Guide_Elem_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Key_Mapping_Guide_Elem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Key_Mapping_Guide_Elem.HUD_Key_Mapping_Guide_Elem_C.Construct");
		
		UHUD_Key_Mapping_Guide_Elem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Key_Mapping_Guide_Elem.HUD_Key_Mapping_Guide_Elem_C.ExecuteUbergraph_HUD_Key_Mapping_Guide_Elem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Key_Mapping_Guide_Elem_C::ExecuteUbergraph_HUD_Key_Mapping_Guide_Elem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Key_Mapping_Guide_Elem.HUD_Key_Mapping_Guide_Elem_C.ExecuteUbergraph_HUD_Key_Mapping_Guide_Elem");
		
		UHUD_Key_Mapping_Guide_Elem_C_ExecuteUbergraph_HUD_Key_Mapping_Guide_Elem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Key_Mapping_Guide_Elem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Key_Mapping_Guide_Elem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Key_Mapping_Guide_Elem.HUD_Key_Mapping_Guide_Elem_C");
		return ptr;
	}

}


