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
	 * Function Loading_Icon.Loading_Icon_C.Rotation
	 */
	struct ULoading_Icon_C_Rotation_Params
	{	};

	/**
	 * Function Loading_Icon.Loading_Icon_C.LoadingIcon
	 */
	struct ULoading_Icon_C_LoadingIcon_Params
	{	};

	/**
	 * Function Loading_Icon.Loading_Icon_C.Tick
	 */
	struct ULoading_Icon_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Loading_Icon.Loading_Icon_C.ExecuteUbergraph_Loading_Icon
	 */
	struct ULoading_Icon_C_ExecuteUbergraph_Loading_Icon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
