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
	 * Function HUD_Town_Dungeon_Box.HUD_Town_Dungeon_Box_C.PreConstruct
	 */
	struct UHUD_Town_Dungeon_Box_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Town_Dungeon_Box.HUD_Town_Dungeon_Box_C.Construct
	 */
	struct UHUD_Town_Dungeon_Box_C_Construct_Params
	{	};

	/**
	 * Function HUD_Town_Dungeon_Box.HUD_Town_Dungeon_Box_C.OnInitailizeWidget
	 */
	struct UHUD_Town_Dungeon_Box_C_OnInitailizeWidget_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Town_Dungeon_Box.HUD_Town_Dungeon_Box_C.ExecuteUbergraph_HUD_Town_Dungeon_Box
	 */
	struct UHUD_Town_Dungeon_Box_C_ExecuteUbergraph_HUD_Town_Dungeon_Box_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Town_Dungeon_Box.HUD_Town_Dungeon_Box_C.ClickDispatcher__DelegateSignature
	 */
	struct UHUD_Town_Dungeon_Box_C_ClickDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
