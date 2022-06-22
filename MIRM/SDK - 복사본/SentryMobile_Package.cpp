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
	 * 		Name   -> Function SentryMobile.SentryMobileFunctionLibrary.SetUserInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UserInfo                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryMobileFunctionLibrary::SetUserInfo(const class FString& UserInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SentryMobile.SentryMobileFunctionLibrary.SetUserInfo");
		
		USentryMobileFunctionLibrary_SetUserInfo_Params params {};
		params.UserInfo = UserInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SentryMobile.SentryMobileFunctionLibrary.Init
	 * 		Flags  -> ()
	 */
	void USentryMobileFunctionLibrary::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SentryMobile.SentryMobileFunctionLibrary.Init");
		
		USentryMobileFunctionLibrary_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USentryMobileFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentryMobileFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SentryMobile.SentryMobileFunctionLibrary");
		return ptr;
	}

}


