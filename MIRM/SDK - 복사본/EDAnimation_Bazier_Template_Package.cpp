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
	 * 		Name   -> Function EDAnimation_Bazier_Template.EDAnimation_Bazier_Template_C.OnReset
	 * 		Flags  -> ()
	 */
	bool AEDAnimation_Bazier_Template_C::OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EDAnimation_Bazier_Template.EDAnimation_Bazier_Template_C.OnReset");
		
		AEDAnimation_Bazier_Template_C_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EDAnimation_Bazier_Template.EDAnimation_Bazier_Template_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AEDAnimation_Bazier_Template_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EDAnimation_Bazier_Template.EDAnimation_Bazier_Template_C.UserConstructionScript");
		
		AEDAnimation_Bazier_Template_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AEDAnimation_Bazier_Template_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEDAnimation_Bazier_Template_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EDAnimation_Bazier_Template.EDAnimation_Bazier_Template_C");
		return ptr;
	}

}


