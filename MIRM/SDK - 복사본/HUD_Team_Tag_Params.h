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
	 * Function HUD_Team_Tag.HUD_Team_Tag_C.GetHPCanvas
	 */
	struct UHUD_Team_Tag_C_GetHPCanvas_Params
	{
	public:
		class UMirCanvasPanel*                                     Canvas;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Team_Tag.HUD_Team_Tag_C.GetHPProgressImage
	 */
	struct UHUD_Team_Tag_C_GetHPProgressImage_Params
	{
	public:
		class UMirImage*                                           Image;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Team_Tag.HUD_Team_Tag_C.OnPreSet
	 */
	struct UHUD_Team_Tag_C_OnPreSet_Params
	{	};

	/**
	 * Function HUD_Team_Tag.HUD_Team_Tag_C.OnTextVisible
	 */
	struct UHUD_Team_Tag_C_OnTextVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Team_Tag.HUD_Team_Tag_C.Construct
	 */
	struct UHUD_Team_Tag_C_Construct_Params
	{	};

	/**
	 * Function HUD_Team_Tag.HUD_Team_Tag_C.PreConstruct
	 */
	struct UHUD_Team_Tag_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Team_Tag.HUD_Team_Tag_C.ExecuteUbergraph_HUD_Team_Tag
	 */
	struct UHUD_Team_Tag_C_ExecuteUbergraph_HUD_Team_Tag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
