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
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.DoWhenUpdateFoundGuildInfos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsFound                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildManager_BP_C::DoWhenUpdateFoundGuildInfos(bool bIsFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.DoWhenUpdateFoundGuildInfos");
		
		UGuildManager_BP_C_DoWhenUpdateFoundGuildInfos_Params params {};
		params.bIsFound = bIsFound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.OpenGuildPage
	 * 		Flags  -> ()
	 */
	void UGuildManager_BP_C::OpenGuildPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.OpenGuildPage");
		
		UGuildManager_BP_C_OpenGuildPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.GuildApply
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            GuildID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildManager_BP_C::GuildApply(int64_t GuildID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.GuildApply");
		
		UGuildManager_BP_C_GuildApply_Params params {};
		params.GuildID = GuildID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.OnUpdateMyGuildInfo
	 * 		Flags  -> ()
	 */
	void UGuildManager_BP_C::OnUpdateMyGuildInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.OnUpdateMyGuildInfo");
		
		UGuildManager_BP_C_OnUpdateMyGuildInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.OnGuildApplyCanceled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            GuildID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildManager_BP_C::OnGuildApplyCanceled(int64_t GuildID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.OnGuildApplyCanceled");
		
		UGuildManager_BP_C_OnGuildApplyCanceled_Params params {};
		params.GuildID = GuildID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.OnUpdateHostileGuildInfos
	 * 		Flags  -> ()
	 */
	void UGuildManager_BP_C::OnUpdateHostileGuildInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.OnUpdateHostileGuildInfos");
		
		UGuildManager_BP_C_OnUpdateHostileGuildInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.OnGuildMakeNow
	 * 		Flags  -> ()
	 */
	void UGuildManager_BP_C::OnGuildMakeNow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.OnGuildMakeNow");
		
		UGuildManager_BP_C_OnGuildMakeNow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.OnGuildRegisterApprovalWait
	 * 		Flags  -> ()
	 */
	void UGuildManager_BP_C::OnGuildRegisterApprovalWait()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.OnGuildRegisterApprovalWait");
		
		UGuildManager_BP_C_OnGuildRegisterApprovalWait_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.OnUpdateRegisterApplyUserInfos
	 * 		Flags  -> ()
	 */
	void UGuildManager_BP_C::OnUpdateRegisterApplyUserInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.OnUpdateRegisterApplyUserInfos");
		
		UGuildManager_BP_C_OnUpdateRegisterApplyUserInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.OnUpdateGuildWarInfo
	 * 		Flags  -> ()
	 */
	void UGuildManager_BP_C::OnUpdateGuildWarInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.OnUpdateGuildWarInfo");
		
		UGuildManager_BP_C_OnUpdateGuildWarInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.OnUpdateFoundGuildInfos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsFound                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildManager_BP_C::OnUpdateFoundGuildInfos(bool bIsFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.OnUpdateFoundGuildInfos");
		
		UGuildManager_BP_C_OnUpdateFoundGuildInfos_Params params {};
		params.bIsFound = bIsFound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.OnUpdateMyGuildAndMemberInfo
	 * 		Flags  -> ()
	 */
	void UGuildManager_BP_C::OnUpdateMyGuildAndMemberInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.OnUpdateMyGuildAndMemberInfo");
		
		UGuildManager_BP_C_OnUpdateMyGuildAndMemberInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.OnUpdateApplyGuildInfos
	 * 		Flags  -> ()
	 */
	void UGuildManager_BP_C::OnUpdateApplyGuildInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.OnUpdateApplyGuildInfos");
		
		UGuildManager_BP_C_OnUpdateApplyGuildInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.OnUpdateSurrenderToOurGuildInfos
	 * 		Flags  -> ()
	 */
	void UGuildManager_BP_C::OnUpdateSurrenderToOurGuildInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.OnUpdateSurrenderToOurGuildInfos");
		
		UGuildManager_BP_C_OnUpdateSurrenderToOurGuildInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.OpenGuildPage_BP
	 * 		Flags  -> ()
	 */
	void UGuildManager_BP_C::OpenGuildPage_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.OpenGuildPage_BP");
		
		UGuildManager_BP_C_OpenGuildPage_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildManager_BP.GuildManager_BP_C.ExecuteUbergraph_GuildManager_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildManager_BP_C::ExecuteUbergraph_GuildManager_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildManager_BP.GuildManager_BP_C.ExecuteUbergraph_GuildManager_BP");
		
		UGuildManager_BP_C_ExecuteUbergraph_GuildManager_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGuildManager_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildManager_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GuildManager_BP.GuildManager_BP_C");
		return ptr;
	}

}


