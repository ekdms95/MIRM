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
	 * Function SoundManager_BP.SoundManager_BP_C.Setup
	 */
	struct USoundManager_BP_C_Setup_Params
	{	};

	/**
	 * Function SoundManager_BP.SoundManager_BP_C.OnSetup
	 */
	struct USoundManager_BP_C_OnSetup_Params
	{	};

	/**
	 * Function SoundManager_BP.SoundManager_BP_C.ExecuteUbergraph_SoundManager_BP
	 */
	struct USoundManager_BP_C_ExecuteUbergraph_SoundManager_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
