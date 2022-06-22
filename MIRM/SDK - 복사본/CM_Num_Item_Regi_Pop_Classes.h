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
	 * WidgetBlueprintGeneratedClass CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C
	 * Size -> 0x0358 (FullSize[0x0630] - InheritedSize[0x02D8])
	 */
	class UCM_Num_Item_Regi_Pop_C : public UMirPrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCM_Item_Icon_C*                                     CM_Item_Icon;                                            // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_PopupBgSet_C*                                    CM_Num_Item_Regi_Pop;                                    // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadEX_C*                                      CM_NumPadEX;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Horizon_Goods_Value_Set_C*                       Item_Goods_Value_Set;                                    // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirTextBlock*                                       Item_Name_txt;                                           // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirTextBlock*                                       Tax_txt;                                                 // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    Title_Text_set;                                          // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CT8T[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             NumpadEventDispatcher;                                   // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             CloseDispatcher;                                         // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnChangeCurrNumberValue;                                 // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ConfirmDispatcher;                                       // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       showgoods;                                               // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QG53[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    ItemUid;                                                 // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FItem_Data                                          ItemData;                                                // 0x0368(0x02C8) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetTaxText(class UMirTextBlock** txt);
		void SetTitleText(const class FString& TitleText);
		void Setup(const struct FItem_Data& InItemData, int64_t InItemUID);
		void BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_2_PopClose__DelegateSignature();
		void BndEvt__CM_NumPadEX_K2Node_ComponentBoundEvent_3_OnChangeCurrNumberValue_DP__DelegateSignature(int32_t currNumberValue);
		void BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_0_PopNoBtn__DelegateSignature();
		void BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_1_PopYesBtn__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_CM_Num_Item_Regi_Pop(int32_t EntryPoint);
		void ConfirmDispatcher__DelegateSignature();
		void OnChangeCurrNumberValue__DelegateSignature(int32_t Value);
		void CloseDispatcher__DelegateSignature();
		void NumpadEventDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
