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
	 * Function Page_Hud.Page_Hud_C.CheckStoryDungeonBlock
	 */
	struct UPage_Hud_C_CheckStoryDungeonBlock_Params
	{
	public:
		bool                                                       bLock;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Hud.Page_Hud_C.HideBTMenu
	 */
	struct UPage_Hud_C_HideBTMenu_Params
	{	};

	/**
	 * Function Page_Hud.Page_Hud_C.OnShowBTMenu
	 */
	struct UPage_Hud_C_OnShowBTMenu_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Hud.Page_Hud_C.ShowBottomMenuEvent
	 */
	struct UPage_Hud_C_ShowBottomMenuEvent_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Hud.Page_Hud_C.OnClickHudPage
	 */
	struct UPage_Hud_C_OnClickHudPage_Params
	{
	public:
		struct FVector2D                                           position;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Hud.Page_Hud_C.OnInitailizeWidget
	 */
	struct UPage_Hud_C_OnInitailizeWidget_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Hud.Page_Hud_C.OnCreateMirPage
	 */
	struct UPage_Hud_C_OnCreateMirPage_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Hud.Page_Hud_C.BndEvt__MirButton_63_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPage_Hud_C_BndEvt__MirButton_63_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Page_Hud.Page_Hud_C.Tick
	 */
	struct UPage_Hud_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Hud.Page_Hud_C.OnSetVisible
	 */
	struct UPage_Hud_C_OnSetVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Hud.Page_Hud_C.BndEvt__Page_Hud_Hud_MiniMap_K2Node_ComponentBoundEvent_1_ClickAreaInfo__DelegateSignature
	 */
	struct UPage_Hud_C_BndEvt__Page_Hud_Hud_MiniMap_K2Node_ComponentBoundEvent_1_ClickAreaInfo__DelegateSignature_Params
	{	};

	/**
	 * Function Page_Hud.Page_Hud_C.ExecuteUbergraph_Page_Hud
	 */
	struct UPage_Hud_C_ExecuteUbergraph_Page_Hud_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
