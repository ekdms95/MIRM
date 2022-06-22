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
	 * Function Ch_Info_Status_Tab_Elem.Ch_Info_Status_Tab_Elem_C.PreConstruct
	 */
	struct UCh_Info_Status_Tab_Elem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ch_Info_Status_Tab_Elem.Ch_Info_Status_Tab_Elem_C.OnRegTexts
	 */
	struct UCh_Info_Status_Tab_Elem_C_OnRegTexts_Params
	{	};

	/**
	 * Function Ch_Info_Status_Tab_Elem.Ch_Info_Status_Tab_Elem_C.Tick
	 */
	struct UCh_Info_Status_Tab_Elem_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ch_Info_Status_Tab_Elem.Ch_Info_Status_Tab_Elem_C.BndEvt__Ch_Info_Status_Tab_Elem_Ch_Info_Status_Tab_Elem_K2Node_ComponentBoundEvent_0_OnClickDispatcher__DelegateSignature
	 */
	struct UCh_Info_Status_Tab_Elem_C_BndEvt__Ch_Info_Status_Tab_Elem_Ch_Info_Status_Tab_Elem_K2Node_ComponentBoundEvent_0_OnClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Ch_Info_Status_Tab_Elem.Ch_Info_Status_Tab_Elem_C.ExecuteUbergraph_Ch_Info_Status_Tab_Elem
	 */
	struct UCh_Info_Status_Tab_Elem_C_ExecuteUbergraph_Ch_Info_Status_Tab_Elem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
