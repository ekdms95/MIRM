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
	 * 		Name   -> Function Ch_Info_Status_Tab.Ch_Info_Status_Tab_C.OnInitailizeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCh_Info_Status_Tab_C::OnInitailizeWidget(const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ch_Info_Status_Tab.Ch_Info_Status_Tab_C.OnInitailizeWidget");
		
		UCh_Info_Status_Tab_C_OnInitailizeWidget_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ch_Info_Status_Tab.Ch_Info_Status_Tab_C.OnChangeCflag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCFlagValues                                CFlagValues                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCh_Info_Status_Tab_C::OnChangeCflag(const struct FCFlagValues& CFlagValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ch_Info_Status_Tab.Ch_Info_Status_Tab_C.OnChangeCflag");
		
		UCh_Info_Status_Tab_C_OnChangeCflag_Params params {};
		params.CFlagValues = CFlagValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ch_Info_Status_Tab.Ch_Info_Status_Tab_C.ExecuteUbergraph_Ch_Info_Status_Tab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCh_Info_Status_Tab_C::ExecuteUbergraph_Ch_Info_Status_Tab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ch_Info_Status_Tab.Ch_Info_Status_Tab_C.ExecuteUbergraph_Ch_Info_Status_Tab");
		
		UCh_Info_Status_Tab_C_ExecuteUbergraph_Ch_Info_Status_Tab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCh_Info_Status_Tab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCh_Info_Status_Tab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Ch_Info_Status_Tab.Ch_Info_Status_Tab_C");
		return ptr;
	}

}


