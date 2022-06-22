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
	 * 		Name   -> Function TB_Craftsman_Already.TB_Craftsman_Already_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UTB_Craftsman_Already_C::SetData(const class FString& Title, const class FString& Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Craftsman_Already.TB_Craftsman_Already_C.SetData");
		
		UTB_Craftsman_Already_C_SetData_Params params {};
		params.Title = Title;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Craftsman_Already.TB_Craftsman_Already_C.BndEvt__TB_Craftsman_Already_K2Node_ComponentBoundEvent_0_PopYesBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTB_Craftsman_Already_C::BndEvt__TB_Craftsman_Already_K2Node_ComponentBoundEvent_0_PopYesBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Craftsman_Already.TB_Craftsman_Already_C.BndEvt__TB_Craftsman_Already_K2Node_ComponentBoundEvent_0_PopYesBtn__DelegateSignature");
		
		UTB_Craftsman_Already_C_BndEvt__TB_Craftsman_Already_K2Node_ComponentBoundEvent_0_PopYesBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Craftsman_Already.TB_Craftsman_Already_C.ExecuteUbergraph_TB_Craftsman_Already
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTB_Craftsman_Already_C::ExecuteUbergraph_TB_Craftsman_Already(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Craftsman_Already.TB_Craftsman_Already_C.ExecuteUbergraph_TB_Craftsman_Already");
		
		UTB_Craftsman_Already_C_ExecuteUbergraph_TB_Craftsman_Already_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Craftsman_Already.TB_Craftsman_Already_C.CloseDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTB_Craftsman_Already_C::CloseDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Craftsman_Already.TB_Craftsman_Already_C.CloseDispatcher__DelegateSignature");
		
		UTB_Craftsman_Already_C_CloseDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTB_Craftsman_Already_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTB_Craftsman_Already_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TB_Craftsman_Already.TB_Craftsman_Already_C");
		return ptr;
	}

}


