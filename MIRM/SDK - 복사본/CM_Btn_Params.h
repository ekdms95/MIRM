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
	 * Function CM_Btn.CM_Btn_C.Btn Size Setting
	 */
	struct UCM_Btn_C_Btn_Size_Setting_Params
	{
	public:
		float                                                      W_size;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      H_size;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Btn.CM_Btn_C.Btn_Img_Set
	 */
	struct UCM_Btn_C_Btn_Img_Set_Params
	{
	public:
		struct FVector2D                                           Image_Size;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMargin                                             Margin;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             Normal;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Over;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Press;                                                   // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             disable;                                                 // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Text_visi;                                               // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Btn.CM_Btn_C.Btn_Size
	 */
	struct UCM_Btn_C_Btn_Size_Params
	{
	public:
		class FName                                                Btn_Size_List;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Btn.CM_Btn_C.InitButton
	 */
	struct UCM_Btn_C_InitButton_Params
	{	};

	/**
	 * Function CM_Btn.CM_Btn_C.GetTextBlock
	 */
	struct UCM_Btn_C_GetTextBlock_Params
	{
	public:
		class UMirTextBlock*                                       Text;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Btn.CM_Btn_C.YesNoFx
	 */
	struct UCM_Btn_C_YesNoFx_Params
	{
	public:
		bool                                                       YesNoBtnChanger;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Btn.CM_Btn_C.SetText
	 */
	struct UCM_Btn_C_SetText_Params
	{
	public:
		class FText                                                NewParam;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CM_Btn.CM_Btn_C.PreConstruct
	 */
	struct UCM_Btn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Btn.CM_Btn_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCM_Btn_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Btn.CM_Btn_C.OnChangeCflag
	 */
	struct UCM_Btn_C_OnChangeCflag_Params
	{
	public:
		struct FCFlagValues                                        CFlagValues;                                             // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CM_Btn.CM_Btn_C.OnReceivePrefabMessage
	 */
	struct UCM_Btn_C_OnReceivePrefabMessage_Params
	{
	public:
		class FName                                                PrefabMessage;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              PrefabParameters;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Btn.CM_Btn_C.Construct
	 */
	struct UCM_Btn_C_Construct_Params
	{	};

	/**
	 * Function CM_Btn.CM_Btn_C.BndEvt__CM_Btn_CMBtn_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCM_Btn_C_BndEvt__CM_Btn_CMBtn_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Btn.CM_Btn_C.OnChangeEnableState
	 */
	struct UCM_Btn_C_OnChangeEnableState_Params
	{
	public:
		bool                                                       IsDisabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Btn.CM_Btn_C.ExecuteUbergraph_CM_Btn
	 */
	struct UCM_Btn_C_ExecuteUbergraph_CM_Btn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Btn.CM_Btn_C.ClickDispatcher__DelegateSignature
	 */
	struct UCM_Btn_C_ClickDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
