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
	 * 		Name   -> Function HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDungeonArenaRankInfo                       Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_DemonBattle_RankingBox_C::SetInfo(int32_t Index, const struct FDungeonArenaRankInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C.SetInfo");
		
		UHUD_DemonBattle_RankingBox_C_SetInfo_Params params {};
		params.Index = Index;
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C.SetRanking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FDungeonArenaRankInfo>               Ranking                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_DemonBattle_RankingBox_C::SetRanking(TArray<struct FDungeonArenaRankInfo>* Ranking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C.SetRanking");
		
		UHUD_DemonBattle_RankingBox_C_SetRanking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ranking != nullptr)
			*Ranking = params.Ranking;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C.SetTeamIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EARENA_TEAM                                        Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DemonBattle_RankingBox_C::SetTeamIcon(EARENA_TEAM Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C.SetTeamIcon");
		
		UHUD_DemonBattle_RankingBox_C_SetTeamIcon_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_DemonBattle_RankingBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C.PreConstruct");
		
		UHUD_DemonBattle_RankingBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C.ExecuteUbergraph_HUD_DemonBattle_RankingBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DemonBattle_RankingBox_C::ExecuteUbergraph_HUD_DemonBattle_RankingBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C.ExecuteUbergraph_HUD_DemonBattle_RankingBox");
		
		UHUD_DemonBattle_RankingBox_C_ExecuteUbergraph_HUD_DemonBattle_RankingBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_DemonBattle_RankingBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_DemonBattle_RankingBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C");
		return ptr;
	}

}


