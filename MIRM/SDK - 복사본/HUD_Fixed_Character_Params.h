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
	 * Function HUD_Fixed_Character.HUD_Fixed_Character_C.OnFearState
	 */
	struct UHUD_Fixed_Character_C_OnFearState_Params
	{
	public:
		bool                                                       IsFear;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Fixed_Character.HUD_Fixed_Character_C.SetAnimation
	 */
	struct UHUD_Fixed_Character_C_SetAnimation_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Fixed_Character.HUD_Fixed_Character_C.GetIsAutoPlay
	 */
	struct UHUD_Fixed_Character_C_GetIsAutoPlay_Params
	{
	public:
		struct FAutoPlayProcessUnit                                AutoPlayProcessUnit;                                     // 0x0000(0x0068)  (Parm, OutParm)
	};

	/**
	 * Function HUD_Fixed_Character.HUD_Fixed_Character_C.SetAutoPlay
	 */
	struct UHUD_Fixed_Character_C_SetAutoPlay_Params
	{
	public:
		struct FAutoPlayProcessUnit                                AutoPlayProcessUnit;                                     // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_Fixed_Character.HUD_Fixed_Character_C.BndEvt__HUD_Fixed_Character_HUD_Auto_FixedCharacter_K2Node_ComponentBoundEvent_1_AutoBtn__DelegateSignature
	 */
	struct UHUD_Fixed_Character_C_BndEvt__HUD_Fixed_Character_HUD_Auto_FixedCharacter_K2Node_ComponentBoundEvent_1_AutoBtn__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_Fixed_Character.HUD_Fixed_Character_C.ExecuteUbergraph_HUD_Fixed_Character
	 */
	struct UHUD_Fixed_Character_C_ExecuteUbergraph_HUD_Fixed_Character_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Fixed_Character.HUD_Fixed_Character_C.ToggleDispatcher__DelegateSignature
	 */
	struct UHUD_Fixed_Character_C_ToggleDispatcher__DelegateSignature_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
