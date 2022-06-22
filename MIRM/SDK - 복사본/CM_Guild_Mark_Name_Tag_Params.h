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
	 * Function CM_Guild_Mark_Name_Tag.CM_Guild_Mark_Name_Tag_C.GuildName_Txt_Return
	 */
	struct UCM_Guild_Mark_Name_Tag_C_GuildName_Txt_Return_Params
	{
	public:
		class UMirTextBlock*                                       CM_Guild_Name_txt;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Guild_Mark_Name_Tag.CM_Guild_Mark_Name_Tag_C.PreConstruct
	 */
	struct UCM_Guild_Mark_Name_Tag_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Guild_Mark_Name_Tag.CM_Guild_Mark_Name_Tag_C.ExecuteUbergraph_CM_Guild_Mark_Name_Tag
	 */
	struct UCM_Guild_Mark_Name_Tag_C_ExecuteUbergraph_CM_Guild_Mark_Name_Tag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
