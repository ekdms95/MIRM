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
	 * Function MirStoryDungeonHudWindow_BP.MirStoryDungeonHudWindow_BP_C.OnSetActive
	 */
	struct AMirStoryDungeonHudWindow_BP_C_OnSetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Parameters;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirStoryDungeonHudWindow_BP.MirStoryDungeonHudWindow_BP_C.OnCharacterZoomState
	 */
	struct AMirStoryDungeonHudWindow_BP_C_OnCharacterZoomState_Params
	{
	public:
		bool                                                       isZoom;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MirStoryDungeonHudWindow_BP.MirStoryDungeonHudWindow_BP_C.OnShowKeyMappingGuidePage
	 */
	struct AMirStoryDungeonHudWindow_BP_C_OnShowKeyMappingGuidePage_Params
	{
	public:
		bool                                                       isShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       updateBindingText;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MirStoryDungeonHudWindow_BP.MirStoryDungeonHudWindow_BP_C.ExecuteUbergraph_MirStoryDungeonHudWindow_BP
	 */
	struct AMirStoryDungeonHudWindow_BP_C_ExecuteUbergraph_MirStoryDungeonHudWindow_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
