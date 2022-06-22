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
	 * Function CM_Camera_Btn.CM_Camera_Btn_C.IsOnCameraBtn
	 */
	struct UCM_Camera_Btn_C_IsOnCameraBtn_Params
	{	};

	/**
	 * Function CM_Camera_Btn.CM_Camera_Btn_C.SetNum
	 */
	struct UCM_Camera_Btn_C_SetNum_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Camera_Btn.CM_Camera_Btn_C.BndEvt__CM_Camera_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCM_Camera_Btn_C_BndEvt__CM_Camera_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Camera_Btn.CM_Camera_Btn_C.PreConstruct
	 */
	struct UCM_Camera_Btn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Camera_Btn.CM_Camera_Btn_C.Tick
	 */
	struct UCM_Camera_Btn_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Camera_Btn.CM_Camera_Btn_C.OnReceivePrefabMessage
	 */
	struct UCM_Camera_Btn_C_OnReceivePrefabMessage_Params
	{
	public:
		class FName                                                PrefabMessage;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              PrefabParameters;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Camera_Btn.CM_Camera_Btn_C.Construct
	 */
	struct UCM_Camera_Btn_C_Construct_Params
	{	};

	/**
	 * Function CM_Camera_Btn.CM_Camera_Btn_C.ExecuteUbergraph_CM_Camera_Btn
	 */
	struct UCM_Camera_Btn_C_ExecuteUbergraph_CM_Camera_Btn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Camera_Btn.CM_Camera_Btn_C.Camera_BtnClick_Dispatch__DelegateSignature
	 */
	struct UCM_Camera_Btn_C_Camera_BtnClick_Dispatch__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
