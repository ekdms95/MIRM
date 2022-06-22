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
	 * Function Hud_MiniMap.Hud_MiniMap_C.GetUIMapSize2D
	 */
	struct UHud_MiniMap_C_GetUIMapSize2D_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_MiniMap.Hud_MiniMap_C.GetMapImage
	 */
	struct UHud_MiniMap_C_GetMapImage_Params
	{
	public:
		class UMirImage*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_MiniMap.Hud_MiniMap_C.GetTextAreaName
	 */
	struct UHud_MiniMap_C_GetTextAreaName_Params
	{
	public:
		class UMirTextBlock*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_MiniMap.Hud_MiniMap_C.GetTextCurPos
	 */
	struct UHud_MiniMap_C_GetTextCurPos_Params
	{
	public:
		class UMirTextBlock*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_MiniMap.Hud_MiniMap_C.OpenFieldMapPage
	 */
	struct UHud_MiniMap_C_OpenFieldMapPage_Params
	{	};

	/**
	 * Function Hud_MiniMap.Hud_MiniMap_C.Construct
	 */
	struct UHud_MiniMap_C_Construct_Params
	{	};

	/**
	 * Function Hud_MiniMap.Hud_MiniMap_C.SetSafetyZone
	 */
	struct UHud_MiniMap_C_SetSafetyZone_Params
	{
	public:
		int32_t                                                    isSafety;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__DungeonStoryBlock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_MiniMap_C_BndEvt__DungeonStoryBlock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__Memory_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_MiniMap_C_BndEvt__Memory_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__Memory_Btn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_MiniMap_C_BndEvt__Memory_Btn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__Channel_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_MiniMap_C_BndEvt__Channel_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_MiniMap.Hud_MiniMap_C.Tick
	 */
	struct UHud_MiniMap_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__MirButton_OpenWorldmap_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_MiniMap_C_BndEvt__MirButton_OpenWorldmap_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_MiniMap.Hud_MiniMap_C.PreConstruct
	 */
	struct UHud_MiniMap_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_MiniMap.Hud_MiniMap_C.BndEvt__Hud_MiniMap_Area_Tip_Btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_MiniMap_C_BndEvt__Hud_MiniMap_Area_Tip_Btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_MiniMap.Hud_MiniMap_C.ExecuteUbergraph_Hud_MiniMap
	 */
	struct UHud_MiniMap_C_ExecuteUbergraph_Hud_MiniMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
