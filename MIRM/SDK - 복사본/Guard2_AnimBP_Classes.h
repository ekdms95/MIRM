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
	 * AnimBlueprintGeneratedClass Guard2_AnimBP.Guard2_AnimBP_C
	 * Size -> 0x1DA0 (FullSize[0x2320] - InheritedSize[0x0580])
	 */
	class UGuard2_AnimBP_C : public UMirAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0580(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0588(0x0030)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x05B8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x05D8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x05F8(0x0108)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_50;                       // 0x0700(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_49;                       // 0x0728(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_48;                       // 0x0750(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_47;                       // 0x0778(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_46;                       // 0x07A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_45;                       // 0x07C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_44;                       // 0x07F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_43;                       // 0x0818(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_42;                       // 0x0840(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_41;                       // 0x0868(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_40;                       // 0x0890(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39;                       // 0x08B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_38;                       // 0x08E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_37;                       // 0x0908(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36;                       // 0x0930(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_35;                       // 0x0958(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_34;                       // 0x0980(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_33;                       // 0x09A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32;                       // 0x09D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31;                       // 0x09F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30;                       // 0x0A20(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29;                       // 0x0A48(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_28;                       // 0x0A70(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0x0A98(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x0AC0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x0AE8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x0B10(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x0B38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x0B60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x0B88(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x0BB0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x0BD8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x0C00(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x0C28(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x0C50(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x0C78(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x0CA0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x0CC8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0CF0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0D18(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0D40(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0D68(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0D90(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0DB8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0DE0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0E08(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0E30(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0E58(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0E80(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0EA8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x0ED0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_24;                            // 0x0F50(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x0F80(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_23;                            // 0x1000(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x1030(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_22;                            // 0x10B0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x10E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_21;                            // 0x1160(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x1190(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_20;                            // 0x1210(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x1240(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_19;                            // 0x12C0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x12F0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x1370(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x13A0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x1420(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x1450(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x14D0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x1500(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x1580(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x15B0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x1630(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x1660(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x16E0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x1710(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x1790(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x17C0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x1840(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x1870(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x18F0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x1920(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x19A0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x19D0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x1A50(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x1A80(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x1B00(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x1B30(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x1BB0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x1BE0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1C60(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1C90(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x1D10(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1D40(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x1DC0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1DF0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1E70(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x1EA0(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x1F88(0x00E8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x2070(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x2138(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x2168(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x2218(0x0108)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_ModifyBone_0C1431E64A7813BD8F2A51BD895CC122();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_C9C16001482C8ECE67776EB07900AA15();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_CF2C81514FAF3230BD62B6830C5891B0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_C263DE6543ABF90819461F9BCC66D15C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_3F2EB9C94DE06FF88BBB1CA9375C283A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_36D72035469DFA946B7BCA816E13C7E5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_376C2B624094BF55602E88B8722959E9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_E96CFF764C063F1D5BFC69ADCDE92A2A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_04383E304AD376851218EC82290FFFDF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_CFDA757443EB5FAB1F36AA8766D5EA8D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_7A9DF12C4E36008C36D688B858B343D3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_B4851275471AF53B635C4491C7F54358();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_4D11EDB44DC93DBFACE7C99619484A42();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_777697094EFA40D640DA24B6FB9A0894();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_A706C12E4ABCCF7C0C7C0891A9770202();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_6D4D78674D7CEA2F4F714C909FE53A83();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_E9A0CDA84134B4ADC7677ABEB242F20F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_E831700F4B21F6425809F496FA51C080();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_0C5D80034C2611ACC5FE889C818A930C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_D99305DD405A4EFF3715FB9B76BA84C5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_BD8874DB4C9CDED0A99AABB863B978E3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_4E3F41FD44B6DD0F0C9844A008A79387();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_C5571E834FD1D62F0A1EF7A9E742EF96();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_B78D28774D1A37FA4E435F808B4326E2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_BE2A71D94505EA5AB442718769C3152F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_0050BF7C4170AF6D05E2A58DC1FD39FE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_69EA2643411E6D1658DB829AA4F6825D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_F8F5240C4A911A7BA776ED8A5B544F68();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_D9CE5758440F7CD5639F69A81525D20B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_18C59E5343EB36486CC18CB8C35BBA2A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_47003E69485FD3142E00D994277C2B12();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_9F384B6E4C644130C13A3CB4C4F01169();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_1DD8684E413EF4E2A5DB5BB7DEB885F3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_5E276BEA4F26E3EDBE91D0A862CA0101();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_0D9BF6DA4357F59DD7711F9394C877D8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_377A9EFF43E8EDB780F102B97C93049B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_628DFD05437098771E506789E8893CFB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_D4F1DDB64414EEED58D5F5ACC860C26A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_99C87FA24EFAF81AF3A94689BBF0EDEC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_69129F494573409935B4789B1B68F757();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_02AFA1544F56E81ACF305AB33B6382B5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_18F3832140DCE376395C81AAA1F3545B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_586324F245A59BBCA3F356AD40050544();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_5C6E64964F068141829320ADFDEC9F75();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_E1C436034F1190467BD23E92B82C3D36();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_9C0E9B0041AA6EA8DE4323AEBFA28C13();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_C67A4F584237A811DF01E2BAD411CEBA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_035B012D4F23AFA2B1E4FF8B7EA6B71C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_7426D4854FBAD55AA7A9228C0E8876F2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_DFB16BFC46025DA733449EB8970D32F8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Guard2_AnimBP_AnimGraphNode_TransitionResult_020216CD45C11553489550A294C55DFF();
		void AnimNotify_OnExitAnim();
		void AnimNotify_OnStartAnim();
		void ExecuteUbergraph_Guard2_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
