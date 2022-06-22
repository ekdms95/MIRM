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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass Page_Hud_Dungeon_Buttons.Page_Hud_Dungeon_Buttons_C
	 * Size -> 0x0018 (FullSize[0x0300] - InheritedSize[0x02E8])
	 */
	class UPage_Hud_Dungeon_Buttons_C : public UHUDDungeonButtonPage
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHUD_Buttons_Dungeon_C*                              HUD_Buttons_Dungeon;                                     // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPage_Hud_Safe_Slot_C*                               HUD_Buttons_Dungeon_safe;                                // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void BndEvt__HUD_Buttons_Dungeon_K2Node_ComponentBoundEvent_0_ExitDispatcher__DelegateSignature();
		void ExecuteUbergraph_Page_Hud_Dungeon_Buttons(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
