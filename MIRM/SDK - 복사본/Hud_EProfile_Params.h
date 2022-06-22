﻿#pragma once

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
	 * Function Hud_EProfile.Hud_EProfile_C.PreConstruct
	 */
	struct UHud_EProfile_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_EProfile.Hud_EProfile_C.Tick
	 */
	struct UHud_EProfile_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_EProfile.Hud_EProfile_C.BndEvt__Hud_EProfile_CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature
	 */
	struct UHud_EProfile_C_BndEvt__Hud_EProfile_CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_EProfile.Hud_EProfile_C.ExecuteUbergraph_Hud_EProfile
	 */
	struct UHud_EProfile_C_ExecuteUbergraph_Hud_EProfile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
