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
	 * BlueprintGeneratedClass MyMirAIController_BP.MyMirAIController_BP_C
	 * Size -> 0x0008 (FullSize[0x0450] - InheritedSize[0x0448])
	 */
	class AMyMirAIController_BP_C : public AMyMirAIController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0448(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ReceivePossess(class APawn* PossessedPawn);
		void ExecuteUbergraph_MyMirAIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
