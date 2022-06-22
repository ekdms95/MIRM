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
	 * 		Name   -> Function TB_Craftsman_Upgrade.TB_Craftsman_Upgrade_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UTB_Craftsman_Upgrade_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Craftsman_Upgrade.TB_Craftsman_Upgrade_C.OnPreSet");
		
		UTB_Craftsman_Upgrade_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Craftsman_Upgrade.TB_Craftsman_Upgrade_C.BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_0_PopYesBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTB_Craftsman_Upgrade_C::BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_0_PopYesBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Craftsman_Upgrade.TB_Craftsman_Upgrade_C.BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_0_PopYesBtn__DelegateSignature");
		
		UTB_Craftsman_Upgrade_C_BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_0_PopYesBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Craftsman_Upgrade.TB_Craftsman_Upgrade_C.BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_1_PopNoBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTB_Craftsman_Upgrade_C::BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_1_PopNoBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Craftsman_Upgrade.TB_Craftsman_Upgrade_C.BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_1_PopNoBtn__DelegateSignature");
		
		UTB_Craftsman_Upgrade_C_BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_1_PopNoBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Craftsman_Upgrade.TB_Craftsman_Upgrade_C.ExecuteUbergraph_TB_Craftsman_Upgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTB_Craftsman_Upgrade_C::ExecuteUbergraph_TB_Craftsman_Upgrade(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Craftsman_Upgrade.TB_Craftsman_Upgrade_C.ExecuteUbergraph_TB_Craftsman_Upgrade");
		
		UTB_Craftsman_Upgrade_C_ExecuteUbergraph_TB_Craftsman_Upgrade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Craftsman_Upgrade.TB_Craftsman_Upgrade_C.UpgradeDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTB_Craftsman_Upgrade_C::UpgradeDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Craftsman_Upgrade.TB_Craftsman_Upgrade_C.UpgradeDispatcher__DelegateSignature");
		
		UTB_Craftsman_Upgrade_C_UpgradeDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Craftsman_Upgrade.TB_Craftsman_Upgrade_C.CloseDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTB_Craftsman_Upgrade_C::CloseDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Craftsman_Upgrade.TB_Craftsman_Upgrade_C.CloseDispatcher__DelegateSignature");
		
		UTB_Craftsman_Upgrade_C_CloseDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTB_Craftsman_Upgrade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTB_Craftsman_Upgrade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TB_Craftsman_Upgrade.TB_Craftsman_Upgrade_C");
		return ptr;
	}

}


