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
	 * AnimBlueprintGeneratedClass NPC_StoutFemale0011.NPC_StoutFemale0011_C
	 * Size -> 0x0498 (FullSize[0x0A18] - InheritedSize[0x0580])
	 */
	class UNPC_StoutFemale0011_C : public UMirAnimInstance
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
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_StoutFemale0011_AnimGraphNode_TransitionResult_79A31B42471169B5464FC987298E7328();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_StoutFemale0011_AnimGraphNode_TransitionResult_353F52E64A2113693287DFA8CCEBB8B0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_StoutFemale0011_AnimGraphNode_TransitionResult_211E2941493D2A0B2CE9A798E52072DB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_StoutFemale0011_AnimGraphNode_TransitionResult_252602244E3A528A5ED1C7A713A1DF0E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_StoutFemale0011_AnimGraphNode_TransitionResult_EF9D15F54F0617335E11419C4C8AC2F8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_StoutFemale0011_AnimGraphNode_TransitionResult_0D900D9D479DB2ED27265F9BD9BC555F();
		void AnimNotify_OnExitAnim();
		void AnimNotify_OnStartAnim();
		void ExecuteUbergraph_NPC_StoutFemale0011(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
