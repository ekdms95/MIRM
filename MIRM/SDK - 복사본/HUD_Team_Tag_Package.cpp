﻿/**
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
	 * 		Name   -> Function HUD_Team_Tag.HUD_Team_Tag_C.GetHPCanvas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirCanvasPanel*                             Canvas                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Team_Tag_C::GetHPCanvas(class UMirCanvasPanel** Canvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Team_Tag.HUD_Team_Tag_C.GetHPCanvas");
		
		UHUD_Team_Tag_C_GetHPCanvas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Canvas != nullptr)
			*Canvas = params.Canvas;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Team_Tag.HUD_Team_Tag_C.GetHPProgressImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirImage*                                   Image                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Team_Tag_C::GetHPProgressImage(class UMirImage** Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Team_Tag.HUD_Team_Tag_C.GetHPProgressImage");
		
		UHUD_Team_Tag_C_GetHPProgressImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image != nullptr)
			*Image = params.Image;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Team_Tag.HUD_Team_Tag_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UHUD_Team_Tag_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Team_Tag.HUD_Team_Tag_C.OnPreSet");
		
		UHUD_Team_Tag_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Team_Tag.HUD_Team_Tag_C.OnTextVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Team_Tag_C::OnTextVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Team_Tag.HUD_Team_Tag_C.OnTextVisible");
		
		UHUD_Team_Tag_C_OnTextVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Team_Tag.HUD_Team_Tag_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Team_Tag_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Team_Tag.HUD_Team_Tag_C.Construct");
		
		UHUD_Team_Tag_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Team_Tag.HUD_Team_Tag_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Team_Tag_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Team_Tag.HUD_Team_Tag_C.PreConstruct");
		
		UHUD_Team_Tag_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Team_Tag.HUD_Team_Tag_C.ExecuteUbergraph_HUD_Team_Tag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Team_Tag_C::ExecuteUbergraph_HUD_Team_Tag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Team_Tag.HUD_Team_Tag_C.ExecuteUbergraph_HUD_Team_Tag");
		
		UHUD_Team_Tag_C_ExecuteUbergraph_HUD_Team_Tag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Team_Tag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Team_Tag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Team_Tag.HUD_Team_Tag_C");
		return ptr;
	}

}


