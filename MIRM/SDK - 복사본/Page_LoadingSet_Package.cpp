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
	 * 		Name   -> Function Page_LoadingSet.Page_LoadingSet_C.RotationLoadingIcon
	 * 		Flags  -> ()
	 */
	void UPage_LoadingSet_C::RotationLoadingIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_LoadingSet.Page_LoadingSet_C.RotationLoadingIcon");
		
		UPage_LoadingSet_C_RotationLoadingIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_LoadingSet.Page_LoadingSet_C.SetAnimSpd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              spd                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_LoadingSet_C::SetAnimSpd(float spd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_LoadingSet.Page_LoadingSet_C.SetAnimSpd");
		
		UPage_LoadingSet_C_SetAnimSpd_Params params {};
		params.spd = spd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_LoadingSet.Page_LoadingSet_C.Run Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              GetPercent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_LoadingSet_C::Run_Icon(float GetPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_LoadingSet.Page_LoadingSet_C.Run Icon");
		
		UPage_LoadingSet_C_Run_Icon_Params params {};
		params.GetPercent = GetPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_LoadingSet.Page_LoadingSet_C.Construct
	 * 		Flags  -> ()
	 */
	void UPage_LoadingSet_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_LoadingSet.Page_LoadingSet_C.Construct");
		
		UPage_LoadingSet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_LoadingSet.Page_LoadingSet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_LoadingSet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_LoadingSet.Page_LoadingSet_C.PreConstruct");
		
		UPage_LoadingSet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_LoadingSet.Page_LoadingSet_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UPage_LoadingSet_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_LoadingSet.Page_LoadingSet_C.OnInitialized");
		
		UPage_LoadingSet_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_LoadingSet.Page_LoadingSet_C.ExecuteUbergraph_Page_LoadingSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_LoadingSet_C::ExecuteUbergraph_Page_LoadingSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_LoadingSet.Page_LoadingSet_C.ExecuteUbergraph_Page_LoadingSet");
		
		UPage_LoadingSet_C_ExecuteUbergraph_Page_LoadingSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPage_LoadingSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPage_LoadingSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Page_LoadingSet.Page_LoadingSet_C");
		return ptr;
	}

}


