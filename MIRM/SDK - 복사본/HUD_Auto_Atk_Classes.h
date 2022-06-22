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
	 * WidgetBlueprintGeneratedClass HUD_Auto_Atk.HUD_Auto_Atk_C
	 * Size -> 0x0038 (FullSize[0x0310] - InheritedSize[0x02D8])
	 */
	class UHUD_Auto_Atk_C : public UMirPrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHUD_Auto_Other_Btn_C*                               HUD_Auto_Other_Btn;                                      // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Fear_Chain_C*                                    HUD_AutoBtn_chain;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Cover_1;                                                 // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IconActive;                                              // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YG28[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChangeIconActive;                                      // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void IsPlayingAutoAttack(bool* IsPlaying);
		void OnFearState(bool IsFear);
		void SetAnimation(bool IsActive);
		void GetIsAutoPlay(struct FAutoPlayProcessUnit* AutoPlayProcessUnit);
		void SetAutoPlay(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit);
		void OnActiveFromPageHUDDispatcher_Event(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit);
		void Construct();
		void BndEvt__HUD_Auto_Atk_HUD_Auto_Other_Btn_K2Node_ComponentBoundEvent_0_AutoBtn__DelegateSignature();
		void ExecuteUbergraph_HUD_Auto_Atk(int32_t EntryPoint);
		void OnChangeIconActive__DelegateSignature(bool IsActive);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
