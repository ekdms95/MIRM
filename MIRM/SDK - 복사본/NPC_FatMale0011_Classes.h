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
	 * AnimBlueprintGeneratedClass NPC_FatMale0011.NPC_FatMale0011_C
	 * Size -> 0x0498 (FullSize[0x0A18] - InheritedSize[0x0580])
	 */
	class UNPC_FatMale0011_C : public UMirAnimInstance
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
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_FatMale0011_AnimGraphNode_TransitionResult_4615329743C24497BA9ACBA5C60367B3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_FatMale0011_AnimGraphNode_TransitionResult_C3AE5CD54B2E8DA7D7316BB9BC1DA893();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_FatMale0011_AnimGraphNode_TransitionResult_B64BC7304540187878E1EC8A85A45100();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_FatMale0011_AnimGraphNode_TransitionResult_C8A347834DDA8785A4823A97C738030C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_FatMale0011_AnimGraphNode_TransitionResult_E469697E469747B80ACC3E8DDEF837D0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_FatMale0011_AnimGraphNode_TransitionResult_41B8057D4B54CF96EADBC98BAF3CCEB5();
		void AnimNotify_OnExitAnim();
		void AnimNotify_OnStartAnim();
		void ExecuteUbergraph_NPC_FatMale0011(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
