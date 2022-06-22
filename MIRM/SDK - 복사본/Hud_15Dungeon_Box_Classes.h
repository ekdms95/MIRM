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
	 * WidgetBlueprintGeneratedClass Hud_15Dungeon_Box.Hud_15Dungeon_Box_C
	 * Size -> 0x0028 (FullSize[0x0310] - InheritedSize[0x02E8])
	 */
	class UHud_15Dungeon_Box_C : public UHUDDungeonMembersBoxPrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHud_PaProfile_New_C*                                _15_Profile_01;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_PaProfile_New_C*                                _15_Profile_02;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_PaProfile_New_C*                                _15_Profile_03;                                          // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_PaProfile_New_C*                                _15_Profile_04;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Hud_15Dungeon_Box_15_Profile_01_K2Node_ComponentBoundEvent_0_List_Click_Dispatch__DelegateSignature();
		void BndEvt__Hud_15Dungeon_Box_15_Profile_02_K2Node_ComponentBoundEvent_1_List_Click_Dispatch__DelegateSignature();
		void BndEvt__Hud_15Dungeon_Box_15_Profile_03_K2Node_ComponentBoundEvent_2_List_Click_Dispatch__DelegateSignature();
		void BndEvt__Hud_15Dungeon_Box_15_Profile_04_K2Node_ComponentBoundEvent_3_List_Click_Dispatch__DelegateSignature();
		void ExecuteUbergraph_Hud_15Dungeon_Box(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
