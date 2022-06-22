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
	 * Function HUD_Key_Mapping_Guide.HUD_Key_Mapping_Guide_C.SetVisible
	 */
	struct UHUD_Key_Mapping_Guide_C_SetVisible_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Key_Mapping_Guide.HUD_Key_Mapping_Guide_C.OnTouchStarted
	 */
	struct UHUD_Key_Mapping_Guide_C_OnTouchStarted_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InTouchEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD_Key_Mapping_Guide.HUD_Key_Mapping_Guide_C.BndEvt__HUD_Key_Mapping_Guide_Blocking_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHUD_Key_Mapping_Guide_C_BndEvt__HUD_Key_Mapping_Guide_Blocking_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_Key_Mapping_Guide.HUD_Key_Mapping_Guide_C.ExecuteUbergraph_HUD_Key_Mapping_Guide
	 */
	struct UHUD_Key_Mapping_Guide_C_ExecuteUbergraph_HUD_Key_Mapping_Guide_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
