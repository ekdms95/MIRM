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
	 * AnimBlueprintGeneratedClass NPC_StoutFemale0051.NPC_StoutFemale0051_C
	 * Size -> 0x0498 (FullSize[0x0A18] - InheritedSize[0x0580])
	 */
	class UNPC_StoutFemale0051_C : public UMirAnimInstance
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
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_StoutFemale0051_AnimGraphNode_TransitionResult_C8A522DE4A0E615380B8F8A67C08FAEE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_StoutFemale0051_AnimGraphNode_TransitionResult_865A3ED447F071C88E4793B369EDEEE6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_StoutFemale0051_AnimGraphNode_TransitionResult_5CFB6451489D86BF4FEFC1AE22C6649D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_StoutFemale0051_AnimGraphNode_TransitionResult_2A436F0141EF295280D772B0E9083060();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_StoutFemale0051_AnimGraphNode_TransitionResult_0A6FA8404875EC56D4974D8F8228B285();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_StoutFemale0051_AnimGraphNode_TransitionResult_CE6B557A42D2984138C0379C4A8B5A30();
		void AnimNotify_OnExitAnim();
		void AnimNotify_OnStartAnim();
		void ExecuteUbergraph_NPC_StoutFemale0051(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
