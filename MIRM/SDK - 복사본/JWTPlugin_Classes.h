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
	 * Class JWTPlugin.JWTGenerator
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UJWTGenerator : public UObject
	{
	public:
		unsigned char                                              UnknownData_XZCD[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetType(const class FString& Type);
		void SetSubject(const class FString& Subject);
		void SetNotBefore(int32_t Seconds);
		void SetKeyID(const class FString& KeyID);
		void SetID(const class FString& ID);
		void SetContentType(const class FString& ContentType);
		void SetAudience(const class FString& Audience);
		void GenerateToken(const class FString& Key, EAlgorithm Algorithm, bool IATClaim, class FString* JWT);
		void ExpireAt(int32_t Seconds);
		void AddHeaderClaims(TMap<class FString, class FString> Claims);
		void AddHeaderClaim(const class FString& Name, const class FString& Value);
		void AddClaims(TMap<class FString, class FString> Claims);
		void AddClaim(const class FString& Name, const class FString& Value);
		static UClass* StaticClass();
	};

	/**
	 * Class JWTPlugin.JWTPluginBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UJWTPluginBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TMap<class FString, class FString> GetClaims(const class FString& JWTToken);
		class UJWTVerifier* CreateVerifier(const class FString& Key, EAlgorithm Algorithm);
		class UJWTGenerator* CreateGenerator();
		static UClass* StaticClass();
	};

	/**
	 * Class JWTPlugin.JWTVerifier
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UJWTVerifier : public UObject
	{
	public:
		unsigned char                                              UnknownData_3EW7[0x90];                                  // 0x0028(0x0090) MISSED OFFSET (PADDING)

	public:
		void WithSubject(const class FString& Subject);
		void WithIssuer(const class FString& Issuer);
		void WithID(const class FString& ID);
		void WithCustomClaim(const class FString& Name, const class FString& Value);
		void WithAudience(const class FString& Audience);
		bool VerifyJWT(const class FString& Input);
		void SetLeeway(int32_t Leeway);
		void SetAlgorithm(const class FString& Key, EAlgorithm Algorithm);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
