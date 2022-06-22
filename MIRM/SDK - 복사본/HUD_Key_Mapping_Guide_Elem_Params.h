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
	 * Function HUD_Key_Mapping_Guide_Elem.HUD_Key_Mapping_Guide_Elem_C.PreConstruct
	 */
	struct UHUD_Key_Mapping_Guide_Elem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Key_Mapping_Guide_Elem.HUD_Key_Mapping_Guide_Elem_C.OnInitailizeWidget
	 */
	struct UHUD_Key_Mapping_Guide_Elem_C_OnInitailizeWidget_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Key_Mapping_Guide_Elem.HUD_Key_Mapping_Guide_Elem_C.Construct
	 */
	struct UHUD_Key_Mapping_Guide_Elem_C_Construct_Params
	{	};

	/**
	 * Function HUD_Key_Mapping_Guide_Elem.HUD_Key_Mapping_Guide_Elem_C.ExecuteUbergraph_HUD_Key_Mapping_Guide_Elem
	 */
	struct UHUD_Key_Mapping_Guide_Elem_C_ExecuteUbergraph_HUD_Key_Mapping_Guide_Elem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
