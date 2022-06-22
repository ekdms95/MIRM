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
	 * 		Name   -> Function CM_Btn.CM_Btn_C.Btn Size Setting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              W_size                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              H_size                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Btn_C::Btn_Size_Setting(float W_size, float H_size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.Btn Size Setting");
		
		UCM_Btn_C_Btn_Size_Setting_Params params {};
		params.W_size = W_size;
		params.H_size = H_size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn.CM_Btn_C.Btn_Img_Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Image_Size                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMargin                                     Margin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Over                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Press                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     disable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Text_visi                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Btn_C::Btn_Img_Set(const struct FVector2D& Image_Size, const struct FMargin& Margin, class UObject* Normal, class UObject* Over, class UObject* Press, class UObject* disable, ESlateVisibility Text_visi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.Btn_Img_Set");
		
		UCM_Btn_C_Btn_Img_Set_Params params {};
		params.Image_Size = Image_Size;
		params.Margin = Margin;
		params.Normal = Normal;
		params.Over = Over;
		params.Press = Press;
		params.disable = disable;
		params.Text_visi = Text_visi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn.CM_Btn_C.Btn_Size
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Btn_Size_List                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Btn_C::Btn_Size(const class FName& Btn_Size_List)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.Btn_Size");
		
		UCM_Btn_C_Btn_Size_Params params {};
		params.Btn_Size_List = Btn_Size_List;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn.CM_Btn_C.InitButton
	 * 		Flags  -> ()
	 */
	void UCM_Btn_C::InitButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.InitButton");
		
		UCM_Btn_C_InitButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn.CM_Btn_C.GetTextBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirTextBlock*                               Text                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Btn_C::GetTextBlock(class UMirTextBlock** Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.GetTextBlock");
		
		UCM_Btn_C_GetTextBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn.CM_Btn_C.YesNoFx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               YesNoBtnChanger                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Btn_C::YesNoFx(bool YesNoBtnChanger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.YesNoFx");
		
		UCM_Btn_C_YesNoFx_Params params {};
		params.YesNoBtnChanger = YesNoBtnChanger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn.CM_Btn_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCM_Btn_C::SetText(const class FText& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.SetText");
		
		UCM_Btn_C_SetText_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn.CM_Btn_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Btn_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.PreConstruct");
		
		UCM_Btn_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn.CM_Btn_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Btn_C::BndEvt__MirButton_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UCM_Btn_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn.CM_Btn_C.OnChangeCflag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCFlagValues                                CFlagValues                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCM_Btn_C::OnChangeCflag(const struct FCFlagValues& CFlagValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.OnChangeCflag");
		
		UCM_Btn_C_OnChangeCflag_Params params {};
		params.CFlagValues = CFlagValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn.CM_Btn_C.OnReceivePrefabMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PrefabMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      PrefabParameters                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCM_Btn_C::OnReceivePrefabMessage(const class FName& PrefabMessage, const class FString& PrefabParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.OnReceivePrefabMessage");
		
		UCM_Btn_C_OnReceivePrefabMessage_Params params {};
		params.PrefabMessage = PrefabMessage;
		params.PrefabParameters = PrefabParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn.CM_Btn_C.Construct
	 * 		Flags  -> ()
	 */
	void UCM_Btn_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.Construct");
		
		UCM_Btn_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn.CM_Btn_C.BndEvt__CM_Btn_CMBtn_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Btn_C::BndEvt__CM_Btn_CMBtn_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.BndEvt__CM_Btn_CMBtn_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UCM_Btn_C_BndEvt__CM_Btn_CMBtn_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn.CM_Btn_C.OnChangeEnableState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Btn_C::OnChangeEnableState(bool IsDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.OnChangeEnableState");
		
		UCM_Btn_C_OnChangeEnableState_Params params {};
		params.IsDisabled = IsDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn.CM_Btn_C.ExecuteUbergraph_CM_Btn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Btn_C::ExecuteUbergraph_CM_Btn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.ExecuteUbergraph_CM_Btn");
		
		UCM_Btn_C_ExecuteUbergraph_CM_Btn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn.CM_Btn_C.ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Btn_C::ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn.CM_Btn_C.ClickDispatcher__DelegateSignature");
		
		UCM_Btn_C_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Btn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Btn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Btn.CM_Btn_C");
		return ptr;
	}

}


