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
	 * 		Name   -> Function MobileUtil.MobileUtilBPFunctionLibrary.GetWifiRSSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RangeLevel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMobileUtilBPFunctionLibrary::GetWifiRSSI(int32_t RangeLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobileUtil.MobileUtilBPFunctionLibrary.GetWifiRSSI");
		
		UMobileUtilBPFunctionLibrary_GetWifiRSSI_Params params {};
		params.RangeLevel = RangeLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMobileUtilBPFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMobileUtilBPFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MobileUtil.MobileUtilBPFunctionLibrary");
		return ptr;
	}

}


