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
	 * Function CM_Tost_Message_Wide.CM_Tost_Message_Wide_C.Set Toast Text
	 */
	struct UCM_Tost_Message_Wide_C_Set_Toast_Text_Params
	{
	public:
		bool                                                       IsSub;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              FirstText;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SecondText;                                              // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SubText;                                                 // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Tost_Message_Wide.CM_Tost_Message_Wide_C.Construct
	 */
	struct UCM_Tost_Message_Wide_C_Construct_Params
	{	};

	/**
	 * Function CM_Tost_Message_Wide.CM_Tost_Message_Wide_C.ExecuteUbergraph_CM_Tost_Message_Wide
	 */
	struct UCM_Tost_Message_Wide_C_ExecuteUbergraph_CM_Tost_Message_Wide_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
