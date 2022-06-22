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
	 * Function HUD_AreaTitle.HUD_AreaTitle_C.Construct
	 */
	struct UHUD_AreaTitle_C_Construct_Params
	{	};

	/**
	 * Function HUD_AreaTitle.HUD_AreaTitle_C.WidgetAnimationEvt_AreaTitleIn_ani_K2Node_WidgetAnimationEvent_1
	 */
	struct UHUD_AreaTitle_C_WidgetAnimationEvt_AreaTitleIn_ani_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function HUD_AreaTitle.HUD_AreaTitle_C.OnReceivePrefabMessage
	 */
	struct UHUD_AreaTitle_C_OnReceivePrefabMessage_Params
	{
	public:
		class FName                                                PrefabMessage;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              PrefabParameters;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_AreaTitle.HUD_AreaTitle_C.ChangeAreaSector
	 */
	struct UHUD_AreaTitle_C_ChangeAreaSector_Params
	{
	public:
		EMirAreaType                                               Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUD_AreaTitle.HUD_AreaTitle_C.ExecuteUbergraph_HUD_AreaTitle
	 */
	struct UHUD_AreaTitle_C_ExecuteUbergraph_HUD_AreaTitle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
