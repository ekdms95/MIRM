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
	 * Function WFMap_Icon.WFMap_Icon_C.SetFavorabilityRewardVisibility
	 */
	struct UWFMap_Icon_C_SetFavorabilityRewardVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WFMap_Icon.WFMap_Icon_C.SetIconImage
	 */
	struct UWFMap_Icon_C_SetIconImage_Params
	{
	public:
		class FString                                              ImagePath;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WFMap_Icon.WFMap_Icon_C.SetQuestionIconPath
	 */
	struct UWFMap_Icon_C_SetQuestionIconPath_Params
	{
	public:
		class FString                                              strIconPath;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WFMap_Icon.WFMap_Icon_C.SetExclamationIconPath
	 */
	struct UWFMap_Icon_C_SetExclamationIconPath_Params
	{
	public:
		class FString                                              strIconPath;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WFMap_Icon.WFMap_Icon_C.SetAreaTextStyle
	 */
	struct UWFMap_Icon_C_SetAreaTextStyle_Params
	{
	public:
		bool                                                       bAreaType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WFMap_Icon.WFMap_Icon_C.SetTalkIconVisibility
	 */
	struct UWFMap_Icon_C_SetTalkIconVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WFMap_Icon.WFMap_Icon_C.SetNameTextVisibility
	 */
	struct UWFMap_Icon_C_SetNameTextVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WFMap_Icon.WFMap_Icon_C.SetExclamationIconVisibility
	 */
	struct UWFMap_Icon_C_SetExclamationIconVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WFMap_Icon.WFMap_Icon_C.SetNormalIconVisibility
	 */
	struct UWFMap_Icon_C_SetNormalIconVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WFMap_Icon.WFMap_Icon_C.SetQuestionIconVisibility
	 */
	struct UWFMap_Icon_C_SetQuestionIconVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WFMap_Icon.WFMap_Icon_C.SetImageBrush
	 */
	struct UWFMap_Icon_C_SetImageBrush_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WFMap_Icon.WFMap_Icon_C.SetNameInText
	 */
	struct UWFMap_Icon_C_SetNameInText_Params
	{
	public:
		class FText                                                strText;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WFMap_Icon.WFMap_Icon_C.OnSelectEffect
	 */
	struct UWFMap_Icon_C_OnSelectEffect_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WFMap_Icon.WFMap_Icon_C.PreConstruct
	 */
	struct UWFMap_Icon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WFMap_Icon.WFMap_Icon_C.Tick
	 */
	struct UWFMap_Icon_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WFMap_Icon.WFMap_Icon_C.ExecuteUbergraph_WFMap_Icon
	 */
	struct UWFMap_Icon_C_ExecuteUbergraph_WFMap_Icon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
