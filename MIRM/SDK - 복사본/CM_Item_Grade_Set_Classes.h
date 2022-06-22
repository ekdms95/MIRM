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
	 * WidgetBlueprintGeneratedClass CM_Item_Grade_Set.CM_Item_Grade_Set_C
	 * Size -> 0x0040 (FullSize[0x0320] - InheritedSize[0x02E0])
	 */
	class UCM_Item_Grade_Set_C : public UItemGradePrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMirTextBlock*                                       Cost_Count_txt;                                          // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirImage*                                           Grade_Bg_img;                                            // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirImage*                                           Grade_Front_Fx_img;                                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirImage*                                           Grade_Rear_Fx_img;                                       // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_Img;                                                // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirCanvasPanel*                                     Summon_Property_can;                                     // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirImage*                                           Summon_Property_img;                                     // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void Reflection_Grade_Set(E_GRADE Type);
		void Avatar_Grade_Set(E_GRADE Type);
		void Stone_Set_Grade(E_GRADE Selection);
		void Item_Set_Type(int32_t ItemIndex, E_ITEM_MAINTYPE Type_Switch, E_GRADE Grade_Switch);
		void Item_Set_Grade(E_GRADE grade);
		void Grade_Front_Fx(class UObject* FrontFx_img, bool is_On);
		void Grade_Rear_Fx(class UObject* RearFx_img, bool is_On);
		void Grade_Bg(class UObject* Image);
		void Equip_Set_Grade(E_GRADE grade, int32_t SetItemCount);
		void SetSummonStone(int32_t Cost, E_SUMMONS_COLOR_TYPE Type);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_CM_Item_Grade_Set(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
