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
	 * AnimBlueprintGeneratedClass NPC_SturdyMale0041.NPC_SturdyMale0041_C
	 * Size -> 0x06E8 (FullSize[0x0C68] - InheritedSize[0x0580])
	 */
	class UNPC_SturdyMale0041_C : public UMirAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0580(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0588(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x05B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x05E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0608(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0630(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0658(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0680(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x06A8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0728(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0758(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x07D8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0808(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0888(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x08B8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0938(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0968(0x00B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0A18(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0A38(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0B40(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0B60(0x0108)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SturdyMale0041_AnimGraphNode_TransitionResult_F33966E44B345CEA7B94DB859D31FB33();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SturdyMale0041_AnimGraphNode_TransitionResult_FF679D144024B79B37B62FB789A3E317();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SturdyMale0041_AnimGraphNode_TransitionResult_5DAD1E4D4FF5E0E687C3A69F10496236();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SturdyMale0041_AnimGraphNode_TransitionResult_5F46F47C4E9E3D3D0B6DFC94EFAA6FEB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SturdyMale0041_AnimGraphNode_TransitionResult_A616A80148683FC3F52AEBB32026BB0A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SturdyMale0041_AnimGraphNode_TransitionResult_109579BA47D3A751A67A12B0928F8B0B();
		void AnimNotify_OnExitAnim();
		void AnimNotify_OnStartAnim();
		void ExecuteUbergraph_NPC_SturdyMale0041(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
