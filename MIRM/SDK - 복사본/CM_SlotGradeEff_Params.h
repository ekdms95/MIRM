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
	 * Function CM_SlotGradeEff.CM_SlotGradeEff_C.PlayAni
	 */
	struct UCM_SlotGradeEff_C_PlayAni_Params
	{
	public:
		bool                                                       bIsPlay;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_SlotGradeEff.CM_SlotGradeEff_C.SetGrade
	 */
	struct UCM_SlotGradeEff_C_SetGrade_Params
	{
	public:
		E_GRADE                                                    grade;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPlay;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_SlotGradeEff.CM_SlotGradeEff_C.PreConstruct
	 */
	struct UCM_SlotGradeEff_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_SlotGradeEff.CM_SlotGradeEff_C.ExecuteUbergraph_CM_SlotGradeEff
	 */
	struct UCM_SlotGradeEff_C_ExecuteUbergraph_CM_SlotGradeEff_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
