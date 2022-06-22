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
	 * Function IA_Goods_Element.IA_Goods_Element_C.OnSetItemInfo
	 */
	struct UIA_Goods_Element_C_OnSetItemInfo_Params
	{
	public:
		bool                                                       succed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_GRADE                                                    grade;                                                   // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IA_Goods_Element.IA_Goods_Element_C.FinishEvent
	 */
	struct UIA_Goods_Element_C_FinishEvent_Params
	{	};

	/**
	 * Function IA_Goods_Element.IA_Goods_Element_C.OnPreSet
	 */
	struct UIA_Goods_Element_C_OnPreSet_Params
	{	};

	/**
	 * Function IA_Goods_Element.IA_Goods_Element_C.ExecuteUbergraph_IA_Goods_Element
	 */
	struct UIA_Goods_Element_C_ExecuteUbergraph_IA_Goods_Element_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
