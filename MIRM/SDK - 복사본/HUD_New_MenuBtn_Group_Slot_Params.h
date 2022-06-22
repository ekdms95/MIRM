#pragma once

/**
 * Name: MIRM
 * Version: 0623
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function HUD_New_MenuBtn_Group_Slot.HUD_New_MenuBtn_Group_Slot_C.Menu_OnOff_Function
	 */
	struct UHUD_New_MenuBtn_Group_Slot_C_Menu_OnOff_Function_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUMGSequencePlayMode                                       PlayMode;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_New_MenuBtn_Group_Slot.HUD_New_MenuBtn_Group_Slot_C.ExecuteUbergraph_HUD_New_MenuBtn_Group_Slot
	 */
	struct UHUD_New_MenuBtn_Group_Slot_C_ExecuteUbergraph_HUD_New_MenuBtn_Group_Slot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
