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
	 * 		Name   -> Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.Btn_Color_set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Image_Size                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Nor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Over                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Press                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Dis                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_PkStatus_Profile_C::Btn_Color_set(const struct FVector2D& Image_Size, class UObject* Nor, class UObject* Over, class UObject* Press, class UObject* Dis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.Btn_Color_set");
		
		UHud_PkStatus_Profile_C_Btn_Color_set_Params params {};
		params.Image_Size = Image_Size;
		params.Nor = Nor;
		params.Over = Over;
		params.Press = Press;
		params.Dis = Dis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.Pk_Status_Color_Tint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_PkStatus_Profile_C::Pk_Status_Color_Tint(class UObject* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.Pk_Status_Color_Tint");
		
		UHud_PkStatus_Profile_C_Pk_Status_Color_Tint_Params params {};
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            stringindex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_PkStatus_Profile_C::SetText(int32_t stringindex, const class FName& Style)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.SetText");
		
		UHud_PkStatus_Profile_C_SetText_Params params {};
		params.stringindex = stringindex;
		params.Style = Style;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.BndEvt__MirButton_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_PkStatus_Profile_C::BndEvt__MirButton_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.BndEvt__MirButton_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHud_PkStatus_Profile_C_BndEvt__MirButton_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.OnSetPkStatusProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_PK_TYPE                                          pk_type                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_PkStatus_Profile_C::OnSetPkStatusProfile(E_PK_TYPE pk_type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.OnSetPkStatusProfile");
		
		UHud_PkStatus_Profile_C_OnSetPkStatusProfile_Params params {};
		params.pk_type = pk_type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_PkStatus_Profile_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.PreConstruct");
		
		UHud_PkStatus_Profile_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.ExecuteUbergraph_Hud_PkStatus_Profile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_PkStatus_Profile_C::ExecuteUbergraph_Hud_PkStatus_Profile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.ExecuteUbergraph_Hud_PkStatus_Profile");
		
		UHud_PkStatus_Profile_C_ExecuteUbergraph_Hud_PkStatus_Profile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_PkStatus_Profile_C::ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.ClickDispatcher__DelegateSignature");
		
		UHud_PkStatus_Profile_C_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_PkStatus_Profile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_PkStatus_Profile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_PkStatus_Profile.Hud_PkStatus_Profile_C");
		return ptr;
	}

}


