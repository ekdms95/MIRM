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
	 * Function HUD_Name_Tag.HUD_Name_Tag_C.SetMessageBubble
	 */
	struct UHUD_Name_Tag_C_SetMessageBubble_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Name_Tag.HUD_Name_Tag_C.GetForceCanvas
	 */
	struct UHUD_Name_Tag_C_GetForceCanvas_Params
	{	};

	/**
	 * Function HUD_Name_Tag.HUD_Name_Tag_C.GetHPCanvas
	 */
	struct UHUD_Name_Tag_C_GetHPCanvas_Params
	{
	public:
		class UMirCanvasPanel*                                     Canvas;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Name_Tag.HUD_Name_Tag_C.GetHPProgressImage
	 */
	struct UHUD_Name_Tag_C_GetHPProgressImage_Params
	{
	public:
		class UMirImage*                                           Image;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Name_Tag.HUD_Name_Tag_C.PreConstruct
	 */
	struct UHUD_Name_Tag_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Name_Tag.HUD_Name_Tag_C.SetCrimeValue
	 */
	struct UHUD_Name_Tag_C_SetCrimeValue_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PartyMemeber;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Name_Tag.HUD_Name_Tag_C.OnTextVisible
	 */
	struct UHUD_Name_Tag_C_OnTextVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Name_Tag.HUD_Name_Tag_C.ExecuteUbergraph_HUD_Name_Tag
	 */
	struct UHUD_Name_Tag_C_ExecuteUbergraph_HUD_Name_Tag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
