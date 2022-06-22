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
	 * 		Name   -> Function HUD_QuestBox_Frame_Slot.HUD_QuestBox_Frame_Slot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_QuestBox_Frame_Slot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_QuestBox_Frame_Slot.HUD_QuestBox_Frame_Slot_C.PreConstruct");
		
		UHUD_QuestBox_Frame_Slot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_QuestBox_Frame_Slot.HUD_QuestBox_Frame_Slot_C.ExecuteUbergraph_HUD_QuestBox_Frame_Slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_QuestBox_Frame_Slot_C::ExecuteUbergraph_HUD_QuestBox_Frame_Slot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_QuestBox_Frame_Slot.HUD_QuestBox_Frame_Slot_C.ExecuteUbergraph_HUD_QuestBox_Frame_Slot");
		
		UHUD_QuestBox_Frame_Slot_C_ExecuteUbergraph_HUD_QuestBox_Frame_Slot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_QuestBox_Frame_Slot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_QuestBox_Frame_Slot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_QuestBox_Frame_Slot.HUD_QuestBox_Frame_Slot_C");
		return ptr;
	}

}


