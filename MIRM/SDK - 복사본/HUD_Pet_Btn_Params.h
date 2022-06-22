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
	 * Function HUD_Pet_Btn.HUD_Pet_Btn_C.CheckStoryDungeonBlock
	 */
	struct UHUD_Pet_Btn_C_CheckStoryDungeonBlock_Params
	{
	public:
		bool                                                       bLock;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Pet_Btn.HUD_Pet_Btn_C.State_Visibility
	 */
	struct UHUD_Pet_Btn_C_State_Visibility_Params
	{
	public:
		ESlateVisibility                                           Disable_visi;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Progress_Circle_visi;                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Hungry_Icon_visi;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Pet_Btn.HUD_Pet_Btn_C.BndEvt__Pet_Summon_btn_K2Node_ComponentBoundEvent_1_MbtnClick__DelegateSignature
	 */
	struct UHUD_Pet_Btn_C_BndEvt__Pet_Summon_btn_K2Node_ComponentBoundEvent_1_MbtnClick__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_Pet_Btn.HUD_Pet_Btn_C.PreConstruct
	 */
	struct UHUD_Pet_Btn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Pet_Btn.HUD_Pet_Btn_C.OnPreSet
	 */
	struct UHUD_Pet_Btn_C_OnPreSet_Params
	{	};

	/**
	 * Function HUD_Pet_Btn.HUD_Pet_Btn_C.Tick
	 */
	struct UHUD_Pet_Btn_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Pet_Btn.HUD_Pet_Btn_C.OnInitailizeWidget
	 */
	struct UHUD_Pet_Btn_C_OnInitailizeWidget_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Pet_Btn.HUD_Pet_Btn_C.OnPetSpawnState
	 */
	struct UHUD_Pet_Btn_C_OnPetSpawnState_Params
	{
	public:
		bool                                                       isspawn;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Pet_Btn.HUD_Pet_Btn_C.ExecuteUbergraph_HUD_Pet_Btn
	 */
	struct UHUD_Pet_Btn_C_ExecuteUbergraph_HUD_Pet_Btn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
