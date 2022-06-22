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
	 * 		Name   -> Function HUD_Name_Tag_NPC.HUD_Name_Tag_NPC_C.GetHPCanvas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirCanvasPanel*                             Canvas                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Name_Tag_NPC_C::GetHPCanvas(class UMirCanvasPanel** Canvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Name_Tag_NPC.HUD_Name_Tag_NPC_C.GetHPCanvas");
		
		UHUD_Name_Tag_NPC_C_GetHPCanvas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Canvas != nullptr)
			*Canvas = params.Canvas;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Name_Tag_NPC.HUD_Name_Tag_NPC_C.GetHPProgressImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirImage*                                   Image                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Name_Tag_NPC_C::GetHPProgressImage(class UMirImage** Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Name_Tag_NPC.HUD_Name_Tag_NPC_C.GetHPProgressImage");
		
		UHUD_Name_Tag_NPC_C_GetHPProgressImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image != nullptr)
			*Image = params.Image;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Name_Tag_NPC.HUD_Name_Tag_NPC_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Name_Tag_NPC_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Name_Tag_NPC.HUD_Name_Tag_NPC_C.PreConstruct");
		
		UHUD_Name_Tag_NPC_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Name_Tag_NPC.HUD_Name_Tag_NPC_C.SetCrimeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PartyMemeber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Name_Tag_NPC_C::SetCrimeValue(int32_t Value, bool PartyMemeber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Name_Tag_NPC.HUD_Name_Tag_NPC_C.SetCrimeValue");
		
		UHUD_Name_Tag_NPC_C_SetCrimeValue_Params params {};
		params.Value = Value;
		params.PartyMemeber = PartyMemeber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Name_Tag_NPC.HUD_Name_Tag_NPC_C.OnTextVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Name_Tag_NPC_C::OnTextVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Name_Tag_NPC.HUD_Name_Tag_NPC_C.OnTextVisible");
		
		UHUD_Name_Tag_NPC_C_OnTextVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Name_Tag_NPC.HUD_Name_Tag_NPC_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Name_Tag_NPC_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Name_Tag_NPC.HUD_Name_Tag_NPC_C.Construct");
		
		UHUD_Name_Tag_NPC_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Name_Tag_NPC.HUD_Name_Tag_NPC_C.ExecuteUbergraph_HUD_Name_Tag_NPC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Name_Tag_NPC_C::ExecuteUbergraph_HUD_Name_Tag_NPC(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Name_Tag_NPC.HUD_Name_Tag_NPC_C.ExecuteUbergraph_HUD_Name_Tag_NPC");
		
		UHUD_Name_Tag_NPC_C_ExecuteUbergraph_HUD_Name_Tag_NPC_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Name_Tag_NPC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Name_Tag_NPC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Name_Tag_NPC.HUD_Name_Tag_NPC_C");
		return ptr;
	}

}


