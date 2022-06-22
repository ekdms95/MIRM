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
	 * Function CT_ChatBubble.CT_ChatBubble_C.CheckMessageLen
	 */
	struct UCT_ChatBubble_C_CheckMessageLen_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                OutText;                                                 // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function CT_ChatBubble.CT_ChatBubble_C.SetMessageBubble
	 */
	struct UCT_ChatBubble_C_SetMessageBubble_Params
	{
	public:
		class FText                                                inMessage;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       CutoffLongMessage;                                       // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      newMaxOnTime;                                            // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CT_ChatBubble.CT_ChatBubble_C.Construct
	 */
	struct UCT_ChatBubble_C_Construct_Params
	{	};

	/**
	 * Function CT_ChatBubble.CT_ChatBubble_C.Tick
	 */
	struct UCT_ChatBubble_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CT_ChatBubble.CT_ChatBubble_C.ExecuteUbergraph_CT_ChatBubble
	 */
	struct UCT_ChatBubble_C_ExecuteUbergraph_CT_ChatBubble_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
