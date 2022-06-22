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
	 * 		Name   -> Function Hud_MiniMap_Pop.Hud_MiniMap_Pop_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_MiniMap_Pop_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap_Pop.Hud_MiniMap_Pop_C.PreConstruct");
		
		UHud_MiniMap_Pop_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap_Pop.Hud_MiniMap_Pop_C.BndEvt__Hud_MiniMap_Pop_CM_Btn_Close_K2Node_ComponentBoundEvent_0_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_MiniMap_Pop_C::BndEvt__Hud_MiniMap_Pop_CM_Btn_Close_K2Node_ComponentBoundEvent_0_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap_Pop.Hud_MiniMap_Pop_C.BndEvt__Hud_MiniMap_Pop_CM_Btn_Close_K2Node_ComponentBoundEvent_0_Click__DelegateSignature");
		
		UHud_MiniMap_Pop_C_BndEvt__Hud_MiniMap_Pop_CM_Btn_Close_K2Node_ComponentBoundEvent_0_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap_Pop.Hud_MiniMap_Pop_C.OnSetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHud_MiniMap_Pop_C::OnSetActive(bool IsActive, const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap_Pop.Hud_MiniMap_Pop_C.OnSetActive");
		
		UHud_MiniMap_Pop_C_OnSetActive_Params params {};
		params.IsActive = IsActive;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap_Pop.Hud_MiniMap_Pop_C.OnSetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_MiniMap_Pop_C::OnSetVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap_Pop.Hud_MiniMap_Pop_C.OnSetVisible");
		
		UHud_MiniMap_Pop_C_OnSetVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap_Pop.Hud_MiniMap_Pop_C.BndEvt__Hud_MiniMap_Pop_MirButton_49_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_MiniMap_Pop_C::BndEvt__Hud_MiniMap_Pop_MirButton_49_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap_Pop.Hud_MiniMap_Pop_C.BndEvt__Hud_MiniMap_Pop_MirButton_49_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UHud_MiniMap_Pop_C_BndEvt__Hud_MiniMap_Pop_MirButton_49_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap_Pop.Hud_MiniMap_Pop_C.ExecuteUbergraph_Hud_MiniMap_Pop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_MiniMap_Pop_C::ExecuteUbergraph_Hud_MiniMap_Pop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap_Pop.Hud_MiniMap_Pop_C.ExecuteUbergraph_Hud_MiniMap_Pop");
		
		UHud_MiniMap_Pop_C_ExecuteUbergraph_Hud_MiniMap_Pop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_MiniMap_Pop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_MiniMap_Pop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_MiniMap_Pop.Hud_MiniMap_Pop_C");
		return ptr;
	}

}


