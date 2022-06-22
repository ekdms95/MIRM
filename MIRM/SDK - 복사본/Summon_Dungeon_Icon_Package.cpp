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
	 * 		Name   -> Function Summon_Dungeon_Icon.Summon_Dungeon_Icon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USummon_Dungeon_Icon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summon_Dungeon_Icon.Summon_Dungeon_Icon_C.PreConstruct");
		
		USummon_Dungeon_Icon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Summon_Dungeon_Icon.Summon_Dungeon_Icon_C.Construct
	 * 		Flags  -> ()
	 */
	void USummon_Dungeon_Icon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summon_Dungeon_Icon.Summon_Dungeon_Icon_C.Construct");
		
		USummon_Dungeon_Icon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Summon_Dungeon_Icon.Summon_Dungeon_Icon_C.BndEvt__Summon_Dungeon_Icon_CM_Slot_Minus_btn_K2Node_ComponentBoundEvent_0_Click_Dispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USummon_Dungeon_Icon_C::BndEvt__Summon_Dungeon_Icon_CM_Slot_Minus_btn_K2Node_ComponentBoundEvent_0_Click_Dispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summon_Dungeon_Icon.Summon_Dungeon_Icon_C.BndEvt__Summon_Dungeon_Icon_CM_Slot_Minus_btn_K2Node_ComponentBoundEvent_0_Click_Dispatch__DelegateSignature");
		
		USummon_Dungeon_Icon_C_BndEvt__Summon_Dungeon_Icon_CM_Slot_Minus_btn_K2Node_ComponentBoundEvent_0_Click_Dispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Summon_Dungeon_Icon.Summon_Dungeon_Icon_C.ExecuteUbergraph_Summon_Dungeon_Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USummon_Dungeon_Icon_C::ExecuteUbergraph_Summon_Dungeon_Icon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Summon_Dungeon_Icon.Summon_Dungeon_Icon_C.ExecuteUbergraph_Summon_Dungeon_Icon");
		
		USummon_Dungeon_Icon_C_ExecuteUbergraph_Summon_Dungeon_Icon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USummon_Dungeon_Icon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USummon_Dungeon_Icon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Summon_Dungeon_Icon.Summon_Dungeon_Icon_C");
		return ptr;
	}

}


