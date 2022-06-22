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
	 * 		Name   -> Function Hud_Noti_Element.Hud_Noti_Element_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UHud_Noti_Element_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Noti_Element.Hud_Noti_Element_C.OnPreSet");
		
		UHud_Noti_Element_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Noti_Element.Hud_Noti_Element_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Noti_Element_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Noti_Element.Hud_Noti_Element_C.Tick");
		
		UHud_Noti_Element_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Noti_Element.Hud_Noti_Element_C.BndEvt__MirButton_64_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Noti_Element_C::BndEvt__MirButton_64_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Noti_Element.Hud_Noti_Element_C.BndEvt__MirButton_64_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHud_Noti_Element_C_BndEvt__MirButton_64_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Noti_Element.Hud_Noti_Element_C.OnShow
	 * 		Flags  -> ()
	 */
	void UHud_Noti_Element_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Noti_Element.Hud_Noti_Element_C.OnShow");
		
		UHud_Noti_Element_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Noti_Element.Hud_Noti_Element_C.OnDestroyElement
	 * 		Flags  -> ()
	 */
	void UHud_Noti_Element_C::OnDestroyElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Noti_Element.Hud_Noti_Element_C.OnDestroyElement");
		
		UHud_Noti_Element_C_OnDestroyElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Noti_Element.Hud_Noti_Element_C.BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Noti_Element_C::BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Noti_Element.Hud_Noti_Element_C.BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature");
		
		UHud_Noti_Element_C_BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Noti_Element.Hud_Noti_Element_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Noti_Element_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Noti_Element.Hud_Noti_Element_C.PreConstruct");
		
		UHud_Noti_Element_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Noti_Element.Hud_Noti_Element_C.ExecuteUbergraph_Hud_Noti_Element
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Noti_Element_C::ExecuteUbergraph_Hud_Noti_Element(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Noti_Element.Hud_Noti_Element_C.ExecuteUbergraph_Hud_Noti_Element");
		
		UHud_Noti_Element_C_ExecuteUbergraph_Hud_Noti_Element_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_Noti_Element_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_Noti_Element_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_Noti_Element.Hud_Noti_Element_C");
		return ptr;
	}

}


