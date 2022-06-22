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
	 * 		Name   -> Function Adjust.Adjust.UpdateConversionValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ConversionValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdjust::UpdateConversionValue(int32_t ConversionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.UpdateConversionValue");
		
		UAdjust_UpdateConversionValue_Params params {};
		params.ConversionValue = ConversionValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.TrackEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAdjustEvent                                Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAdjust::TrackEvent(const struct FAdjustEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.TrackEvent");
		
		UAdjust_TrackEvent_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.TrackAdRevenue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PayLoad                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdjust::TrackAdRevenue(const class FString& Source, const class FString& PayLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.TrackAdRevenue");
		
		UAdjust_TrackAdRevenue_Params params {};
		params.Source = Source;
		params.PayLoad = PayLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.SetPushToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PushToken                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdjust::SetPushToken(const class FString& PushToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.SetPushToken");
		
		UAdjust_SetPushToken_Params params {};
		params.PushToken = PushToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.SetOfflineMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Offline                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdjust::SetOfflineMode(bool Offline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.SetOfflineMode");
		
		UAdjust_SetOfflineMode_Params params {};
		params.Offline = Offline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.SetEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdjust::SetEnabled(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.SetEnabled");
		
		UAdjust_SetEnabled_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.SendFirstPackages
	 * 		Flags  -> ()
	 */
	void UAdjust::SendFirstPackages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.SendFirstPackages");
		
		UAdjust_SendFirstPackages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.ResetSessionPartnerParameters
	 * 		Flags  -> ()
	 */
	void UAdjust::ResetSessionPartnerParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.ResetSessionPartnerParameters");
		
		UAdjust_ResetSessionPartnerParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.ResetSessionCallbackParameters
	 * 		Flags  -> ()
	 */
	void UAdjust::ResetSessionCallbackParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.ResetSessionCallbackParameters");
		
		UAdjust_ResetSessionCallbackParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.RequestTrackingAuthorizationWithCompletionHandler
	 * 		Flags  -> ()
	 */
	void UAdjust::RequestTrackingAuthorizationWithCompletionHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.RequestTrackingAuthorizationWithCompletionHandler");
		
		UAdjust_RequestTrackingAuthorizationWithCompletionHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.RemoveSessionPartnerParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdjust::RemoveSessionPartnerParameter(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.RemoveSessionPartnerParameter");
		
		UAdjust_RemoveSessionPartnerParameter_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.RemoveSessionCallbackParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdjust::RemoveSessionCallbackParameter(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.RemoveSessionCallbackParameter");
		
		UAdjust_RemoveSessionCallbackParameter_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.IsEnabled
	 * 		Flags  -> ()
	 */
	bool UAdjust::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.IsEnabled");
		
		UAdjust_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAdjustConfig                               Config                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAdjust::Initialize(const struct FAdjustConfig& Config)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.Initialize");
		
		UAdjust_Initialize_Params params {};
		params.Config = Config;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.GetSdkVersion
	 * 		Flags  -> ()
	 */
	class FString UAdjust::GetSdkVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.GetSdkVersion");
		
		UAdjust_GetSdkVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.GetIdfa
	 * 		Flags  -> ()
	 */
	class FString UAdjust::GetIdfa()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.GetIdfa");
		
		UAdjust_GetIdfa_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.GetGoogleAdId
	 * 		Flags  -> ()
	 */
	void UAdjust::GetGoogleAdId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.GetGoogleAdId");
		
		UAdjust_GetGoogleAdId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.GetAttribution
	 * 		Flags  -> ()
	 */
	struct FAdjustAttribution UAdjust::GetAttribution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.GetAttribution");
		
		UAdjust_GetAttribution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.GetAppTrackingAuthorizationStatus
	 * 		Flags  -> ()
	 */
	int32_t UAdjust::GetAppTrackingAuthorizationStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.GetAppTrackingAuthorizationStatus");
		
		UAdjust_GetAppTrackingAuthorizationStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.GetAmazonAdId
	 * 		Flags  -> ()
	 */
	class FString UAdjust::GetAmazonAdId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.GetAmazonAdId");
		
		UAdjust_GetAmazonAdId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.GetAdid
	 * 		Flags  -> ()
	 */
	class FString UAdjust::GetAdid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.GetAdid");
		
		UAdjust_GetAdid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.GdprForgetMe
	 * 		Flags  -> ()
	 */
	void UAdjust::GdprForgetMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.GdprForgetMe");
		
		UAdjust_GdprForgetMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.DisableThirdPartySharing
	 * 		Flags  -> ()
	 */
	void UAdjust::DisableThirdPartySharing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.DisableThirdPartySharing");
		
		UAdjust_DisableThirdPartySharing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.AppWillOpenUrl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdjust::AppWillOpenUrl(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.AppWillOpenUrl");
		
		UAdjust_AppWillOpenUrl_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.AddSessionPartnerParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdjust::AddSessionPartnerParameter(const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.AddSessionPartnerParameter");
		
		UAdjust_AddSessionPartnerParameter_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Adjust.Adjust.AddSessionCallbackParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdjust::AddSessionCallbackParameter(const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adjust.Adjust.AddSessionCallbackParameter");
		
		UAdjust_AddSessionCallbackParameter_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAdjust.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdjust::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Adjust.Adjust");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAdjustDelegates.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdjustDelegates::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Adjust.AdjustDelegates");
		return ptr;
	}

}


