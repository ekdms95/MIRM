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
	 * 		Name   -> Function HUD_ProfileGroup.HUD_ProfileGroup_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UHUD_ProfileGroup_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ProfileGroup.HUD_ProfileGroup_C.OnPreSet");
		
		UHUD_ProfileGroup_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ProfileGroup.HUD_ProfileGroup_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_ProfileGroup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ProfileGroup.HUD_ProfileGroup_C.Construct");
		
		UHUD_ProfileGroup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ProfileGroup.HUD_ProfileGroup_C.Destruct
	 * 		Flags  -> ()
	 */
	void UHUD_ProfileGroup_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ProfileGroup.HUD_ProfileGroup_C.Destruct");
		
		UHUD_ProfileGroup_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ProfileGroup.HUD_ProfileGroup_C.Ontargeting
	 * 		Flags  -> ()
	 */
	void UHUD_ProfileGroup_C::Ontargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ProfileGroup.HUD_ProfileGroup_C.Ontargeting");
		
		UHUD_ProfileGroup_C_Ontargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ProfileGroup.HUD_ProfileGroup_C.ExecuteUbergraph_HUD_ProfileGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ProfileGroup_C::ExecuteUbergraph_HUD_ProfileGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ProfileGroup.HUD_ProfileGroup_C.ExecuteUbergraph_HUD_ProfileGroup");
		
		UHUD_ProfileGroup_C_ExecuteUbergraph_HUD_ProfileGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_ProfileGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_ProfileGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_ProfileGroup.HUD_ProfileGroup_C");
		return ptr;
	}

}


