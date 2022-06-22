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
	 * 		Name   -> Function CM_Icon_Btn.CM_Icon_Btn_C.Btn_Img_Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Image_Size                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMargin                                     Margin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESlateBrushDrawType                                Draw_As                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Over                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Click                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     disable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Icon_Btn_C::Btn_Img_Set(const struct FVector2D& Image_Size, const struct FMargin& Margin, ESlateBrushDrawType Draw_As, class UObject* Normal, class UObject* Over, class UObject* Click, class UObject* disable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Icon_Btn.CM_Icon_Btn_C.Btn_Img_Set");
		
		UCM_Icon_Btn_C_Btn_Img_Set_Params params {};
		params.Image_Size = Image_Size;
		params.Margin = Margin;
		params.Draw_As = Draw_As;
		params.Normal = Normal;
		params.Over = Over;
		params.Click = Click;
		params.disable = disable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Icon_Btn.CM_Icon_Btn_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Icon_Btn_C::BndEvt__MirButton_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Icon_Btn.CM_Icon_Btn_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");
		
		UCM_Icon_Btn_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Icon_Btn.CM_Icon_Btn_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Icon_Btn_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Icon_Btn.CM_Icon_Btn_C.PreConstruct");
		
		UCM_Icon_Btn_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Icon_Btn.CM_Icon_Btn_C.OnReceivePrefabMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PrefabMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      PrefabParameters                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCM_Icon_Btn_C::OnReceivePrefabMessage(const class FName& PrefabMessage, const class FString& PrefabParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Icon_Btn.CM_Icon_Btn_C.OnReceivePrefabMessage");
		
		UCM_Icon_Btn_C_OnReceivePrefabMessage_Params params {};
		params.PrefabMessage = PrefabMessage;
		params.PrefabParameters = PrefabParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Icon_Btn.CM_Icon_Btn_C.OnChangeEnableState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Icon_Btn_C::OnChangeEnableState(bool IsDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Icon_Btn.CM_Icon_Btn_C.OnChangeEnableState");
		
		UCM_Icon_Btn_C_OnChangeEnableState_Params params {};
		params.IsDisabled = IsDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Icon_Btn.CM_Icon_Btn_C.ExecuteUbergraph_CM_Icon_Btn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Icon_Btn_C::ExecuteUbergraph_CM_Icon_Btn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Icon_Btn.CM_Icon_Btn_C.ExecuteUbergraph_CM_Icon_Btn");
		
		UCM_Icon_Btn_C_ExecuteUbergraph_CM_Icon_Btn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Icon_Btn.CM_Icon_Btn_C.Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Icon_Btn_C::Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Icon_Btn.CM_Icon_Btn_C.Click__DelegateSignature");
		
		UCM_Icon_Btn_C_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Icon_Btn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Icon_Btn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Icon_Btn.CM_Icon_Btn_C");
		return ptr;
	}

}


