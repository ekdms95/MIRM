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
	 * Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.GetTaxText
	 */
	struct UCM_Num_Item_Regi_Pop_C_GetTaxText_Params
	{
	public:
		class UMirTextBlock*                                       txt;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.SetTitleText
	 */
	struct UCM_Num_Item_Regi_Pop_C_SetTitleText_Params
	{
	public:
		class FString                                              TitleText;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.Setup
	 */
	struct UCM_Num_Item_Regi_Pop_C_Setup_Params
	{
	public:
		struct FItem_Data                                          InItemData;                                              // 0x0000(0x02C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int64_t                                                    InItemUID;                                               // 0x02C8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_2_PopClose__DelegateSignature
	 */
	struct UCM_Num_Item_Regi_Pop_C_BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_2_PopClose__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.BndEvt__CM_NumPadEX_K2Node_ComponentBoundEvent_3_OnChangeCurrNumberValue_DP__DelegateSignature
	 */
	struct UCM_Num_Item_Regi_Pop_C_BndEvt__CM_NumPadEX_K2Node_ComponentBoundEvent_3_OnChangeCurrNumberValue_DP__DelegateSignature_Params
	{
	public:
		int32_t                                                    currNumberValue;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_0_PopNoBtn__DelegateSignature
	 */
	struct UCM_Num_Item_Regi_Pop_C_BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_0_PopNoBtn__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_1_PopYesBtn__DelegateSignature
	 */
	struct UCM_Num_Item_Regi_Pop_C_BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_1_PopYesBtn__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.PreConstruct
	 */
	struct UCM_Num_Item_Regi_Pop_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.ExecuteUbergraph_CM_Num_Item_Regi_Pop
	 */
	struct UCM_Num_Item_Regi_Pop_C_ExecuteUbergraph_CM_Num_Item_Regi_Pop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.ConfirmDispatcher__DelegateSignature
	 */
	struct UCM_Num_Item_Regi_Pop_C_ConfirmDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.OnChangeCurrNumberValue__DelegateSignature
	 */
	struct UCM_Num_Item_Regi_Pop_C_OnChangeCurrNumberValue__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.CloseDispatcher__DelegateSignature
	 */
	struct UCM_Num_Item_Regi_Pop_C_CloseDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.NumpadEventDispatcher__DelegateSignature
	 */
	struct UCM_Num_Item_Regi_Pop_C_NumpadEventDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
