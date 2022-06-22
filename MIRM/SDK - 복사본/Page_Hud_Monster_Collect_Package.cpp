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
	 * 		Name   -> Function Page_Hud_Monster_Collect.Page_Hud_Monster_Collect_C.Finished_703FF39F43B24FAF0845409BAD6F2086
	 * 		Flags  -> ()
	 */
	void UPage_Hud_Monster_Collect_C::Finished_703FF39F43B24FAF0845409BAD6F2086()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Monster_Collect.Page_Hud_Monster_Collect_C.Finished_703FF39F43B24FAF0845409BAD6F2086");
		
		UPage_Hud_Monster_Collect_C_Finished_703FF39F43B24FAF0845409BAD6F2086_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Monster_Collect.Page_Hud_Monster_Collect_C.Finished_639ACFC045D8D6036BD1DA953A7A16EC
	 * 		Flags  -> ()
	 */
	void UPage_Hud_Monster_Collect_C::Finished_639ACFC045D8D6036BD1DA953A7A16EC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Monster_Collect.Page_Hud_Monster_Collect_C.Finished_639ACFC045D8D6036BD1DA953A7A16EC");
		
		UPage_Hud_Monster_Collect_C_Finished_639ACFC045D8D6036BD1DA953A7A16EC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Monster_Collect.Page_Hud_Monster_Collect_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Hud_Monster_Collect_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Monster_Collect.Page_Hud_Monster_Collect_C.PreConstruct");
		
		UPage_Hud_Monster_Collect_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Monster_Collect.Page_Hud_Monster_Collect_C.OnSetup
	 * 		Flags  -> ()
	 */
	void UPage_Hud_Monster_Collect_C::OnSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Monster_Collect.Page_Hud_Monster_Collect_C.OnSetup");
		
		UPage_Hud_Monster_Collect_C_OnSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Monster_Collect.Page_Hud_Monster_Collect_C.Construct
	 * 		Flags  -> ()
	 */
	void UPage_Hud_Monster_Collect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Monster_Collect.Page_Hud_Monster_Collect_C.Construct");
		
		UPage_Hud_Monster_Collect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Monster_Collect.Page_Hud_Monster_Collect_C.ExecuteUbergraph_Page_Hud_Monster_Collect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Hud_Monster_Collect_C::ExecuteUbergraph_Page_Hud_Monster_Collect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Monster_Collect.Page_Hud_Monster_Collect_C.ExecuteUbergraph_Page_Hud_Monster_Collect");
		
		UPage_Hud_Monster_Collect_C_ExecuteUbergraph_Page_Hud_Monster_Collect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPage_Hud_Monster_Collect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPage_Hud_Monster_Collect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Page_Hud_Monster_Collect.Page_Hud_Monster_Collect_C");
		return ptr;
	}

}


