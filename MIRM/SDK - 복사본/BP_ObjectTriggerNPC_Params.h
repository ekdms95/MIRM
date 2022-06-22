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
	 * Function BP_ObjectTriggerNPC.BP_ObjectTriggerNPC_C.UserConstructionScript
	 */
	struct ABP_ObjectTriggerNPC_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ObjectTriggerNPC.BP_ObjectTriggerNPC_C.ReceiveBeginPlay
	 */
	struct ABP_ObjectTriggerNPC_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ObjectTriggerNPC.BP_ObjectTriggerNPC_C.ActiveGizmo
	 */
	struct ABP_ObjectTriggerNPC_C_ActiveGizmo_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ObjectTriggerNPC.BP_ObjectTriggerNPC_C.ExecuteUbergraph_BP_ObjectTriggerNPC
	 */
	struct ABP_ObjectTriggerNPC_C_ExecuteUbergraph_BP_ObjectTriggerNPC_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
