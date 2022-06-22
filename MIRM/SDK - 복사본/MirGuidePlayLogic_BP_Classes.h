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
	 * BlueprintGeneratedClass MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C
	 * Size -> 0x0020 (FullSize[0x0270] - InheritedSize[0x0250])
	 */
	class AMirGuidePlayLogic_BP_C : public AMirGuidePlayLogic
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FString                                              AutoPlayMessage;                                         // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void OnStopBP(const class FString& Contents);
		void OnStartBP(const class FString& Contents);
		void OnInitBP();
		void OnDestroyBP();
		void ExecuteUbergraph_MirGuidePlayLogic_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
