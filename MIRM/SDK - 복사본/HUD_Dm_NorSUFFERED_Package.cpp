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
	 * 		Name   -> Function HUD_Dm_NorSUFFERED.HUD_Dm_NorSUFFERED_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Dm_NorSUFFERED_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Dm_NorSUFFERED.HUD_Dm_NorSUFFERED_C.PreConstruct");
		
		UHUD_Dm_NorSUFFERED_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Dm_NorSUFFERED.HUD_Dm_NorSUFFERED_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Dm_NorSUFFERED_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Dm_NorSUFFERED.HUD_Dm_NorSUFFERED_C.Construct");
		
		UHUD_Dm_NorSUFFERED_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Dm_NorSUFFERED.HUD_Dm_NorSUFFERED_C.OnSetText
	 * 		Flags  -> ()
	 */
	void UHUD_Dm_NorSUFFERED_C::OnSetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Dm_NorSUFFERED.HUD_Dm_NorSUFFERED_C.OnSetText");
		
		UHUD_Dm_NorSUFFERED_C_OnSetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Dm_NorSUFFERED.HUD_Dm_NorSUFFERED_C.Destruct
	 * 		Flags  -> ()
	 */
	void UHUD_Dm_NorSUFFERED_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Dm_NorSUFFERED.HUD_Dm_NorSUFFERED_C.Destruct");
		
		UHUD_Dm_NorSUFFERED_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Dm_NorSUFFERED.HUD_Dm_NorSUFFERED_C.ExecuteUbergraph_HUD_Dm_NorSUFFERED
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Dm_NorSUFFERED_C::ExecuteUbergraph_HUD_Dm_NorSUFFERED(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Dm_NorSUFFERED.HUD_Dm_NorSUFFERED_C.ExecuteUbergraph_HUD_Dm_NorSUFFERED");
		
		UHUD_Dm_NorSUFFERED_C_ExecuteUbergraph_HUD_Dm_NorSUFFERED_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Dm_NorSUFFERED_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Dm_NorSUFFERED_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Dm_NorSUFFERED.HUD_Dm_NorSUFFERED_C");
		return ptr;
	}

}


