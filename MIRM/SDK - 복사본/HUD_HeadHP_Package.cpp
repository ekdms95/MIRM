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
	 * 		Name   -> Function HUD_HeadHP.HUD_HeadHP_C.Gauge_Color_Set_Function
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Red_Gauge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_HeadHP_C::Gauge_Color_Set_Function(bool Red_Gauge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_HeadHP.HUD_HeadHP_C.Gauge_Color_Set_Function");
		
		UHUD_HeadHP_C_Gauge_Color_Set_Function_Params params {};
		params.Red_Gauge = Red_Gauge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_HeadHP.HUD_HeadHP_C.GetCanvas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirCanvasPanel*                             Canvas                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_HeadHP_C::GetCanvas(class UMirCanvasPanel** Canvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_HeadHP.HUD_HeadHP_C.GetCanvas");
		
		UHUD_HeadHP_C_GetCanvas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Canvas != nullptr)
			*Canvas = params.Canvas;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_HeadHP.HUD_HeadHP_C.GetHPProgressImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirImage*                                   Image                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_HeadHP_C::GetHPProgressImage(class UMirImage** Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_HeadHP.HUD_HeadHP_C.GetHPProgressImage");
		
		UHUD_HeadHP_C_GetHPProgressImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image != nullptr)
			*Image = params.Image;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_HeadHP.HUD_HeadHP_C.ExecuteUbergraph_HUD_HeadHP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_HeadHP_C::ExecuteUbergraph_HUD_HeadHP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_HeadHP.HUD_HeadHP_C.ExecuteUbergraph_HUD_HeadHP");
		
		UHUD_HeadHP_C_ExecuteUbergraph_HUD_HeadHP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_HeadHP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_HeadHP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_HeadHP.HUD_HeadHP_C");
		return ptr;
	}

}


