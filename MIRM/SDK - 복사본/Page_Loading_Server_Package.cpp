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
	 * 		Name   -> Function Page_Loading_Server.Page_Loading_Server_C.Construct
	 * 		Flags  -> ()
	 */
	void UPage_Loading_Server_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Loading_Server.Page_Loading_Server_C.Construct");
		
		UPage_Loading_Server_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Loading_Server.Page_Loading_Server_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UPage_Loading_Server_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Loading_Server.Page_Loading_Server_C.OnPreSet");
		
		UPage_Loading_Server_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Loading_Server.Page_Loading_Server_C.ExecuteUbergraph_Page_Loading_Server
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Loading_Server_C::ExecuteUbergraph_Page_Loading_Server(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Loading_Server.Page_Loading_Server_C.ExecuteUbergraph_Page_Loading_Server");
		
		UPage_Loading_Server_C_ExecuteUbergraph_Page_Loading_Server_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPage_Loading_Server_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPage_Loading_Server_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Page_Loading_Server.Page_Loading_Server_C");
		return ptr;
	}

}


