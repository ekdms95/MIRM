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
	 * 		Name   -> Function IA_Item_Element.IA_Item_Element_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UIA_Item_Element_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IA_Item_Element.IA_Item_Element_C.OnPreSet");
		
		UIA_Item_Element_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IA_Item_Element.IA_Item_Element_C.OnSetItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               succed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_GRADE                                            grade                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIA_Item_Element_C::OnSetItemInfo(bool succed, E_GRADE grade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IA_Item_Element.IA_Item_Element_C.OnSetItemInfo");
		
		UIA_Item_Element_C_OnSetItemInfo_Params params {};
		params.succed = succed;
		params.grade = grade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IA_Item_Element.IA_Item_Element_C.FinishEvent
	 * 		Flags  -> ()
	 */
	void UIA_Item_Element_C::FinishEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IA_Item_Element.IA_Item_Element_C.FinishEvent");
		
		UIA_Item_Element_C_FinishEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IA_Item_Element.IA_Item_Element_C.ExecuteUbergraph_IA_Item_Element
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIA_Item_Element_C::ExecuteUbergraph_IA_Item_Element(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IA_Item_Element.IA_Item_Element_C.ExecuteUbergraph_IA_Item_Element");
		
		UIA_Item_Element_C_ExecuteUbergraph_IA_Item_Element_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIA_Item_Element_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIA_Item_Element_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IA_Item_Element.IA_Item_Element_C");
		return ptr;
	}

}


