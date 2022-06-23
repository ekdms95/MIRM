#pragma once

/**
 * Name: MIRM
 * Version: 0623-2
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
	 * Function CM_Equip_Icon.CM_Equip_Icon_C.OnReleasEvent
	 */
	struct UCM_Equip_Icon_C_OnReleasEvent_Params
	{
	public:
		E_ITEM_MAINTYPE                                            MainType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Type;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Equip_Icon.CM_Equip_Icon_C.OnSelectEvent
	 */
	struct UCM_Equip_Icon_C_OnSelectEvent_Params
	{
	public:
		E_ITEM_MAINTYPE                                            MainType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Type;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Equip_Icon.CM_Equip_Icon_C.OnEquipEvent
	 */
	struct UCM_Equip_Icon_C_OnEquipEvent_Params
	{
	public:
		E_ITEM_MAINTYPE                                            MainType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Type;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Equip_Icon.CM_Equip_Icon_C.OnProtectedAni
	 */
	struct UCM_Equip_Icon_C_OnProtectedAni_Params
	{
	public:
		E_INVENTORY_EQUIP_ANIM                                     AnimType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Equip_Icon.CM_Equip_Icon_C.BndEvt__MirButton_135_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCM_Equip_Icon_C_BndEvt__MirButton_135_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Equip_Icon.CM_Equip_Icon_C.OnDurabilityValue
	 */
	struct UCM_Equip_Icon_C_OnDurabilityValue_Params
	{
	public:
		float                                                      durability;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Equip_Icon.CM_Equip_Icon_C.OnSetItemEffect
	 */
	struct UCM_Equip_Icon_C_OnSetItemEffect_Params
	{
	public:
		bool                                                       isShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SetItemCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Equip_Icon.CM_Equip_Icon_C.OnSetIconEvent
	 */
	struct UCM_Equip_Icon_C_OnSetIconEvent_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_ITEM_MAINTYPE                                            ItemType;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_GRADE                                                    grade;                                                   // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int64_t                                                    count;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Equip_Icon.CM_Equip_Icon_C.Equip_Ani_Finished
	 */
	struct UCM_Equip_Icon_C_Equip_Ani_Finished_Params
	{	};

	/**
	 * Function CM_Equip_Icon.CM_Equip_Icon_C.BndEvt__MirCheckBox_0_K2Node_ComponentBoundEvent_0_OnMirCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UCM_Equip_Icon_C_BndEvt__MirCheckBox_0_K2Node_ComponentBoundEvent_0_OnMirCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Equip_Icon.CM_Equip_Icon_C.OnSelectedItemType
	 */
	struct UCM_Equip_Icon_C_OnSelectedItemType_Params
	{
	public:
		E_ITEM_MAINTYPE                                            Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ItemType;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Equip_Icon.CM_Equip_Icon_C.PreConstruct
	 */
	struct UCM_Equip_Icon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Equip_Icon.CM_Equip_Icon_C.OnEquipItemType
	 */
	struct UCM_Equip_Icon_C_OnEquipItemType_Params
	{
	public:
		E_ITEM_MAINTYPE                                            Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ItemType;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Equip_Icon.CM_Equip_Icon_C.OnReleaseItemType
	 */
	struct UCM_Equip_Icon_C_OnReleaseItemType_Params
	{
	public:
		E_ITEM_MAINTYPE                                            Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ItemType;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Equip_Icon.CM_Equip_Icon_C.ExecuteUbergraph_CM_Equip_Icon
	 */
	struct UCM_Equip_Icon_C_ExecuteUbergraph_CM_Equip_Icon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
