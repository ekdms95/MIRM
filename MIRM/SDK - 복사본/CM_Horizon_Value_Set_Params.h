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
	 * Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.Value_Txt_Set
	 */
	struct UCM_Horizon_Value_Set_C_Value_Txt_Set_Params
	{
	public:
		class UMirTextBlock*                                       Value_txt;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.GetNameTextBlock
	 */
	struct UCM_Horizon_Value_Set_C_GetNameTextBlock_Params
	{
	public:
		class UMirTextBlock*                                       Name;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.Horizon_Value_Set_Function
	 */
	struct UCM_Horizon_Value_Set_C_Horizon_Value_Set_Function_Params
	{
	public:
		int32_t                                                    ValueName_String_ID;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHorizontalAlignment                                       Set_Horizon_Align;                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.GetValueTextBlock
	 */
	struct UCM_Horizon_Value_Set_C_GetValueTextBlock_Params
	{
	public:
		class UMirTextBlock*                                       NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.PreConstruct
	 */
	struct UCM_Horizon_Value_Set_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.BndEvt__CM_Horizon_Value_Set_Guide_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCM_Horizon_Value_Set_C_BndEvt__CM_Horizon_Value_Set_Guide_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.BndEvt__CM_Horizon_Value_Set_Guide_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCM_Horizon_Value_Set_C_BndEvt__CM_Horizon_Value_Set_Guide_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.ExecuteUbergraph_CM_Horizon_Value_Set
	 */
	struct UCM_Horizon_Value_Set_C_ExecuteUbergraph_CM_Horizon_Value_Set_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.Guide_Btn_Dispatch__DelegateSignature
	 */
	struct UCM_Horizon_Value_Set_C_Guide_Btn_Dispatch__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
