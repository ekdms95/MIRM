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
	 * 		Name   -> Function CM_Image_Icon_Option_btn.CM_Image_Icon_Option_btn_C.BndEvt__CM_Image_Icon_Refresh_btn_K2Node_ComponentBoundEvent_0_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Image_Icon_Option_btn_C::BndEvt__CM_Image_Icon_Refresh_btn_K2Node_ComponentBoundEvent_0_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Image_Icon_Option_btn.CM_Image_Icon_Option_btn_C.BndEvt__CM_Image_Icon_Refresh_btn_K2Node_ComponentBoundEvent_0_Click__DelegateSignature");
		
		UCM_Image_Icon_Option_btn_C_BndEvt__CM_Image_Icon_Refresh_btn_K2Node_ComponentBoundEvent_0_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Image_Icon_Option_btn.CM_Image_Icon_Option_btn_C.ExecuteUbergraph_CM_Image_Icon_Option_btn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Image_Icon_Option_btn_C::ExecuteUbergraph_CM_Image_Icon_Option_btn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Image_Icon_Option_btn.CM_Image_Icon_Option_btn_C.ExecuteUbergraph_CM_Image_Icon_Option_btn");
		
		UCM_Image_Icon_Option_btn_C_ExecuteUbergraph_CM_Image_Icon_Option_btn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Image_Icon_Option_btn.CM_Image_Icon_Option_btn_C.Option_ClicK_Dispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Image_Icon_Option_btn_C::Option_ClicK_Dispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Image_Icon_Option_btn.CM_Image_Icon_Option_btn_C.Option_ClicK_Dispatch__DelegateSignature");
		
		UCM_Image_Icon_Option_btn_C_Option_ClicK_Dispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Image_Icon_Option_btn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Image_Icon_Option_btn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Image_Icon_Option_btn.CM_Image_Icon_Option_btn_C");
		return ptr;
	}

}


