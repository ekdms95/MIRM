#pragma once

/**
 * Name: MIRM
 * Version: 0623
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Adjust.Adjust.UpdateConversionValue
	 */
	struct UAdjust_UpdateConversionValue_Params
	{
	public:
		int32_t                                                    ConversionValue;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.TrackEvent
	 */
	struct UAdjust_TrackEvent_Params
	{
	public:
		struct FAdjustEvent                                        Event;                                                   // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.TrackAdRevenue
	 */
	struct UAdjust_TrackAdRevenue_Params
	{
	public:
		class FString                                              Source;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PayLoad;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.SetPushToken
	 */
	struct UAdjust_SetPushToken_Params
	{
	public:
		class FString                                              PushToken;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.SetOfflineMode
	 */
	struct UAdjust_SetOfflineMode_Params
	{
	public:
		bool                                                       Offline;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.SetEnabled
	 */
	struct UAdjust_SetEnabled_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.SendFirstPackages
	 */
	struct UAdjust_SendFirstPackages_Params
	{	};

	/**
	 * Function Adjust.Adjust.ResetSessionPartnerParameters
	 */
	struct UAdjust_ResetSessionPartnerParameters_Params
	{	};

	/**
	 * Function Adjust.Adjust.ResetSessionCallbackParameters
	 */
	struct UAdjust_ResetSessionCallbackParameters_Params
	{	};

	/**
	 * Function Adjust.Adjust.RequestTrackingAuthorizationWithCompletionHandler
	 */
	struct UAdjust_RequestTrackingAuthorizationWithCompletionHandler_Params
	{	};

	/**
	 * Function Adjust.Adjust.RemoveSessionPartnerParameter
	 */
	struct UAdjust_RemoveSessionPartnerParameter_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.RemoveSessionCallbackParameter
	 */
	struct UAdjust_RemoveSessionCallbackParameter_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.IsEnabled
	 */
	struct UAdjust_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.Initialize
	 */
	struct UAdjust_Initialize_Params
	{
	public:
		struct FAdjustConfig                                       Config;                                                  // 0x0000(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.GetSdkVersion
	 */
	struct UAdjust_GetSdkVersion_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.GetIdfa
	 */
	struct UAdjust_GetIdfa_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.GetGoogleAdId
	 */
	struct UAdjust_GetGoogleAdId_Params
	{	};

	/**
	 * Function Adjust.Adjust.GetAttribution
	 */
	struct UAdjust_GetAttribution_Params
	{
	public:
		struct FAdjustAttribution                                  ReturnValue;                                             // 0x0000(0x0080)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.GetAppTrackingAuthorizationStatus
	 */
	struct UAdjust_GetAppTrackingAuthorizationStatus_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.GetAmazonAdId
	 */
	struct UAdjust_GetAmazonAdId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.GetAdid
	 */
	struct UAdjust_GetAdid_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.GdprForgetMe
	 */
	struct UAdjust_GdprForgetMe_Params
	{	};

	/**
	 * Function Adjust.Adjust.DisableThirdPartySharing
	 */
	struct UAdjust_DisableThirdPartySharing_Params
	{	};

	/**
	 * Function Adjust.Adjust.AppWillOpenUrl
	 */
	struct UAdjust_AppWillOpenUrl_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.AddSessionPartnerParameter
	 */
	struct UAdjust_AddSessionPartnerParameter_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Adjust.Adjust.AddSessionCallbackParameter
	 */
	struct UAdjust_AddSessionCallbackParameter_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
