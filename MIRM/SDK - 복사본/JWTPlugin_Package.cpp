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
	 * 		Name   -> Function JWTPlugin.JWTGenerator.SetType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Type                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::SetType(const class FString& Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.SetType");
		
		UJWTGenerator_SetType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.SetSubject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Subject                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::SetSubject(const class FString& Subject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.SetSubject");
		
		UJWTGenerator_SetSubject_Params params {};
		params.Subject = Subject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.SetNotBefore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::SetNotBefore(int32_t Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.SetNotBefore");
		
		UJWTGenerator_SetNotBefore_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.SetKeyID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::SetKeyID(const class FString& KeyID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.SetKeyID");
		
		UJWTGenerator_SetKeyID_Params params {};
		params.KeyID = KeyID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.SetID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::SetID(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.SetID");
		
		UJWTGenerator_SetID_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.SetContentType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ContentType                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::SetContentType(const class FString& ContentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.SetContentType");
		
		UJWTGenerator_SetContentType_Params params {};
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.SetAudience
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Audience                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::SetAudience(const class FString& Audience)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.SetAudience");
		
		UJWTGenerator_SetAudience_Params params {};
		params.Audience = Audience;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.GenerateToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAlgorithm                                         Algorithm                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IATClaim                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      JWT                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::GenerateToken(const class FString& Key, EAlgorithm Algorithm, bool IATClaim, class FString* JWT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.GenerateToken");
		
		UJWTGenerator_GenerateToken_Params params {};
		params.Key = Key;
		params.Algorithm = Algorithm;
		params.IATClaim = IATClaim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (JWT != nullptr)
			*JWT = params.JWT;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.ExpireAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::ExpireAt(int32_t Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.ExpireAt");
		
		UJWTGenerator_ExpireAt_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.AddHeaderClaims
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, class FString>                 Claims                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::AddHeaderClaims(TMap<class FString, class FString> Claims)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.AddHeaderClaims");
		
		UJWTGenerator_AddHeaderClaims_Params params {};
		params.Claims = Claims;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.AddHeaderClaim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::AddHeaderClaim(const class FString& Name, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.AddHeaderClaim");
		
		UJWTGenerator_AddHeaderClaim_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.AddClaims
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, class FString>                 Claims                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::AddClaims(TMap<class FString, class FString> Claims)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.AddClaims");
		
		UJWTGenerator_AddClaims_Params params {};
		params.Claims = Claims;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.AddClaim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::AddClaim(const class FString& Name, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.AddClaim");
		
		UJWTGenerator_AddClaim_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UJWTGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJWTGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class JWTPlugin.JWTGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTPluginBPLibrary.GetClaims
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JWTToken                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, class FString> UJWTPluginBPLibrary::GetClaims(const class FString& JWTToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTPluginBPLibrary.GetClaims");
		
		UJWTPluginBPLibrary_GetClaims_Params params {};
		params.JWTToken = JWTToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTPluginBPLibrary.CreateVerifier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAlgorithm                                         Algorithm                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UJWTVerifier* UJWTPluginBPLibrary::CreateVerifier(const class FString& Key, EAlgorithm Algorithm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTPluginBPLibrary.CreateVerifier");
		
		UJWTPluginBPLibrary_CreateVerifier_Params params {};
		params.Key = Key;
		params.Algorithm = Algorithm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTPluginBPLibrary.CreateGenerator
	 * 		Flags  -> ()
	 */
	class UJWTGenerator* UJWTPluginBPLibrary::CreateGenerator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTPluginBPLibrary.CreateGenerator");
		
		UJWTPluginBPLibrary_CreateGenerator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UJWTPluginBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJWTPluginBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class JWTPlugin.JWTPluginBPLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTVerifier.WithSubject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Subject                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTVerifier::WithSubject(const class FString& Subject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTVerifier.WithSubject");
		
		UJWTVerifier_WithSubject_Params params {};
		params.Subject = Subject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTVerifier.WithIssuer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Issuer                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTVerifier::WithIssuer(const class FString& Issuer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTVerifier.WithIssuer");
		
		UJWTVerifier_WithIssuer_Params params {};
		params.Issuer = Issuer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTVerifier.WithID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTVerifier::WithID(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTVerifier.WithID");
		
		UJWTVerifier_WithID_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTVerifier.WithCustomClaim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTVerifier::WithCustomClaim(const class FString& Name, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTVerifier.WithCustomClaim");
		
		UJWTVerifier_WithCustomClaim_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTVerifier.WithAudience
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Audience                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTVerifier::WithAudience(const class FString& Audience)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTVerifier.WithAudience");
		
		UJWTVerifier_WithAudience_Params params {};
		params.Audience = Audience;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTVerifier.VerifyJWT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Input                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UJWTVerifier::VerifyJWT(const class FString& Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTVerifier.VerifyJWT");
		
		UJWTVerifier_VerifyJWT_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTVerifier.SetLeeway
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Leeway                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTVerifier::SetLeeway(int32_t Leeway)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTVerifier.SetLeeway");
		
		UJWTVerifier_SetLeeway_Params params {};
		params.Leeway = Leeway;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTVerifier.SetAlgorithm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAlgorithm                                         Algorithm                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTVerifier::SetAlgorithm(const class FString& Key, EAlgorithm Algorithm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTVerifier.SetAlgorithm");
		
		UJWTVerifier_SetAlgorithm_Params params {};
		params.Key = Key;
		params.Algorithm = Algorithm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UJWTVerifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJWTVerifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class JWTPlugin.JWTVerifier");
		return ptr;
	}

}


