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
	 * WidgetBlueprintGeneratedClass HUD_Auto_Collect.HUD_Auto_Collect_C
	 * Size -> 0x0030 (FullSize[0x0308] - InheritedSize[0x02D8])
	 */
	class UHUD_Auto_Collect_C : public UMirPrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHUD_Auto_Other_Btn_C*                               HUD_Auto_Other_Btn;                                      // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Fear_Chain_C*                                    HUD_AutoBtn_chain;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IconActive;                                              // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ULO9[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChangeIconActive;                                      // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnFearState(bool IsFear);
		void SetAnimation(bool IsActive);
		void GetIsAutoPlay(struct FAutoPlayProcessUnit* AutoPlayProcessUnit);
		void SetAutoPlay(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit);
		void Construct();
		void OnActiveFromPageHUDDispatcher_Event(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit);
		void BndEvt__HUD_Auto_Collect_HUD_Auto_Other_Btn_K2Node_ComponentBoundEvent_1_AutoBtn__DelegateSignature();
		void ExecuteUbergraph_HUD_Auto_Collect(int32_t EntryPoint);
		void OnChangeIconActive__DelegateSignature(bool IsActive);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
