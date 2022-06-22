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
	 * Function HUD_QuestEvent.HUD_QuestEvent_C.Stop
	 */
	struct UHUD_QuestEvent_C_Stop_Params
	{	};

	/**
	 * Function HUD_QuestEvent.HUD_QuestEvent_C.HUD_QuestEvent_CompleteCallback
	 */
	struct UHUD_QuestEvent_C_HUD_QuestEvent_CompleteCallback_Params
	{	};

	/**
	 * Function HUD_QuestEvent.HUD_QuestEvent_C.SetImage
	 */
	struct UHUD_QuestEvent_C_SetImage_Params
	{
	public:
		class FString                                              ImageName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_QuestEvent.HUD_QuestEvent_C.SetName
	 */
	struct UHUD_QuestEvent_C_SetName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_QuestEvent.HUD_QuestEvent_C.Hide
	 */
	struct UHUD_QuestEvent_C_Hide_Params
	{	};

	/**
	 * Function HUD_QuestEvent.HUD_QuestEvent_C.Show
	 */
	struct UHUD_QuestEvent_C_Show_Params
	{	};

	/**
	 * Function HUD_QuestEvent.HUD_QuestEvent_C.CompleteEventDispatcher__DelegateSignature
	 */
	struct UHUD_QuestEvent_C_CompleteEventDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_QuestEvent.HUD_QuestEvent_C.ButtonClickEventDispatcher__DelegateSignature
	 */
	struct UHUD_QuestEvent_C_ButtonClickEventDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
