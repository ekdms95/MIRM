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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CharacterDPActor_BP.CharacterDPActor_BP_C.LookAtCamera
	 */
	struct ACharacterDPActor_BP_C_LookAtCamera_Params
	{
	public:
		class UCameraComponent*                                    Camera;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterDPActor_BP.CharacterDPActor_BP_C.OnSetVisibility
	 */
	struct ACharacterDPActor_BP_C_OnSetVisibility_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterDPActor_BP.CharacterDPActor_BP_C.ReceiveBeginPlay
	 */
	struct ACharacterDPActor_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CharacterDPActor_BP.CharacterDPActor_BP_C.ReceiveTick
	 */
	struct ACharacterDPActor_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterDPActor_BP.CharacterDPActor_BP_C.ExecuteUbergraph_CharacterDPActor_BP
	 */
	struct ACharacterDPActor_BP_C_ExecuteUbergraph_CharacterDPActor_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterDPActor_BP.CharacterDPActor_BP_C.OnSetCharacterDispatcher__DelegateSignature
	 */
	struct ACharacterDPActor_BP_C_OnSetCharacterDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
