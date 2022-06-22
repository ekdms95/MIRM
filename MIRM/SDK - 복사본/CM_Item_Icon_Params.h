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
	 * Function CM_Item_Icon.CM_Item_Icon_C.ShowItemInfo
	 */
	struct UCM_Item_Icon_C_ShowItemInfo_Params
	{	};

	/**
	 * Function CM_Item_Icon.CM_Item_Icon_C.SetUseItemInfo
	 */
	struct UCM_Item_Icon_C_SetUseItemInfo_Params
	{
	public:
		bool                                                       bUse;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Item_Icon.CM_Item_Icon_C.Init
	 */
	struct UCM_Item_Icon_C_Init_Params
	{	};

	/**
	 * Function CM_Item_Icon.CM_Item_Icon_C.OnSetIcon
	 */
	struct UCM_Item_Icon_C_OnSetIcon_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int64_t                                                    count;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Item_Icon.CM_Item_Icon_C.Tick
	 */
	struct UCM_Item_Icon_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Item_Icon.CM_Item_Icon_C.CallSetUseItemInfo
	 */
	struct UCM_Item_Icon_C_CallSetUseItemInfo_Params
	{
	public:
		bool                                                       bIsUse;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Item_Icon.CM_Item_Icon_C.PreConstruct
	 */
	struct UCM_Item_Icon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Item_Icon.CM_Item_Icon_C.OnSetIconEvent
	 */
	struct UCM_Item_Icon_C_OnSetIconEvent_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_ITEM_MAINTYPE                                            ItemType;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_GRADE                                                    grade;                                                   // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int64_t                                                    count;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Item_Icon.CM_Item_Icon_C.OnPreSetIcon
	 */
	struct UCM_Item_Icon_C_OnPreSetIcon_Params
	{	};

	/**
	 * Function CM_Item_Icon.CM_Item_Icon_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCM_Item_Icon_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Item_Icon.CM_Item_Icon_C.BndEvt__CM_Item_Icon_MirButton_ItemInfo_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCM_Item_Icon_C_BndEvt__CM_Item_Icon_MirButton_ItemInfo_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Item_Icon.CM_Item_Icon_C.ExecuteUbergraph_CM_Item_Icon
	 */
	struct UCM_Item_Icon_C_ExecuteUbergraph_CM_Item_Icon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Item_Icon.CM_Item_Icon_C.Click_ItemIconDispatcher__DelegateSignature
	 */
	struct UCM_Item_Icon_C_Click_ItemIconDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
