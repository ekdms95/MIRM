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
	 * Function HUD_HeadHP.HUD_HeadHP_C.Gauge_Color_Set_Function
	 */
	struct UHUD_HeadHP_C_Gauge_Color_Set_Function_Params
	{
	public:
		bool                                                       Red_Gauge;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_HeadHP.HUD_HeadHP_C.GetCanvas
	 */
	struct UHUD_HeadHP_C_GetCanvas_Params
	{
	public:
		class UMirCanvasPanel*                                     Canvas;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_HeadHP.HUD_HeadHP_C.GetHPProgressImage
	 */
	struct UHUD_HeadHP_C_GetHPProgressImage_Params
	{
	public:
		class UMirImage*                                           Image;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_HeadHP.HUD_HeadHP_C.ExecuteUbergraph_HUD_HeadHP
	 */
	struct UHUD_HeadHP_C_ExecuteUbergraph_HUD_HeadHP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
