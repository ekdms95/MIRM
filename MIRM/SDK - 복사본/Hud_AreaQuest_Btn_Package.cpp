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
	 * 		Name   -> Function Hud_AreaQuest_Btn.Hud_AreaQuest_Btn_C.Construct
	 * 		Flags  -> ()
	 */
	void UHud_AreaQuest_Btn_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_AreaQuest_Btn.Hud_AreaQuest_Btn_C.Construct");
		
		UHud_AreaQuest_Btn_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_AreaQuest_Btn.Hud_AreaQuest_Btn_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_AreaQuest_Btn_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_AreaQuest_Btn.Hud_AreaQuest_Btn_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHud_AreaQuest_Btn_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_AreaQuest_Btn.Hud_AreaQuest_Btn_C.ExecuteUbergraph_Hud_AreaQuest_Btn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_AreaQuest_Btn_C::ExecuteUbergraph_Hud_AreaQuest_Btn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_AreaQuest_Btn.Hud_AreaQuest_Btn_C.ExecuteUbergraph_Hud_AreaQuest_Btn");
		
		UHud_AreaQuest_Btn_C_ExecuteUbergraph_Hud_AreaQuest_Btn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_AreaQuest_Btn.Hud_AreaQuest_Btn_C.ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_AreaQuest_Btn_C::ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_AreaQuest_Btn.Hud_AreaQuest_Btn_C.ClickDispatcher__DelegateSignature");
		
		UHud_AreaQuest_Btn_C_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_AreaQuest_Btn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_AreaQuest_Btn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_AreaQuest_Btn.Hud_AreaQuest_Btn_C");
		return ptr;
	}

}


