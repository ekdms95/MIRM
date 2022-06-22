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
	 * WidgetBlueprintGeneratedClass Hud_QuestInfo_Group_Quest.Hud_QuestInfo_Group_Quest_C
	 * Size -> 0x0028 (FullSize[0x0310] - InheritedSize[0x02E8])
	 */
	class UHud_QuestInfo_Group_Quest_C : public UQuestInfoPrefab
	{
	public:
		class UMirImage*                                           QInfoBox_Group_Quest_Bg_img;                             // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirTextBlock*                                       QInfoBox_Group_Quest_txt;                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirTextBlock*                                       QInfoBox_Group_Value_txt;                                // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirTextBlock*                                       NewVar_3;                                                // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMirImage*                                           QInfoBoxBg_img_1;                                        // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetComplete(bool bComplete);
		void SetHighlight(bool Active);
		void SetProgress(const class FText& Text);
		void SetContext(const class FText& Text);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
