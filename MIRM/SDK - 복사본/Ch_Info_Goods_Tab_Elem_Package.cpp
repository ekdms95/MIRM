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
	 * 		Name   -> Function Ch_Info_Goods_Tab_Elem.Ch_Info_Goods_Tab_Elem_C.BndEvt__Ch_Info_Goods_Tab_Elem_Ch_Info_Status_Tab_Elem_K2Node_ComponentBoundEvent_1_OnClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCh_Info_Goods_Tab_Elem_C::BndEvt__Ch_Info_Goods_Tab_Elem_Ch_Info_Status_Tab_Elem_K2Node_ComponentBoundEvent_1_OnClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ch_Info_Goods_Tab_Elem.Ch_Info_Goods_Tab_Elem_C.BndEvt__Ch_Info_Goods_Tab_Elem_Ch_Info_Status_Tab_Elem_K2Node_ComponentBoundEvent_1_OnClickDispatcher__DelegateSignature");
		
		UCh_Info_Goods_Tab_Elem_C_BndEvt__Ch_Info_Goods_Tab_Elem_Ch_Info_Status_Tab_Elem_K2Node_ComponentBoundEvent_1_OnClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ch_Info_Goods_Tab_Elem.Ch_Info_Goods_Tab_Elem_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UCh_Info_Goods_Tab_Elem_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ch_Info_Goods_Tab_Elem.Ch_Info_Goods_Tab_Elem_C.OnPreSet");
		
		UCh_Info_Goods_Tab_Elem_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ch_Info_Goods_Tab_Elem.Ch_Info_Goods_Tab_Elem_C.ExecuteUbergraph_Ch_Info_Goods_Tab_Elem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCh_Info_Goods_Tab_Elem_C::ExecuteUbergraph_Ch_Info_Goods_Tab_Elem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ch_Info_Goods_Tab_Elem.Ch_Info_Goods_Tab_Elem_C.ExecuteUbergraph_Ch_Info_Goods_Tab_Elem");
		
		UCh_Info_Goods_Tab_Elem_C_ExecuteUbergraph_Ch_Info_Goods_Tab_Elem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCh_Info_Goods_Tab_Elem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCh_Info_Goods_Tab_Elem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Ch_Info_Goods_Tab_Elem.Ch_Info_Goods_Tab_Elem_C");
		return ptr;
	}

}


