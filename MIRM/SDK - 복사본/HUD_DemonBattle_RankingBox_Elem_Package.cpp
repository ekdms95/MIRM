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
	 * 		Name   -> Function HUD_DemonBattle_RankingBox_Elem.HUD_DemonBattle_RankingBox_Elem_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Ranking                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_CLASS_TYPE                                       ClassType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EARENA_TEAM                                        Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DemonBattle_RankingBox_Elem_C::SetInfo(int32_t Ranking, E_CLASS_TYPE ClassType, const class FString& nickname, int32_t score, EARENA_TEAM Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DemonBattle_RankingBox_Elem.HUD_DemonBattle_RankingBox_Elem_C.SetInfo");
		
		UHUD_DemonBattle_RankingBox_Elem_C_SetInfo_Params params {};
		params.Ranking = Ranking;
		params.ClassType = ClassType;
		params.nickname = nickname;
		params.score = score;
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DemonBattle_RankingBox_Elem.HUD_DemonBattle_RankingBox_Elem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_DemonBattle_RankingBox_Elem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DemonBattle_RankingBox_Elem.HUD_DemonBattle_RankingBox_Elem_C.PreConstruct");
		
		UHUD_DemonBattle_RankingBox_Elem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DemonBattle_RankingBox_Elem.HUD_DemonBattle_RankingBox_Elem_C.SetTeamIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EARENA_TEAM                                        Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DemonBattle_RankingBox_Elem_C::SetTeamIcon(EARENA_TEAM Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DemonBattle_RankingBox_Elem.HUD_DemonBattle_RankingBox_Elem_C.SetTeamIcon");
		
		UHUD_DemonBattle_RankingBox_Elem_C_SetTeamIcon_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DemonBattle_RankingBox_Elem.HUD_DemonBattle_RankingBox_Elem_C.ExecuteUbergraph_HUD_DemonBattle_RankingBox_Elem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DemonBattle_RankingBox_Elem_C::ExecuteUbergraph_HUD_DemonBattle_RankingBox_Elem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DemonBattle_RankingBox_Elem.HUD_DemonBattle_RankingBox_Elem_C.ExecuteUbergraph_HUD_DemonBattle_RankingBox_Elem");
		
		UHUD_DemonBattle_RankingBox_Elem_C_ExecuteUbergraph_HUD_DemonBattle_RankingBox_Elem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_DemonBattle_RankingBox_Elem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_DemonBattle_RankingBox_Elem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_DemonBattle_RankingBox_Elem.HUD_DemonBattle_RankingBox_Elem_C");
		return ptr;
	}

}


