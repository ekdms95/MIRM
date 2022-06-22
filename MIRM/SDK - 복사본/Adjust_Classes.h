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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Adjust.Adjust
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAdjust : public UBlueprintFunctionLibrary
	{
	public:
		void UpdateConversionValue(int32_t ConversionValue);
		void TrackEvent(const struct FAdjustEvent& Event);
		void TrackAdRevenue(const class FString& Source, const class FString& PayLoad);
		void SetPushToken(const class FString& PushToken);
		void SetOfflineMode(bool Offline);
		void SetEnabled(bool enable);
		void SendFirstPackages();
		void ResetSessionPartnerParameters();
		void ResetSessionCallbackParameters();
		void RequestTrackingAuthorizationWithCompletionHandler();
		void RemoveSessionPartnerParameter(const class FString& Key);
		void RemoveSessionCallbackParameter(const class FString& Key);
		bool IsEnabled();
		void Initialize(const struct FAdjustConfig& Config);
		class FString GetSdkVersion();
		class FString GetIdfa();
		void GetGoogleAdId();
		struct FAdjustAttribution GetAttribution();
		int32_t GetAppTrackingAuthorizationStatus();
		class FString GetAmazonAdId();
		class FString GetAdid();
		void GdprForgetMe();
		void DisableThirdPartySharing();
		void AppWillOpenUrl(const class FString& URL);
		void AddSessionPartnerParameter(const class FString& Key, const class FString& Value);
		void AddSessionCallbackParameter(const class FString& Key, const class FString& Value);
		static UClass* StaticClass();
	};

	/**
	 * Class Adjust.AdjustDelegates
	 * Size -> 0x0140 (FullSize[0x0340] - InheritedSize[0x0200])
	 */
	class UAdjustDelegates : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnAttributionChangedDelegate;                            // 0x01F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSessionSuccessDelegate;                                // 0x0208(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSessionFailureDelegate;                                // 0x0218(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEventSuccessDelegate;                                  // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEventFailureDelegate;                                  // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDeferredDeeplinkDelegate;                              // 0x0248(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGoogleAdvertisingIdDelegate;                           // 0x0258(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAuthorizationStatusDelegate;                           // 0x0268(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_58YL[0xC8];                                  // 0x0278(0x00C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
