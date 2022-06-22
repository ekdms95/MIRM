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
	 * 		Name   -> Function HUD_AreaTitle.HUD_AreaTitle_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_AreaTitle_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AreaTitle.HUD_AreaTitle_C.Construct");
		
		UHUD_AreaTitle_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_AreaTitle.HUD_AreaTitle_C.WidgetAnimationEvt_AreaTitleIn_ani_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UHUD_AreaTitle_C::WidgetAnimationEvt_AreaTitleIn_ani_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AreaTitle.HUD_AreaTitle_C.WidgetAnimationEvt_AreaTitleIn_ani_K2Node_WidgetAnimationEvent_1");
		
		UHUD_AreaTitle_C_WidgetAnimationEvt_AreaTitleIn_ani_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_AreaTitle.HUD_AreaTitle_C.OnReceivePrefabMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PrefabMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      PrefabParameters                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_AreaTitle_C::OnReceivePrefabMessage(const class FName& PrefabMessage, const class FString& PrefabParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AreaTitle.HUD_AreaTitle_C.OnReceivePrefabMessage");
		
		UHUD_AreaTitle_C_OnReceivePrefabMessage_Params params {};
		params.PrefabMessage = PrefabMessage;
		params.PrefabParameters = PrefabParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_AreaTitle.HUD_AreaTitle_C.ChangeAreaSector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMirAreaType                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_AreaTitle_C::ChangeAreaSector(EMirAreaType Type, const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AreaTitle.HUD_AreaTitle_C.ChangeAreaSector");
		
		UHUD_AreaTitle_C_ChangeAreaSector_Params params {};
		params.Type = Type;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_AreaTitle.HUD_AreaTitle_C.ExecuteUbergraph_HUD_AreaTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_AreaTitle_C::ExecuteUbergraph_HUD_AreaTitle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AreaTitle.HUD_AreaTitle_C.ExecuteUbergraph_HUD_AreaTitle");
		
		UHUD_AreaTitle_C_ExecuteUbergraph_HUD_AreaTitle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_AreaTitle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_AreaTitle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_AreaTitle.HUD_AreaTitle_C");
		return ptr;
	}

}


