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
	 * Function Hud_UMpHp.Hud_UMpHp_C.UsePotionEffect
	 */
	struct UHud_UMpHp_C_UsePotionEffect_Params
	{
	public:
		unsigned char                                              ItemType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_UMpHp.Hud_UMpHp_C.Construct
	 */
	struct UHud_UMpHp_C_Construct_Params
	{	};

	/**
	 * Function Hud_UMpHp.Hud_UMpHp_C.Tick
	 */
	struct UHud_UMpHp_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_UMpHp.Hud_UMpHp_C.Line_Image_Collapse
	 */
	struct UHud_UMpHp_C_Line_Image_Collapse_Params
	{	};

	/**
	 * Function Hud_UMpHp.Hud_UMpHp_C.PreConstruct
	 */
	struct UHud_UMpHp_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_UMpHp.Hud_UMpHp_C.ExecuteUbergraph_Hud_UMpHp
	 */
	struct UHud_UMpHp_C_ExecuteUbergraph_Hud_UMpHp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
