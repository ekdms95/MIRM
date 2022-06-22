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
	 * Function TalkboxWindow_BP.TalkboxWindow_BP_C.OnSetActive
	 */
	struct ATalkboxWindow_BP_C_OnSetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Parameters;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function TalkboxWindow_BP.TalkboxWindow_BP_C.OnReceivePrefabMessage
	 */
	struct ATalkboxWindow_BP_C_OnReceivePrefabMessage_Params
	{
	public:
		class FName                                                PrefabMessage;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              PrefabParameters;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function TalkboxWindow_BP.TalkboxWindow_BP_C.OnSetVisible
	 */
	struct ATalkboxWindow_BP_C_OnSetVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TalkboxWindow_BP.TalkboxWindow_BP_C.ExecuteUbergraph_TalkboxWindow_BP
	 */
	struct ATalkboxWindow_BP_C_ExecuteUbergraph_TalkboxWindow_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
