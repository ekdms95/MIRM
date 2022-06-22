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
	 * Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.Btn_Color_set
	 */
	struct UHud_PkStatus_Profile_C_Btn_Color_set_Params
	{
	public:
		struct FVector2D                                           Image_Size;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Nor;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Over;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Press;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Dis;                                                     // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.Pk_Status_Color_Tint
	 */
	struct UHud_PkStatus_Profile_C_Pk_Status_Color_Tint_Params
	{
	public:
		class UObject*                                             Image;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.SetText
	 */
	struct UHud_PkStatus_Profile_C_SetText_Params
	{
	public:
		int32_t                                                    stringindex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Style;                                                   // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.BndEvt__MirButton_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_PkStatus_Profile_C_BndEvt__MirButton_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.OnSetPkStatusProfile
	 */
	struct UHud_PkStatus_Profile_C_OnSetPkStatusProfile_Params
	{
	public:
		E_PK_TYPE                                                  pk_type;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.PreConstruct
	 */
	struct UHud_PkStatus_Profile_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.ExecuteUbergraph_Hud_PkStatus_Profile
	 */
	struct UHud_PkStatus_Profile_C_ExecuteUbergraph_Hud_PkStatus_Profile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_PkStatus_Profile.Hud_PkStatus_Profile_C.ClickDispatcher__DelegateSignature
	 */
	struct UHud_PkStatus_Profile_C_ClickDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
