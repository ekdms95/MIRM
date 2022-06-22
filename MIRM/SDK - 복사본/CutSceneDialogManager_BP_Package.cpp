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
	 * 		Name   -> Function CutSceneDialogManager_BP.CutSceneDialogManager_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACutSceneDialogManager_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CutSceneDialogManager_BP.CutSceneDialogManager_BP_C.ReceiveBeginPlay");
		
		ACutSceneDialogManager_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CutSceneDialogManager_BP.CutSceneDialogManager_BP_C.SetDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TalkerNameID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DialogID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACutSceneDialogManager_BP_C::SetDialog(int32_t TalkerNameID, int32_t DialogID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CutSceneDialogManager_BP.CutSceneDialogManager_BP_C.SetDialog");
		
		ACutSceneDialogManager_BP_C_SetDialog_Params params {};
		params.TalkerNameID = TalkerNameID;
		params.DialogID = DialogID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CutSceneDialogManager_BP.CutSceneDialogManager_BP_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ACutSceneDialogManager_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CutSceneDialogManager_BP.CutSceneDialogManager_BP_C.ReceiveDestroyed");
		
		ACutSceneDialogManager_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CutSceneDialogManager_BP.CutSceneDialogManager_BP_C.ExecuteUbergraph_CutSceneDialogManager_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACutSceneDialogManager_BP_C::ExecuteUbergraph_CutSceneDialogManager_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CutSceneDialogManager_BP.CutSceneDialogManager_BP_C.ExecuteUbergraph_CutSceneDialogManager_BP");
		
		ACutSceneDialogManager_BP_C_ExecuteUbergraph_CutSceneDialogManager_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ACutSceneDialogManager_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACutSceneDialogManager_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CutSceneDialogManager_BP.CutSceneDialogManager_BP_C");
		return ptr;
	}

}


