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
	 * Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.PreConstruct
	 */
	struct UHud_PkStatus_Element_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.OnSetPkStatusProfile
	 */
	struct UHud_PkStatus_Element_C_OnSetPkStatusProfile_Params
	{
	public:
		E_PK_TYPE                                                  pk_type;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isSelected;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_PkStatus_Element_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.BndEvt__PkElemen_Tabcan_K2Node_ComponentBoundEvent_0_OnTabCanvasStateChanged__DelegateSignature
	 */
	struct UHud_PkStatus_Element_C_BndEvt__PkElemen_Tabcan_K2Node_ComponentBoundEvent_0_OnTabCanvasStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.BndEvt__Hud_PkStatus_Element_PkElemen_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UHud_PkStatus_Element_C_BndEvt__Hud_PkStatus_Element_PkElemen_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.ExecuteUbergraph_Hud_PkStatus_Element
	 */
	struct UHud_PkStatus_Element_C_ExecuteUbergraph_Hud_PkStatus_Element_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
