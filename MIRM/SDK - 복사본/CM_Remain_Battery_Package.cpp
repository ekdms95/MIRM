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
	 * 		Name   -> Function CM_Remain_Battery.CM_Remain_Battery_C.Battery_Bar_set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   Bar_01                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Bar_02                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Bar_03                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Bar_04                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   charge                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                _04Img_color                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Remain_Battery_C::Battery_Bar_set(ESlateVisibility Bar_01, ESlateVisibility Bar_02, ESlateVisibility Bar_03, ESlateVisibility Bar_04, ESlateVisibility charge, const struct FLinearColor& _04Img_color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Remain_Battery.CM_Remain_Battery_C.Battery_Bar_set");
		
		UCM_Remain_Battery_C_Battery_Bar_set_Params params {};
		params.Bar_01 = Bar_01;
		params.Bar_02 = Bar_02;
		params.Bar_03 = Bar_03;
		params.Bar_04 = Bar_04;
		params.charge = charge;
		params._04Img_color = _04Img_color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Remain_Battery.CM_Remain_Battery_C.ExecuteUbergraph_CM_Remain_Battery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Remain_Battery_C::ExecuteUbergraph_CM_Remain_Battery(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Remain_Battery.CM_Remain_Battery_C.ExecuteUbergraph_CM_Remain_Battery");
		
		UCM_Remain_Battery_C_ExecuteUbergraph_CM_Remain_Battery_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Remain_Battery_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Remain_Battery_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Remain_Battery.CM_Remain_Battery_C");
		return ptr;
	}

}


