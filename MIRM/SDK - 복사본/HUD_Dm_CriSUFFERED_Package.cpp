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
	 * 		Name   -> Function HUD_Dm_CriSUFFERED.HUD_Dm_CriSUFFERED_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Dm_CriSUFFERED_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Dm_CriSUFFERED.HUD_Dm_CriSUFFERED_C.Construct");
		
		UHUD_Dm_CriSUFFERED_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Dm_CriSUFFERED.HUD_Dm_CriSUFFERED_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Dm_CriSUFFERED_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Dm_CriSUFFERED.HUD_Dm_CriSUFFERED_C.PreConstruct");
		
		UHUD_Dm_CriSUFFERED_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Dm_CriSUFFERED.HUD_Dm_CriSUFFERED_C.OnSetText
	 * 		Flags  -> ()
	 */
	void UHUD_Dm_CriSUFFERED_C::OnSetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Dm_CriSUFFERED.HUD_Dm_CriSUFFERED_C.OnSetText");
		
		UHUD_Dm_CriSUFFERED_C_OnSetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Dm_CriSUFFERED.HUD_Dm_CriSUFFERED_C.Destruct
	 * 		Flags  -> ()
	 */
	void UHUD_Dm_CriSUFFERED_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Dm_CriSUFFERED.HUD_Dm_CriSUFFERED_C.Destruct");
		
		UHUD_Dm_CriSUFFERED_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Dm_CriSUFFERED.HUD_Dm_CriSUFFERED_C.ExecuteUbergraph_HUD_Dm_CriSUFFERED
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Dm_CriSUFFERED_C::ExecuteUbergraph_HUD_Dm_CriSUFFERED(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Dm_CriSUFFERED.HUD_Dm_CriSUFFERED_C.ExecuteUbergraph_HUD_Dm_CriSUFFERED");
		
		UHUD_Dm_CriSUFFERED_C_ExecuteUbergraph_HUD_Dm_CriSUFFERED_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Dm_CriSUFFERED_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Dm_CriSUFFERED_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Dm_CriSUFFERED.HUD_Dm_CriSUFFERED_C");
		return ptr;
	}

}


