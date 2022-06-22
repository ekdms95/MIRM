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
	 * Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Reflection Grade Set
	 */
	struct UCM_Item_Grade_Set_C_Reflection_Grade_Set_Params
	{
	public:
		E_GRADE                                                    Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Avatar_Grade_Set
	 */
	struct UCM_Item_Grade_Set_C_Avatar_Grade_Set_Params
	{
	public:
		E_GRADE                                                    Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Stone_Set_Grade
	 */
	struct UCM_Item_Grade_Set_C_Stone_Set_Grade_Params
	{
	public:
		E_GRADE                                                    Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Item_Set_Type
	 */
	struct UCM_Item_Grade_Set_C_Item_Set_Type_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_ITEM_MAINTYPE                                            Type_Switch;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_GRADE                                                    Grade_Switch;                                            // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Item_Set_Grade
	 */
	struct UCM_Item_Grade_Set_C_Item_Set_Grade_Params
	{
	public:
		E_GRADE                                                    grade;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Grade_Front_Fx
	 */
	struct UCM_Item_Grade_Set_C_Grade_Front_Fx_Params
	{
	public:
		class UObject*                                             FrontFx_img;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       is_On;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Grade_Rear_Fx
	 */
	struct UCM_Item_Grade_Set_C_Grade_Rear_Fx_Params
	{
	public:
		class UObject*                                             RearFx_img;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       is_On;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Grade_Bg
	 */
	struct UCM_Item_Grade_Set_C_Grade_Bg_Params
	{
	public:
		class UObject*                                             Image;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Equip_Set_Grade
	 */
	struct UCM_Item_Grade_Set_C_Equip_Set_Grade_Params
	{
	public:
		E_GRADE                                                    grade;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SetItemCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.SetSummonStone
	 */
	struct UCM_Item_Grade_Set_C_SetSummonStone_Params
	{
	public:
		int32_t                                                    Cost;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_SUMMONS_COLOR_TYPE                                       Type;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.PreConstruct
	 */
	struct UCM_Item_Grade_Set_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.ExecuteUbergraph_CM_Item_Grade_Set
	 */
	struct UCM_Item_Grade_Set_C_ExecuteUbergraph_CM_Item_Grade_Set_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
