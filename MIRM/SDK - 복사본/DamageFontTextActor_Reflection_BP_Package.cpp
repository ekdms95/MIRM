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
	 * 		Name   -> Function DamageFontTextActor_Reflection_BP.DamageFontTextActor_Reflection_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ADamageFontTextActor_Reflection_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageFontTextActor_Reflection_BP.DamageFontTextActor_Reflection_BP_C.ReceiveBeginPlay");
		
		ADamageFontTextActor_Reflection_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DamageFontTextActor_Reflection_BP.DamageFontTextActor_Reflection_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADamageFontTextActor_Reflection_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageFontTextActor_Reflection_BP.DamageFontTextActor_Reflection_BP_C.ReceiveTick");
		
		ADamageFontTextActor_Reflection_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DamageFontTextActor_Reflection_BP.DamageFontTextActor_Reflection_BP_C.OnSetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADamageFontTextActor_Reflection_BP_C::OnSetActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageFontTextActor_Reflection_BP.DamageFontTextActor_Reflection_BP_C.OnSetActive");
		
		ADamageFontTextActor_Reflection_BP_C_OnSetActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DamageFontTextActor_Reflection_BP.DamageFontTextActor_Reflection_BP_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void ADamageFontTextActor_Reflection_BP_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageFontTextActor_Reflection_BP.DamageFontTextActor_Reflection_BP_C.OnPreSet");
		
		ADamageFontTextActor_Reflection_BP_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DamageFontTextActor_Reflection_BP.DamageFontTextActor_Reflection_BP_C.ExecuteUbergraph_DamageFontTextActor_Reflection_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADamageFontTextActor_Reflection_BP_C::ExecuteUbergraph_DamageFontTextActor_Reflection_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageFontTextActor_Reflection_BP.DamageFontTextActor_Reflection_BP_C.ExecuteUbergraph_DamageFontTextActor_Reflection_BP");
		
		ADamageFontTextActor_Reflection_BP_C_ExecuteUbergraph_DamageFontTextActor_Reflection_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ADamageFontTextActor_Reflection_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADamageFontTextActor_Reflection_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DamageFontTextActor_Reflection_BP.DamageFontTextActor_Reflection_BP_C");
		return ptr;
	}

}


