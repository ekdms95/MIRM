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
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.SetFavorabilityRewardVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWFMap_Icon_C::SetFavorabilityRewardVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.SetFavorabilityRewardVisibility");
		
		UWFMap_Icon_C_SetFavorabilityRewardVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.SetIconImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ImagePath                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWFMap_Icon_C::SetIconImage(const class FString& ImagePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.SetIconImage");
		
		UWFMap_Icon_C_SetIconImage_Params params {};
		params.ImagePath = ImagePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.SetQuestionIconPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strIconPath                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWFMap_Icon_C::SetQuestionIconPath(const class FString& strIconPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.SetQuestionIconPath");
		
		UWFMap_Icon_C_SetQuestionIconPath_Params params {};
		params.strIconPath = strIconPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.SetExclamationIconPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strIconPath                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWFMap_Icon_C::SetExclamationIconPath(const class FString& strIconPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.SetExclamationIconPath");
		
		UWFMap_Icon_C_SetExclamationIconPath_Params params {};
		params.strIconPath = strIconPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.SetAreaTextStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAreaType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWFMap_Icon_C::SetAreaTextStyle(bool bAreaType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.SetAreaTextStyle");
		
		UWFMap_Icon_C_SetAreaTextStyle_Params params {};
		params.bAreaType = bAreaType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.SetTalkIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWFMap_Icon_C::SetTalkIconVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.SetTalkIconVisibility");
		
		UWFMap_Icon_C_SetTalkIconVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.SetNameTextVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWFMap_Icon_C::SetNameTextVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.SetNameTextVisibility");
		
		UWFMap_Icon_C_SetNameTextVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.SetExclamationIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWFMap_Icon_C::SetExclamationIconVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.SetExclamationIconVisibility");
		
		UWFMap_Icon_C_SetExclamationIconVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.SetNormalIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWFMap_Icon_C::SetNormalIconVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.SetNormalIconVisibility");
		
		UWFMap_Icon_C_SetNormalIconVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.SetQuestionIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWFMap_Icon_C::SetQuestionIconVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.SetQuestionIconVisibility");
		
		UWFMap_Icon_C_SetQuestionIconVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.SetImageBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWFMap_Icon_C::SetImageBrush(const struct FSlateBrush& Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.SetImageBrush");
		
		UWFMap_Icon_C_SetImageBrush_Params params {};
		params.Brush = Brush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.SetNameInText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        strText                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWFMap_Icon_C::SetNameInText(const class FText& strText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.SetNameInText");
		
		UWFMap_Icon_C_SetNameInText_Params params {};
		params.strText = strText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.OnSelectEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWFMap_Icon_C::OnSelectEffect(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.OnSelectEffect");
		
		UWFMap_Icon_C_OnSelectEffect_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWFMap_Icon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.PreConstruct");
		
		UWFMap_Icon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWFMap_Icon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.Tick");
		
		UWFMap_Icon_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WFMap_Icon.WFMap_Icon_C.ExecuteUbergraph_WFMap_Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWFMap_Icon_C::ExecuteUbergraph_WFMap_Icon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WFMap_Icon.WFMap_Icon_C.ExecuteUbergraph_WFMap_Icon");
		
		UWFMap_Icon_C_ExecuteUbergraph_WFMap_Icon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWFMap_Icon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWFMap_Icon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WFMap_Icon.WFMap_Icon_C");
		return ptr;
	}

}


