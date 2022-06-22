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
	 * 		Name   -> Function Hud_15_Recruit.Hud_15_Recruit_C.BndEvt__Hud_15_Recruit_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_15_Recruit_C::BndEvt__Hud_15_Recruit_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_15_Recruit.Hud_15_Recruit_C.BndEvt__Hud_15_Recruit_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHud_15_Recruit_C_BndEvt__Hud_15_Recruit_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_15_Recruit.Hud_15_Recruit_C.Construct
	 * 		Flags  -> ()
	 */
	void UHud_15_Recruit_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_15_Recruit.Hud_15_Recruit_C.Construct");
		
		UHud_15_Recruit_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_15_Recruit.Hud_15_Recruit_C.PrintEntryPossible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPossible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_15_Recruit_C::PrintEntryPossible(bool bIsPossible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_15_Recruit.Hud_15_Recruit_C.PrintEntryPossible");
		
		UHud_15_Recruit_C_PrintEntryPossible_Params params {};
		params.bIsPossible = bIsPossible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_15_Recruit.Hud_15_Recruit_C.ExecuteUbergraph_Hud_15_Recruit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_15_Recruit_C::ExecuteUbergraph_Hud_15_Recruit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_15_Recruit.Hud_15_Recruit_C.ExecuteUbergraph_Hud_15_Recruit");
		
		UHud_15_Recruit_C_ExecuteUbergraph_Hud_15_Recruit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_15_Recruit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_15_Recruit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_15_Recruit.Hud_15_Recruit_C");
		return ptr;
	}

}


