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
	 * 		Name   -> Function NPC_BP.NPC_BP_C.SetCameraZoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isZoom                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANPC_BP_C::SetCameraZoom(bool isZoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_BP.NPC_BP_C.SetCameraZoom");
		
		ANPC_BP_C_SetCameraZoom_Params params {};
		params.isZoom = isZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_BP.NPC_BP_C.GetBillboardRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANPC_BP_C::GetBillboardRotator(struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_BP.NPC_BP_C.GetBillboardRotator");
		
		ANPC_BP_C_GetBillboardRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_BP.NPC_BP_C.OnSetBoneShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBoneShake                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANPC_BP_C::OnSetBoneShake(bool IsBoneShake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_BP.NPC_BP_C.OnSetBoneShake");
		
		ANPC_BP_C_OnSetBoneShake_Params params {};
		params.IsBoneShake = IsBoneShake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_BP.NPC_BP_C.OnAfterPossessed
	 * 		Flags  -> ()
	 */
	void ANPC_BP_C::OnAfterPossessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_BP.NPC_BP_C.OnAfterPossessed");
		
		ANPC_BP_C_OnAfterPossessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_BP.NPC_BP_C.OnBeforeUnPossessed
	 * 		Flags  -> ()
	 */
	void ANPC_BP_C::OnBeforeUnPossessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_BP.NPC_BP_C.OnBeforeUnPossessed");
		
		ANPC_BP_C_OnBeforeUnPossessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_BP.NPC_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ANPC_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_BP.NPC_BP_C.ReceiveBeginPlay");
		
		ANPC_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_BP.NPC_BP_C.ExecuteUbergraph_NPC_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANPC_BP_C::ExecuteUbergraph_NPC_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_BP.NPC_BP_C.ExecuteUbergraph_NPC_BP");
		
		ANPC_BP_C_ExecuteUbergraph_NPC_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ANPC_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANPC_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NPC_BP.NPC_BP_C");
		return ptr;
	}

}


