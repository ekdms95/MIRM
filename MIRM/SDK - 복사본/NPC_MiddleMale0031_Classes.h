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
	 * AnimBlueprintGeneratedClass NPC_MiddleMale0031.NPC_MiddleMale0031_C
	 * Size -> 0x0498 (FullSize[0x0A18] - InheritedSize[0x0580])
	 */
	class UNPC_MiddleMale0031_C : public UMirAnimInstance
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
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_MiddleMale0031_AnimGraphNode_TransitionResult_27561FC946E58D9FEE71B3B42F13F91E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_MiddleMale0031_AnimGraphNode_TransitionResult_FADD127D48B401B598DF259E9113D5E1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_MiddleMale0031_AnimGraphNode_TransitionResult_7C57181E4B77C47E52E974ADB0451988();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_MiddleMale0031_AnimGraphNode_TransitionResult_8D411EF1421A2C2737CFCD9FEB09D129();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_MiddleMale0031_AnimGraphNode_TransitionResult_5771C4404C8605D750C7B58278716B16();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_MiddleMale0031_AnimGraphNode_TransitionResult_5529003344355E2A6F572DA04C6383BD();
		void AnimNotify_OnExitAnim();
		void AnimNotify_OnStartAnim();
		void ExecuteUbergraph_NPC_MiddleMale0031(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
