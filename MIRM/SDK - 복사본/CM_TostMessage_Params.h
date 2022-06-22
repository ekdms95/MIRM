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
	 * Function CM_TostMessage.CM_TostMessage_C.OnMouseButtonDown_1
	 */
	struct UCM_TostMessage_C_OnMouseButtonDown_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CM_TostMessage.CM_TostMessage_C.Tick
	 */
	struct UCM_TostMessage_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_TostMessage.CM_TostMessage_C.RegText
	 */
	struct UCM_TostMessage_C_RegText_Params
	{	};

	/**
	 * Function CM_TostMessage.CM_TostMessage_C.Destruct
	 */
	struct UCM_TostMessage_C_Destruct_Params
	{	};

	/**
	 * Function CM_TostMessage.CM_TostMessage_C.Construct
	 */
	struct UCM_TostMessage_C_Construct_Params
	{	};

	/**
	 * Function CM_TostMessage.CM_TostMessage_C.ExecuteUbergraph_CM_TostMessage
	 */
	struct UCM_TostMessage_C_ExecuteUbergraph_CM_TostMessage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
