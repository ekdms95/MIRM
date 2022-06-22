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
	 * Function JWTPlugin.JWTGenerator.SetType
	 */
	struct UJWTGenerator_SetType_Params
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.SetSubject
	 */
	struct UJWTGenerator_SetSubject_Params
	{
	public:
		class FString                                              Subject;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.SetNotBefore
	 */
	struct UJWTGenerator_SetNotBefore_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.SetKeyID
	 */
	struct UJWTGenerator_SetKeyID_Params
	{
	public:
		class FString                                              KeyID;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.SetID
	 */
	struct UJWTGenerator_SetID_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.SetContentType
	 */
	struct UJWTGenerator_SetContentType_Params
	{
	public:
		class FString                                              ContentType;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.SetAudience
	 */
	struct UJWTGenerator_SetAudience_Params
	{
	public:
		class FString                                              Audience;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.GenerateToken
	 */
	struct UJWTGenerator_GenerateToken_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAlgorithm                                                 Algorithm;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IATClaim;                                                // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              JWT;                                                     // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.ExpireAt
	 */
	struct UJWTGenerator_ExpireAt_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.AddHeaderClaims
	 */
	struct UJWTGenerator_AddHeaderClaims_Params
	{
	public:
		TMap<class FString, class FString>                         Claims;                                                  // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.AddHeaderClaim
	 */
	struct UJWTGenerator_AddHeaderClaim_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.AddClaims
	 */
	struct UJWTGenerator_AddClaims_Params
	{
	public:
		TMap<class FString, class FString>                         Claims;                                                  // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.AddClaim
	 */
	struct UJWTGenerator_AddClaim_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTPluginBPLibrary.GetClaims
	 */
	struct UJWTPluginBPLibrary_GetClaims_Params
	{
	public:
		class FString                                              JWTToken;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTPluginBPLibrary.CreateVerifier
	 */
	struct UJWTPluginBPLibrary_CreateVerifier_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAlgorithm                                                 Algorithm;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UJWTVerifier*                                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTPluginBPLibrary.CreateGenerator
	 */
	struct UJWTPluginBPLibrary_CreateGenerator_Params
	{
	public:
		class UJWTGenerator*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTVerifier.WithSubject
	 */
	struct UJWTVerifier_WithSubject_Params
	{
	public:
		class FString                                              Subject;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTVerifier.WithIssuer
	 */
	struct UJWTVerifier_WithIssuer_Params
	{
	public:
		class FString                                              Issuer;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTVerifier.WithID
	 */
	struct UJWTVerifier_WithID_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTVerifier.WithCustomClaim
	 */
	struct UJWTVerifier_WithCustomClaim_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTVerifier.WithAudience
	 */
	struct UJWTVerifier_WithAudience_Params
	{
	public:
		class FString                                              Audience;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTVerifier.VerifyJWT
	 */
	struct UJWTVerifier_VerifyJWT_Params
	{
	public:
		class FString                                              Input;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTVerifier.SetLeeway
	 */
	struct UJWTVerifier_SetLeeway_Params
	{
	public:
		int32_t                                                    Leeway;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTVerifier.SetAlgorithm
	 */
	struct UJWTVerifier_SetAlgorithm_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAlgorithm                                                 Algorithm;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
