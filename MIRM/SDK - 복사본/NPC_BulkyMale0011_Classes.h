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
	 * AnimBlueprintGeneratedClass NPC_BulkyMale0011.NPC_BulkyMale0011_C
	 * Size -> 0x0498 (FullSize[0x0A18] - InheritedSize[0x0580])
	 */
	class UNPC_BulkyMale0011_C : public UMirAnimInstance
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

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BulkyMale0011_AnimGraphNode_TransitionResult_EABB4E7341EF7DA926F2DBA1C059F40C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BulkyMale0011_AnimGraphNode_TransitionResult_F174CC3A4EDF2809874A28A606131DBB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BulkyMale0011_AnimGraphNode_TransitionResult_63F461944499E51E760ACC9E8FE79BAF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BulkyMale0011_AnimGraphNode_TransitionResult_562C0F5949BFF600E1BCEA95C1DADF6D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BulkyMale0011_AnimGraphNode_TransitionResult_1B56B4F74ED35AC7A8CE62B835BA6B51();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BulkyMale0011_AnimGraphNode_TransitionResult_7030BB8843D9B05BC982EEACB007C2F9();
		void AnimNotify_OnExitAnim();
		void AnimNotify_OnStartAnim();
		void ExecuteUbergraph_NPC_BulkyMale0011(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
