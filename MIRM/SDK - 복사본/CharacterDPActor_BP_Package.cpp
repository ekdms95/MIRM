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
	 * 		Name   -> Function CharacterDPActor_BP.CharacterDPActor_BP_C.LookAtCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCameraComponent*                            Camera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterDPActor_BP_C::LookAtCamera(class UCameraComponent* Camera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDPActor_BP.CharacterDPActor_BP_C.LookAtCamera");
		
		ACharacterDPActor_BP_C_LookAtCamera_Params params {};
		params.Camera = Camera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterDPActor_BP.CharacterDPActor_BP_C.OnSetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACharacterDPActor_BP_C::OnSetVisibility(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDPActor_BP.CharacterDPActor_BP_C.OnSetVisibility");
		
		ACharacterDPActor_BP_C_OnSetVisibility_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterDPActor_BP.CharacterDPActor_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACharacterDPActor_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDPActor_BP.CharacterDPActor_BP_C.ReceiveBeginPlay");
		
		ACharacterDPActor_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterDPActor_BP.CharacterDPActor_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterDPActor_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDPActor_BP.CharacterDPActor_BP_C.ReceiveTick");
		
		ACharacterDPActor_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterDPActor_BP.CharacterDPActor_BP_C.ExecuteUbergraph_CharacterDPActor_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACharacterDPActor_BP_C::ExecuteUbergraph_CharacterDPActor_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDPActor_BP.CharacterDPActor_BP_C.ExecuteUbergraph_CharacterDPActor_BP");
		
		ACharacterDPActor_BP_C_ExecuteUbergraph_CharacterDPActor_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterDPActor_BP.CharacterDPActor_BP_C.OnSetCharacterDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ACharacterDPActor_BP_C::OnSetCharacterDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDPActor_BP.CharacterDPActor_BP_C.OnSetCharacterDispatcher__DelegateSignature");
		
		ACharacterDPActor_BP_C_OnSetCharacterDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ACharacterDPActor_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACharacterDPActor_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CharacterDPActor_BP.CharacterDPActor_BP_C");
		return ptr;
	}

}


