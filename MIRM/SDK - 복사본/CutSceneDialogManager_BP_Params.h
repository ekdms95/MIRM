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
	 * Function CutSceneDialogManager_BP.CutSceneDialogManager_BP_C.ReceiveBeginPlay
	 */
	struct ACutSceneDialogManager_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CutSceneDialogManager_BP.CutSceneDialogManager_BP_C.SetDialog
	 */
	struct ACutSceneDialogManager_BP_C_SetDialog_Params
	{
	public:
		int32_t                                                    TalkerNameID;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DialogID;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CutSceneDialogManager_BP.CutSceneDialogManager_BP_C.ReceiveDestroyed
	 */
	struct ACutSceneDialogManager_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function CutSceneDialogManager_BP.CutSceneDialogManager_BP_C.ExecuteUbergraph_CutSceneDialogManager_BP
	 */
	struct ACutSceneDialogManager_BP_C_ExecuteUbergraph_CutSceneDialogManager_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
