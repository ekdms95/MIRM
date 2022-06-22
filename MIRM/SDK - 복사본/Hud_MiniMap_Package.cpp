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
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.GetUIMapSize2D
	 * 		Flags  -> ()
	 */
	struct FVector2D UHud_MiniMap_C::GetUIMapSize2D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.GetUIMapSize2D");
		
		UHud_MiniMap_C_GetUIMapSize2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.GetMapImage
	 * 		Flags  -> ()
	 */
	class UMirImage* UHud_MiniMap_C::GetMapImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.GetMapImage");
		
		UHud_MiniMap_C_GetMapImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.GetTextAreaName
	 * 		Flags  -> ()
	 */
	class UMirTextBlock* UHud_MiniMap_C::GetTextAreaName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.GetTextAreaName");
		
		UHud_MiniMap_C_GetTextAreaName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.GetTextCurPos
	 * 		Flags  -> ()
	 */
	class UMirTextBlock* UHud_MiniMap_C::GetTextCurPos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.GetTextCurPos");
		
		UHud_MiniMap_C_GetTextCurPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.OpenFieldMapPage
	 * 		Flags  -> ()
	 */
	void UHud_MiniMap_C::OpenFieldMapPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.OpenFieldMapPage");
		
		UHud_MiniMap_C_OpenFieldMapPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.Construct
	 * 		Flags  -> ()
	 */
	void UHud_MiniMap_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.Construct");
		
		UHud_MiniMap_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.SetSafetyZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            isSafety                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_MiniMap_C::SetSafetyZone(int32_t isSafety)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.SetSafetyZone");
		
		UHud_MiniMap_C_SetSafetyZone_Params params {};
		params.isSafety = isSafety;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__DungeonStoryBlock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_MiniMap_C::BndEvt__DungeonStoryBlock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__DungeonStoryBlock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UHud_MiniMap_C_BndEvt__DungeonStoryBlock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__Memory_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_MiniMap_C::BndEvt__Memory_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__Memory_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UHud_MiniMap_C_BndEvt__Memory_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__Memory_Btn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_MiniMap_C::BndEvt__Memory_Btn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__Memory_Btn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UHud_MiniMap_C_BndEvt__Memory_Btn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__Channel_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_MiniMap_C::BndEvt__Channel_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__Channel_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHud_MiniMap_C_BndEvt__Channel_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_MiniMap_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.Tick");
		
		UHud_MiniMap_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__MirButton_OpenWorldmap_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_MiniMap_C::BndEvt__MirButton_OpenWorldmap_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__MirButton_OpenWorldmap_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature");
		
		UHud_MiniMap_C_BndEvt__MirButton_OpenWorldmap_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_MiniMap_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.PreConstruct");
		
		UHud_MiniMap_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__Hud_MiniMap_Area_Tip_Btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_MiniMap_C::BndEvt__Hud_MiniMap_Area_Tip_Btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__Hud_MiniMap_Area_Tip_Btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UHud_MiniMap_C_BndEvt__Hud_MiniMap_Area_Tip_Btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_MiniMap.Hud_MiniMap_C.ExecuteUbergraph_Hud_MiniMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_MiniMap_C::ExecuteUbergraph_Hud_MiniMap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_MiniMap.Hud_MiniMap_C.ExecuteUbergraph_Hud_MiniMap");
		
		UHud_MiniMap_C_ExecuteUbergraph_Hud_MiniMap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_MiniMap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_MiniMap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_MiniMap.Hud_MiniMap_C");
		return ptr;
	}

}


