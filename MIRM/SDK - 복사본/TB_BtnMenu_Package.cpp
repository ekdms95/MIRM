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
	 * 		Name   -> Function TB_BtnMenu.TB_BtnMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UTB_BtnMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_BtnMenu.TB_BtnMenu_C.Construct");
		
		UTB_BtnMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_BtnMenu.TB_BtnMenu_C.BndEvt__TalkBox_Quest_Btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTB_BtnMenu_C::BndEvt__TalkBox_Quest_Btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_BtnMenu.TB_BtnMenu_C.BndEvt__TalkBox_Quest_Btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature");
		
		UTB_BtnMenu_C_BndEvt__TalkBox_Quest_Btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_BtnMenu.TB_BtnMenu_C.ExecuteUbergraph_TB_BtnMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTB_BtnMenu_C::ExecuteUbergraph_TB_BtnMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_BtnMenu.TB_BtnMenu_C.ExecuteUbergraph_TB_BtnMenu");
		
		UTB_BtnMenu_C_ExecuteUbergraph_TB_BtnMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTB_BtnMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTB_BtnMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TB_BtnMenu.TB_BtnMenu_C");
		return ptr;
	}

}


