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
	 * Function CM_List_CaHead_Array.CM_List_CaHead_Array_C.GetHeadTextBlock
	 */
	struct UCM_List_CaHead_Array_C_GetHeadTextBlock_Params
	{
	public:
		int32_t                                                    Idx;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMirTextBlock*                                       TextBlock;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_List_CaHead_Array.CM_List_CaHead_Array_C.PreConstruct
	 */
	struct UCM_List_CaHead_Array_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_List_CaHead_Array.CM_List_CaHead_Array_C.Construct
	 */
	struct UCM_List_CaHead_Array_C_Construct_Params
	{	};

	/**
	 * Function CM_List_CaHead_Array.CM_List_CaHead_Array_C.ExecuteUbergraph_CM_List_CaHead_Array
	 */
	struct UCM_List_CaHead_Array_C_ExecuteUbergraph_CM_List_CaHead_Array_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
