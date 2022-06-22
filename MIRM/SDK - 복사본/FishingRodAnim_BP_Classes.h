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
	 * AnimBlueprintGeneratedClass FishingRodAnim_BP.FishingRodAnim_BP_C
	 * Size -> 0x0698 (FullSize[0x0C18] - InheritedSize[0x0580])
	 */
	class UFishingRodAnim_BP_C : public UMirAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0580(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0588(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x05B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x05E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0608(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0630(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0658(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0680(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x06A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x06D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x06F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0720(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0748(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x07C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x07F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0878(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x08A8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0928(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0958(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x09D8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0A08(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0A88(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0AB8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0B38(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0B68(0x00B0)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingRodAnim_BP_AnimGraphNode_TransitionResult_0BCF438147A5240166DBC884C35D405E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingRodAnim_BP_AnimGraphNode_TransitionResult_68E913F644735005D6C6EF914937FD81();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingRodAnim_BP_AnimGraphNode_TransitionResult_EA005BF54F3B1940F8AA0B875854165B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingRodAnim_BP_AnimGraphNode_TransitionResult_F70C386F4C2CD2CAE0B723ADAA3ADB6E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingRodAnim_BP_AnimGraphNode_TransitionResult_CD35C4174DDEA7007B4BB0BACDC8FF2F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingRodAnim_BP_AnimGraphNode_TransitionResult_9F63725D49F80A0CC4D291AAA63CB354();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingRodAnim_BP_AnimGraphNode_TransitionResult_23E835F54946BC226B48B09469B8812A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingRodAnim_BP_AnimGraphNode_TransitionResult_2A2A505C4BCED4AEC9577A9DE1E4E104();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingRodAnim_BP_AnimGraphNode_TransitionResult_A4E7D31F470FB41D916CB2B09E72937C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FishingRodAnim_BP_AnimGraphNode_TransitionResult_633FF9264B1EACA203F6FD8999DABD9E();
		void AnimNotify_OnStartAnim();
		void AnimNotify_OnExitAnim();
		void ExecuteUbergraph_FishingRodAnim_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
