/**
 * Name: MIRM
 * Version: 0623
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_SlotGradeEff.CM_SlotGradeEff_C.PlayAni
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_SlotGradeEff_C::PlayAni(bool bIsPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_SlotGradeEff.CM_SlotGradeEff_C.PlayAni");
		
		UCM_SlotGradeEff_C_PlayAni_Params params {};
		params.bIsPlay = bIsPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_SlotGradeEff.CM_SlotGradeEff_C.SetGrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_GRADE                                            grade                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPlay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_SlotGradeEff_C::SetGrade(E_GRADE grade, bool IsPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_SlotGradeEff.CM_SlotGradeEff_C.SetGrade");
		
		UCM_SlotGradeEff_C_SetGrade_Params params {};
		params.grade = grade;
		params.IsPlay = IsPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_SlotGradeEff.CM_SlotGradeEff_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_SlotGradeEff_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_SlotGradeEff.CM_SlotGradeEff_C.PreConstruct");
		
		UCM_SlotGradeEff_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_SlotGradeEff.CM_SlotGradeEff_C.ExecuteUbergraph_CM_SlotGradeEff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_SlotGradeEff_C::ExecuteUbergraph_CM_SlotGradeEff(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_SlotGradeEff.CM_SlotGradeEff_C.ExecuteUbergraph_CM_SlotGradeEff");
		
		UCM_SlotGradeEff_C_ExecuteUbergraph_CM_SlotGradeEff_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_SlotGradeEff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_SlotGradeEff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_SlotGradeEff.CM_SlotGradeEff_C");
		return ptr;
	}

}


