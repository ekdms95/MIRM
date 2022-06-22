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
	 * Function TB_Box_Group.TB_Box_Group_C.SetNpcIntimacyGradeType
	 */
	struct UTB_Box_Group_C_SetNpcIntimacyGradeType_Params
	{
	public:
		int32_t                                                    npcid;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TB_Box_Group.TB_Box_Group_C.PcNpc_Bg_Set_func
	 */
	struct UTB_Box_Group_C_PcNpc_Bg_Set_func_Params
	{
	public:
		bool                                                       condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TB_Box_Group.TB_Box_Group_C.GetTxtBlock
	 */
	struct UTB_Box_Group_C_GetTxtBlock_Params
	{
	public:
		class UMirTextBlock*                                       TextBlock;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TB_Box_Group.TB_Box_Group_C.SetName
	 */
	struct UTB_Box_Group_C_SetName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TB_Box_Group.TB_Box_Group_C.ExecuteUbergraph_TB_Box_Group
	 */
	struct UTB_Box_Group_C_ExecuteUbergraph_TB_Box_Group_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
