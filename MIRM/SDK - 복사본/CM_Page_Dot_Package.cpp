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
	 * 		Name   -> Function CM_Page_Dot.CM_Page_Dot_C.Twinkle_Ani_Function
	 * 		Flags  -> ()
	 */
	void UCM_Page_Dot_C::Twinkle_Ani_Function()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Page_Dot.CM_Page_Dot_C.Twinkle_Ani_Function");
		
		UCM_Page_Dot_C_Twinkle_Ani_Function_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Page_Dot.CM_Page_Dot_C.OnOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Page_Dot_C::OnOff(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Page_Dot.CM_Page_Dot_C.OnOff");
		
		UCM_Page_Dot_C_OnOff_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Page_Dot.CM_Page_Dot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Page_Dot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Page_Dot.CM_Page_Dot_C.PreConstruct");
		
		UCM_Page_Dot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Page_Dot.CM_Page_Dot_C.Twinkle_Finished
	 * 		Flags  -> ()
	 */
	void UCM_Page_Dot_C::Twinkle_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Page_Dot.CM_Page_Dot_C.Twinkle_Finished");
		
		UCM_Page_Dot_C_Twinkle_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Page_Dot.CM_Page_Dot_C.Twinkle_Start
	 * 		Flags  -> ()
	 */
	void UCM_Page_Dot_C::Twinkle_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Page_Dot.CM_Page_Dot_C.Twinkle_Start");
		
		UCM_Page_Dot_C_Twinkle_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Page_Dot.CM_Page_Dot_C.ExecuteUbergraph_CM_Page_Dot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Page_Dot_C::ExecuteUbergraph_CM_Page_Dot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Page_Dot.CM_Page_Dot_C.ExecuteUbergraph_CM_Page_Dot");
		
		UCM_Page_Dot_C_ExecuteUbergraph_CM_Page_Dot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Page_Dot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Page_Dot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Page_Dot.CM_Page_Dot_C");
		return ptr;
	}

}


