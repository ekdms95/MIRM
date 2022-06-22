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
	 * BlueprintGeneratedClass EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C
	 * Size -> 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
	 */
	class AEDAnimation_Bazier_BP_C : public AEnvironmentDecoAnimBezier
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FVector>                                     PointArray;                                              // 0x0280(0x0010) Edit, BlueprintVisible

	public:
		bool OnDrawDebug(TArray<struct FVector> PointArray);
		bool OnMakePath(TArray<struct FVector> PointArray);
		bool OnReset();
		struct FVector OnGetLocation();
		void UserConstructionScript();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void OnPlay();
		void OnStop();
		void ExecuteUbergraph_EDAnimation_Bazier_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
