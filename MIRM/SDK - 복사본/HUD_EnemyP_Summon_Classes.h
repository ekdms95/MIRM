﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass HUD_EnemyP_Summon.HUD_EnemyP_Summon_C
	 * Size -> 0x0010 (FullSize[0x0330] - InheritedSize[0x0320])
	 */
	class UHUD_EnemyP_Summon_C : public UHUDEnemyGaugeElementPrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHUD_ComProfile_C*                                   HUD_EnemyP_Nor;                                          // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_HUD_EnemyP_Summon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
