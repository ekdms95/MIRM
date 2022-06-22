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
	 * WidgetBlueprintGeneratedClass HUD_Fixed_Character.HUD_Fixed_Character_C
	 * Size -> 0x0038 (FullSize[0x0310] - InheritedSize[0x02D8])
	 */
	class UHUD_Fixed_Character_C : public UMirPrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Auto_Fixed_On;                                           // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UHUD_Auto_FixedCharacter_C*                          HUD_Auto_FixedCharacter;                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Fear_Chain_C*                                    HUD_AutoBtn_chain;                                       // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IconActive;                                              // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A2LE[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ToggleDispatcher;                                        // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnFearState(bool IsFear);
		void SetAnimation(bool IsActive);
		void GetIsAutoPlay(struct FAutoPlayProcessUnit* AutoPlayProcessUnit);
		void SetAutoPlay(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit);
		void BndEvt__HUD_Fixed_Character_HUD_Auto_FixedCharacter_K2Node_ComponentBoundEvent_1_AutoBtn__DelegateSignature();
		void ExecuteUbergraph_HUD_Fixed_Character(int32_t EntryPoint);
		void ToggleDispatcher__DelegateSignature(bool IsOn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
