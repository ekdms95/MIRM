﻿/**
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
	 * 		Name   -> Function DamageFontTextActor_MANA_BP.DamageFontTextActor_MANA_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ADamageFontTextActor_MANA_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageFontTextActor_MANA_BP.DamageFontTextActor_MANA_BP_C.ReceiveBeginPlay");
		
		ADamageFontTextActor_MANA_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DamageFontTextActor_MANA_BP.DamageFontTextActor_MANA_BP_C.OnSetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADamageFontTextActor_MANA_BP_C::OnSetActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageFontTextActor_MANA_BP.DamageFontTextActor_MANA_BP_C.OnSetActive");
		
		ADamageFontTextActor_MANA_BP_C_OnSetActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DamageFontTextActor_MANA_BP.DamageFontTextActor_MANA_BP_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void ADamageFontTextActor_MANA_BP_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageFontTextActor_MANA_BP.DamageFontTextActor_MANA_BP_C.OnPreSet");
		
		ADamageFontTextActor_MANA_BP_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DamageFontTextActor_MANA_BP.DamageFontTextActor_MANA_BP_C.ExecuteUbergraph_DamageFontTextActor_MANA_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADamageFontTextActor_MANA_BP_C::ExecuteUbergraph_DamageFontTextActor_MANA_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageFontTextActor_MANA_BP.DamageFontTextActor_MANA_BP_C.ExecuteUbergraph_DamageFontTextActor_MANA_BP");
		
		ADamageFontTextActor_MANA_BP_C_ExecuteUbergraph_DamageFontTextActor_MANA_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ADamageFontTextActor_MANA_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADamageFontTextActor_MANA_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DamageFontTextActor_MANA_BP.DamageFontTextActor_MANA_BP_C");
		return ptr;
	}

}


