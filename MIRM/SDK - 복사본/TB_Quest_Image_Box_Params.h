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
	 * Function TB_Quest_Image_Box.TB_Quest_Image_Box_C.PcNpc_Bg_Set_func
	 */
	struct UTB_Quest_Image_Box_C_PcNpc_Bg_Set_func_Params
	{
	public:
		bool                                                       condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TB_Quest_Image_Box.TB_Quest_Image_Box_C.GetTxtBlock
	 */
	struct UTB_Quest_Image_Box_C_GetTxtBlock_Params
	{
	public:
		class UMirTextBlock*                                       TextBlock;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TB_Quest_Image_Box.TB_Quest_Image_Box_C.SetName
	 */
	struct UTB_Quest_Image_Box_C_SetName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TB_Quest_Image_Box.TB_Quest_Image_Box_C.PreConstruct
	 */
	struct UTB_Quest_Image_Box_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TB_Quest_Image_Box.TB_Quest_Image_Box_C.ExecuteUbergraph_TB_Quest_Image_Box
	 */
	struct UTB_Quest_Image_Box_C_ExecuteUbergraph_TB_Quest_Image_Box_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
