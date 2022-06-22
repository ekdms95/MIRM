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
	 * 		Name   -> Function SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C.OnStartFlagAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StartTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USW_HUD_Siege_Map_Flag_C::OnStartFlagAnimation(float StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C.OnStartFlagAnimation");
		
		USW_HUD_Siege_Map_Flag_C_OnStartFlagAnimation_Params params {};
		params.StartTime = StartTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USW_HUD_Siege_Map_Flag_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C.PreConstruct");
		
		USW_HUD_Siege_Map_Flag_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C.FinishFlagAnim
	 * 		Flags  -> ()
	 */
	void USW_HUD_Siege_Map_Flag_C::FinishFlagAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C.FinishFlagAnim");
		
		USW_HUD_Siege_Map_Flag_C_FinishFlagAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C.OnStartFlagRoutineAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StartTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USW_HUD_Siege_Map_Flag_C::OnStartFlagRoutineAnimation(float StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C.OnStartFlagRoutineAnimation");
		
		USW_HUD_Siege_Map_Flag_C_OnStartFlagRoutineAnimation_Params params {};
		params.StartTime = StartTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C.ExecuteUbergraph_SW_HUD_Siege_Map_Flag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USW_HUD_Siege_Map_Flag_C::ExecuteUbergraph_SW_HUD_Siege_Map_Flag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C.ExecuteUbergraph_SW_HUD_Siege_Map_Flag");
		
		USW_HUD_Siege_Map_Flag_C_ExecuteUbergraph_SW_HUD_Siege_Map_Flag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USW_HUD_Siege_Map_Flag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USW_HUD_Siege_Map_Flag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C");
		return ptr;
	}

}


