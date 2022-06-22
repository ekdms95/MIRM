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
	 * 		Name   -> Function EasyFirebase.FirebaseAppleCredential.RequestAppleCredential
	 * 		Flags  -> ()
	 */
	class UFirebaseAppleCredential* UFirebaseAppleCredential::RequestAppleCredential()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAppleCredential.RequestAppleCredential");
		
		UFirebaseAppleCredential_RequestAppleCredential_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseAppleCredential.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseAppleCredential::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseAppleCredential");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.SignOut
	 * 		Flags  -> ()
	 */
	void UFirebaseAuth::SignOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.SignOut");
		
		UFirebaseAuth_SignOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.SignInWithEmailAndPasswordLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureUser* UFirebaseAuth::SignInWithEmailAndPasswordLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.SignInWithEmailAndPasswordLastResult");
		
		UFirebaseAuth_SignInWithEmailAndPasswordLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.SignInWithEmailAndPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      passwd                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureUser* UFirebaseAuth::SignInWithEmailAndPassword(const class FString& email, const class FString& passwd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.SignInWithEmailAndPassword");
		
		UFirebaseAuth_SignInWithEmailAndPassword_Params params {};
		params.email = email;
		params.passwd = passwd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.SignInWithCustomTokenLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureUser* UFirebaseAuth::SignInWithCustomTokenLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.SignInWithCustomTokenLastResult");
		
		UFirebaseAuth_SignInWithCustomTokenLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.SignInWithCustomToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Token                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureUser* UFirebaseAuth::SignInWithCustomToken(const class FString& Token)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.SignInWithCustomToken");
		
		UFirebaseAuth_SignInWithCustomToken_Params params {};
		params.Token = Token;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.SignInWithCredentialLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureUser* UFirebaseAuth::SignInWithCredentialLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.SignInWithCredentialLastResult");
		
		UFirebaseAuth_SignInWithCredentialLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.SignInWithCredential
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseCredential*                         credential                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureUser* UFirebaseAuth::SignInWithCredential(class UFirebaseCredential* credential)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.SignInWithCredential");
		
		UFirebaseAuth_SignInWithCredential_Params params {};
		params.credential = credential;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.SignInAnonymously
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureUser* UFirebaseAuth::SignInAnonymously()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.SignInAnonymously");
		
		UFirebaseAuth_SignInAnonymously_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.SignInAndRetrieveDataWithCredentialLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureSignInResult* UFirebaseAuth::SignInAndRetrieveDataWithCredentialLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.SignInAndRetrieveDataWithCredentialLastResult");
		
		UFirebaseAuth_SignInAndRetrieveDataWithCredentialLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.SignInAndRetrieveDataWithCredential
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseCredential*                         credential                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureSignInResult* UFirebaseAuth::SignInAndRetrieveDataWithCredential(class UFirebaseCredential* credential)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.SignInAndRetrieveDataWithCredential");
		
		UFirebaseAuth_SignInAndRetrieveDataWithCredential_Params params {};
		params.credential = credential;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.SendPasswordResetEmailLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseAuth::SendPasswordResetEmailLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.SendPasswordResetEmailLastResult");
		
		UFirebaseAuth_SendPasswordResetEmailLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.SendPasswordResetEmail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureVoid* UFirebaseAuth::SendPasswordResetEmail(const class FString& email)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.SendPasswordResetEmail");
		
		UFirebaseAuth_SendPasswordResetEmail_Params params {};
		params.email = email;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.RemoveAuthStateListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseAuthStateListener*                  listener                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseAuth::RemoveAuthStateListener(class UFirebaseAuthStateListener* listener)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.RemoveAuthStateListener");
		
		UFirebaseAuth_RemoveAuthStateListener_Params params {};
		params.listener = listener;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.GetPlayServiceCredential
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      serverAuthCode                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseCredential* UFirebaseAuth::GetPlayServiceCredential(const class FString& serverAuthCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.GetPlayServiceCredential");
		
		UFirebaseAuth_GetPlayServiceCredential_Params params {};
		params.serverAuthCode = serverAuthCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.GetFirebaseAuth
	 * 		Flags  -> ()
	 */
	class UFirebaseAuth* UFirebaseAuth::GetFirebaseAuth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.GetFirebaseAuth");
		
		UFirebaseAuth_GetFirebaseAuth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.FetchProvidersForEmailLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureFetchProvideResult* UFirebaseAuth::FetchProvidersForEmailLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.FetchProvidersForEmailLastResult");
		
		UFirebaseAuth_FetchProvidersForEmailLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.FetchProvidersForEmail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureFetchProvideResult* UFirebaseAuth::FetchProvidersForEmail(const class FString& email)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.FetchProvidersForEmail");
		
		UFirebaseAuth_FetchProvidersForEmail_Params params {};
		params.email = email;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.current_user
	 * 		Flags  -> ()
	 */
	class UFirebaseUser* UFirebaseAuth::current_user()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.current_user");
		
		UFirebaseAuth_current_user_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.CreateUserWithEmailAndPasswordLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureUser* UFirebaseAuth::CreateUserWithEmailAndPasswordLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.CreateUserWithEmailAndPasswordLastResult");
		
		UFirebaseAuth_CreateUserWithEmailAndPasswordLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.CreateUserWithEmailAndPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      passwd                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureUser* UFirebaseAuth::CreateUserWithEmailAndPassword(const class FString& email, const class FString& passwd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.CreateUserWithEmailAndPassword");
		
		UFirebaseAuth_CreateUserWithEmailAndPassword_Params params {};
		params.email = email;
		params.passwd = passwd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuth.AddAuthStateListener
	 * 		Flags  -> ()
	 */
	class UFirebaseAuthStateListener* UFirebaseAuth::AddAuthStateListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuth.AddAuthStateListener");
		
		UFirebaseAuth_AddAuthStateListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseAuth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseAuth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseAuth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseAuthStateListener.RunValueListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseAuthStateListener*                  listener                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseAuthStateListener* UFirebaseAuthStateListener::RunValueListener(class UFirebaseAuthStateListener* listener)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseAuthStateListener.RunValueListener");
		
		UFirebaseAuthStateListener_RunValueListener_Params params {};
		params.listener = listener;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseAuthStateListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseAuthStateListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseAuthStateListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseChildListener.RunChildListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseChildListener*                      listener                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseChildListener* UFirebaseChildListener::RunChildListener(class UFirebaseChildListener* listener)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseChildListener.RunChildListener");
		
		UFirebaseChildListener_RunChildListener_Params params {};
		params.listener = listener;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseChildListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseChildListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseChildListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseCredential.provider
	 * 		Flags  -> ()
	 */
	class FString UFirebaseCredential::provider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseCredential.provider");
		
		UFirebaseCredential_provider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseCredential.is_valid
	 * 		Flags  -> ()
	 */
	bool UFirebaseCredential::is_valid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseCredential.is_valid");
		
		UFirebaseCredential_is_valid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseCredential.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseCredential::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseCredential");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.StartWithKeyAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseVariant*                            orderValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseQuery* UFirebaseQuery::StartWithKeyAt(class UFirebaseVariant* orderValue, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.StartWithKeyAt");
		
		UFirebaseQuery_StartWithKeyAt_Params params {};
		params.orderValue = orderValue;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.StartAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseVariant*                            orderValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseQuery* UFirebaseQuery::StartAt(class UFirebaseVariant* orderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.StartAt");
		
		UFirebaseQuery_StartAt_Params params {};
		params.orderValue = orderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.SetKeepSynchronized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               keep_sync                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseQuery::SetKeepSynchronized(bool keep_sync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.SetKeepSynchronized");
		
		UFirebaseQuery_SetKeepSynchronized_Params params {};
		params.keep_sync = keep_sync;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.RemoveValueListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseValueListener*                      listner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseQuery::RemoveValueListener(class UFirebaseValueListener* listner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.RemoveValueListener");
		
		UFirebaseQuery_RemoveValueListener_Params params {};
		params.listner = listner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.RemoveChildListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseChildListener*                      listener                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseQuery::RemoveChildListener(class UFirebaseChildListener* listener)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.RemoveChildListener");
		
		UFirebaseQuery_RemoveChildListener_Params params {};
		params.listener = listener;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.RemoveAllValueListeners
	 * 		Flags  -> ()
	 */
	void UFirebaseQuery::RemoveAllValueListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.RemoveAllValueListeners");
		
		UFirebaseQuery_RemoveAllValueListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.RemoveAllChildListeners
	 * 		Flags  -> ()
	 */
	void UFirebaseQuery::RemoveAllChildListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.RemoveAllChildListeners");
		
		UFirebaseQuery_RemoveAllChildListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.OrderByValue
	 * 		Flags  -> ()
	 */
	class UFirebaseQuery* UFirebaseQuery::OrderByValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.OrderByValue");
		
		UFirebaseQuery_OrderByValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.OrderByPriority
	 * 		Flags  -> ()
	 */
	class UFirebaseQuery* UFirebaseQuery::OrderByPriority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.OrderByPriority");
		
		UFirebaseQuery_OrderByPriority_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.OrderByKey
	 * 		Flags  -> ()
	 */
	class UFirebaseQuery* UFirebaseQuery::OrderByKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.OrderByKey");
		
		UFirebaseQuery_OrderByKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.OrderByChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseQuery* UFirebaseQuery::OrderByChild(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.OrderByChild");
		
		UFirebaseQuery_OrderByChild_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.LimitToLast
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            limit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseQuery* UFirebaseQuery::LimitToLast(int64_t limit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.LimitToLast");
		
		UFirebaseQuery_LimitToLast_Params params {};
		params.limit = limit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.LimitToFirst
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            limit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseQuery* UFirebaseQuery::LimitToFirst(int64_t limit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.LimitToFirst");
		
		UFirebaseQuery_LimitToFirst_Params params {};
		params.limit = limit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.IsValid
	 * 		Flags  -> ()
	 */
	bool UFirebaseQuery::IsValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.IsValid");
		
		UFirebaseQuery_IsValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.GetValueLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureDataSnapshot* UFirebaseQuery::GetValueLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.GetValueLastResult");
		
		UFirebaseQuery_GetValueLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.GetValue
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureDataSnapshot* UFirebaseQuery::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.GetValue");
		
		UFirebaseQuery_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.GetReference
	 * 		Flags  -> ()
	 */
	class UFirebaseDatabaseRef* UFirebaseQuery::GetReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.GetReference");
		
		UFirebaseQuery_GetReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.EqualWithKeyTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseVariant*                            orderValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseQuery* UFirebaseQuery::EqualWithKeyTo(class UFirebaseVariant* orderValue, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.EqualWithKeyTo");
		
		UFirebaseQuery_EqualWithKeyTo_Params params {};
		params.orderValue = orderValue;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.EqualTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseVariant*                            orderValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseQuery* UFirebaseQuery::EqualTo(class UFirebaseVariant* orderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.EqualTo");
		
		UFirebaseQuery_EqualTo_Params params {};
		params.orderValue = orderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.EndWithKeyAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseVariant*                            orderValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseQuery* UFirebaseQuery::EndWithKeyAt(class UFirebaseVariant* orderValue, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.EndWithKeyAt");
		
		UFirebaseQuery_EndWithKeyAt_Params params {};
		params.orderValue = orderValue;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.EndAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseVariant*                            orderValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseQuery* UFirebaseQuery::EndAt(class UFirebaseVariant* orderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.EndAt");
		
		UFirebaseQuery_EndAt_Params params {};
		params.orderValue = orderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.AddValueListener
	 * 		Flags  -> ()
	 */
	class UFirebaseValueListener* UFirebaseQuery::AddValueListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.AddValueListener");
		
		UFirebaseQuery_AddValueListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseQuery.AddChildListener
	 * 		Flags  -> ()
	 */
	class UFirebaseChildListener* UFirebaseQuery::AddChildListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseQuery.AddChildListener");
		
		UFirebaseQuery_AddChildListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseQuery.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseQuery::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseQuery");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.URL
	 * 		Flags  -> ()
	 */
	class FString UFirebaseDatabaseRef::URL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.URL");
		
		UFirebaseDatabaseRef_URL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.UpdateChildrenLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseDatabaseRef::UpdateChildrenLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.UpdateChildrenLastResult");
		
		UFirebaseDatabaseRef_UpdateChildrenLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.UpdateChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseVariant*                            Values                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureVoid* UFirebaseDatabaseRef::UpdateChildren(class UFirebaseVariant* Values)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.UpdateChildren");
		
		UFirebaseDatabaseRef_UpdateChildren_Params params {};
		params.Values = Values;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.SetValueLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseDatabaseRef::SetValueLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.SetValueLastResult");
		
		UFirebaseDatabaseRef_SetValueLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.SetValueAndPriorityLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseDatabaseRef::SetValueAndPriorityLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.SetValueAndPriorityLastResult");
		
		UFirebaseDatabaseRef_SetValueAndPriorityLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.SetValueAndPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseVariant*                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFirebaseVariant*                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureVoid* UFirebaseDatabaseRef::SetValueAndPriority(class UFirebaseVariant* Value, class UFirebaseVariant* Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.SetValueAndPriority");
		
		UFirebaseDatabaseRef_SetValueAndPriority_Params params {};
		params.Value = Value;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseVariant*                            Variant                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureVoid* UFirebaseDatabaseRef::SetValue(class UFirebaseVariant* Variant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.SetValue");
		
		UFirebaseDatabaseRef_SetValue_Params params {};
		params.Variant = Variant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.SetPriorityLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseDatabaseRef::SetPriorityLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.SetPriorityLastResult");
		
		UFirebaseDatabaseRef_SetPriorityLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.SetPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseVariant*                            Variant                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureVoid* UFirebaseDatabaseRef::SetPriority(class UFirebaseVariant* Variant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.SetPriority");
		
		UFirebaseDatabaseRef_SetPriority_Params params {};
		params.Variant = Variant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.RunTransactionLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureDataSnapshot* UFirebaseDatabaseRef::RunTransactionLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.RunTransactionLastResult");
		
		UFirebaseDatabaseRef_RunTransactionLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.RunTransaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Body                                                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureDataSnapshot* UFirebaseDatabaseRef::RunTransaction(const class FScriptDelegate& Body)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.RunTransaction");
		
		UFirebaseDatabaseRef_RunTransaction_Params params {};
		params.Body = Body;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.RemoveValueLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseDatabaseRef::RemoveValueLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.RemoveValueLastResult");
		
		UFirebaseDatabaseRef_RemoveValueLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.RemoveValue
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseDatabaseRef::RemoveValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.RemoveValue");
		
		UFirebaseDatabaseRef_RemoveValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.PushChild
	 * 		Flags  -> ()
	 */
	class UFirebaseDatabaseRef* UFirebaseDatabaseRef::PushChild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.PushChild");
		
		UFirebaseDatabaseRef_PushChild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.Key
	 * 		Flags  -> ()
	 */
	class FString UFirebaseDatabaseRef::Key()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.Key");
		
		UFirebaseDatabaseRef_Key_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.IsRoot
	 * 		Flags  -> ()
	 */
	bool UFirebaseDatabaseRef::IsRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.IsRoot");
		
		UFirebaseDatabaseRef_IsRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.IsDatabaseValid
	 * 		Flags  -> ()
	 */
	bool UFirebaseDatabaseRef::IsDatabaseValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.IsDatabaseValid");
		
		UFirebaseDatabaseRef_IsDatabaseValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.GoOnline
	 * 		Flags  -> ()
	 */
	void UFirebaseDatabaseRef::GoOnline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.GoOnline");
		
		UFirebaseDatabaseRef_GoOnline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.GoOffline
	 * 		Flags  -> ()
	 */
	void UFirebaseDatabaseRef::GoOffline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.GoOffline");
		
		UFirebaseDatabaseRef_GoOffline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.GetRootDatabaseRefFromUrl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseDatabaseRef* UFirebaseDatabaseRef::GetRootDatabaseRefFromUrl(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.GetRootDatabaseRefFromUrl");
		
		UFirebaseDatabaseRef_GetRootDatabaseRefFromUrl_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.GetRootDatabaseRef
	 * 		Flags  -> ()
	 */
	class UFirebaseDatabaseRef* UFirebaseDatabaseRef::GetRootDatabaseRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.GetRootDatabaseRef");
		
		UFirebaseDatabaseRef_GetRootDatabaseRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.GetRoot
	 * 		Flags  -> ()
	 */
	class UFirebaseDatabaseRef* UFirebaseDatabaseRef::GetRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.GetRoot");
		
		UFirebaseDatabaseRef_GetRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.GetParent
	 * 		Flags  -> ()
	 */
	class UFirebaseDatabaseRef* UFirebaseDatabaseRef::GetParent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.GetParent");
		
		UFirebaseDatabaseRef_GetParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDatabaseRef.Child
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseDatabaseRef* UFirebaseDatabaseRef::Child(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDatabaseRef.Child");
		
		UFirebaseDatabaseRef_Child_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseDatabaseRef.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseDatabaseRef::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseDatabaseRef");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDataSnapshot.Value
	 * 		Flags  -> ()
	 */
	class UFirebaseVariant* UFirebaseDataSnapshot::Value()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDataSnapshot.Value");
		
		UFirebaseDataSnapshot_Value_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDataSnapshot.Priority
	 * 		Flags  -> ()
	 */
	class UFirebaseVariant* UFirebaseDataSnapshot::Priority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDataSnapshot.Priority");
		
		UFirebaseDataSnapshot_Priority_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDataSnapshot.Key
	 * 		Flags  -> ()
	 */
	class FString UFirebaseDataSnapshot::Key()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDataSnapshot.Key");
		
		UFirebaseDataSnapshot_Key_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDataSnapshot.IsValid
	 * 		Flags  -> ()
	 */
	bool UFirebaseDataSnapshot::IsValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDataSnapshot.IsValid");
		
		UFirebaseDataSnapshot_IsValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDataSnapshot.HasChildren
	 * 		Flags  -> ()
	 */
	bool UFirebaseDataSnapshot::HasChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDataSnapshot.HasChildren");
		
		UFirebaseDataSnapshot_HasChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDataSnapshot.HasChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFirebaseDataSnapshot::HasChild(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDataSnapshot.HasChild");
		
		UFirebaseDataSnapshot_HasChild_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDataSnapshot.Exists
	 * 		Flags  -> ()
	 */
	bool UFirebaseDataSnapshot::Exists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDataSnapshot.Exists");
		
		UFirebaseDataSnapshot_Exists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDataSnapshot.ChildrenCount
	 * 		Flags  -> ()
	 */
	int64_t UFirebaseDataSnapshot::ChildrenCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDataSnapshot.ChildrenCount");
		
		UFirebaseDataSnapshot_ChildrenCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDataSnapshot.Children
	 * 		Flags  -> ()
	 */
	TArray<class UFirebaseDataSnapshot*> UFirebaseDataSnapshot::Children()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDataSnapshot.Children");
		
		UFirebaseDataSnapshot_Children_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseDataSnapshot.Child
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseDataSnapshot* UFirebaseDataSnapshot::Child(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseDataSnapshot.Child");
		
		UFirebaseDataSnapshot_Child_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseDataSnapshot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseDataSnapshot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseDataSnapshot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFacebookCredential.RequestFacebookCredential
	 * 		Flags  -> ()
	 */
	class UFirebaseFacebookCredential* UFirebaseFacebookCredential::RequestFacebookCredential()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFacebookCredential.RequestFacebookCredential");
		
		UFirebaseFacebookCredential_RequestFacebookCredential_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseFacebookCredential.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseFacebookCredential::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseFacebookCredential");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.UnsubscribeLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseFunctionLibrary::UnsubscribeLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.UnsubscribeLastResult");
		
		UFirebaseFunctionLibrary_UnsubscribeLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.Unsubscribe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      topic                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureVoid* UFirebaseFunctionLibrary::Unsubscribe(const class FString& topic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.Unsubscribe");
		
		UFirebaseFunctionLibrary_Unsubscribe_Params params {};
		params.topic = topic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.SubscribeLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseFunctionLibrary::SubscribeLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.SubscribeLastResult");
		
		UFirebaseFunctionLibrary_SubscribeLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.Subscribe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      topic                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureVoid* UFirebaseFunctionLibrary::Subscribe(const class FString& topic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.Subscribe");
		
		UFirebaseFunctionLibrary_Subscribe_Params params {};
		params.topic = topic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.SetUserProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Property                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseFunctionLibrary::SetUserProperty(const class FString& Name, const class FString& Property)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.SetUserProperty");
		
		UFirebaseFunctionLibrary_SetUserProperty_Params params {};
		params.Name = Name;
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.SetDefaults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFirebaseConfigKeyValueVariant>      defaults                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureVoid* UFirebaseFunctionLibrary::SetDefaults(TArray<struct FFirebaseConfigKeyValueVariant> defaults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.SetDefaults");
		
		UFirebaseFunctionLibrary_SetDefaults_Params params {};
		params.defaults = defaults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.SetCurrentScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      screen_name                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      screen_class                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseFunctionLibrary::SetCurrentScreen(const class FString& screen_name, const class FString& screen_class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.SetCurrentScreen");
		
		UFirebaseFunctionLibrary_SetCurrentScreen_Params params {};
		params.screen_name = screen_name;
		params.screen_class = screen_class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.RequestPermissionLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseFunctionLibrary::RequestPermissionLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.RequestPermissionLastResult");
		
		UFirebaseFunctionLibrary_RequestPermissionLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.RequestPermission
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseFunctionLibrary::RequestPermission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.RequestPermission");
		
		UFirebaseFunctionLibrary_RequestPermission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.PollRegistrationToken
	 * 		Flags  -> ()
	 */
	class FString UFirebaseFunctionLibrary::PollRegistrationToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.PollRegistrationToken");
		
		UFirebaseFunctionLibrary_PollRegistrationToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.PollMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFirebaseMessage                            Message                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UFirebaseFunctionLibrary::PollMessage(struct FFirebaseMessage* Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.PollMessage");
		
		UFirebaseFunctionLibrary_PollMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Message != nullptr)
			*Message = params.Message;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.LogStringEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAnalyticsEvent                                    Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAnalyticsParameter                                parameter_name                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      parameter_value                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseFunctionLibrary::LogStringEvent(EAnalyticsEvent Name, EAnalyticsParameter parameter_name, const class FString& parameter_value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.LogStringEvent");
		
		UFirebaseFunctionLibrary_LogStringEvent_Params params {};
		params.Name = Name;
		params.parameter_name = parameter_name;
		params.parameter_value = parameter_value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.LogIntEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAnalyticsEvent                                    Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAnalyticsParameter                                parameter_name                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            parameter_value                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseFunctionLibrary::LogIntEvent(EAnalyticsEvent Name, EAnalyticsParameter parameter_name, int32_t parameter_value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.LogIntEvent");
		
		UFirebaseFunctionLibrary_LogIntEvent_Params params {};
		params.Name = Name;
		params.parameter_name = parameter_name;
		params.parameter_value = parameter_value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.LogInt64Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAnalyticsEvent                                    Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAnalyticsParameter                                parameter_name                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            parameter_value                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseFunctionLibrary::LogInt64Event(EAnalyticsEvent Name, EAnalyticsParameter parameter_name, int64_t parameter_value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.LogInt64Event");
		
		UFirebaseFunctionLibrary_LogInt64Event_Params params {};
		params.Name = Name;
		params.parameter_name = parameter_name;
		params.parameter_value = parameter_value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.LogFloatEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAnalyticsEvent                                    Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAnalyticsParameter                                parameter_name                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              parameter_value                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseFunctionLibrary::LogFloatEvent(EAnalyticsEvent Name, EAnalyticsParameter parameter_name, float parameter_value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.LogFloatEvent");
		
		UFirebaseFunctionLibrary_LogFloatEvent_Params params {};
		params.Name = Name;
		params.parameter_name = parameter_name;
		params.parameter_value = parameter_value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.LogEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAnalyticsEvent                                    Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseFunctionLibrary::LogEvent(EAnalyticsEvent Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.LogEvent");
		
		UFirebaseFunctionLibrary_LogEvent_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.LogCustomStringEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      parameter_name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      parameter_value                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseFunctionLibrary::LogCustomStringEvent(const class FString& Name, const class FString& parameter_name, const class FString& parameter_value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.LogCustomStringEvent");
		
		UFirebaseFunctionLibrary_LogCustomStringEvent_Params params {};
		params.Name = Name;
		params.parameter_name = parameter_name;
		params.parameter_value = parameter_value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.LogCustomIntEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      parameter_name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            parameter_value                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseFunctionLibrary::LogCustomIntEvent(const class FString& Name, const class FString& parameter_name, int32_t parameter_value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.LogCustomIntEvent");
		
		UFirebaseFunctionLibrary_LogCustomIntEvent_Params params {};
		params.Name = Name;
		params.parameter_name = parameter_name;
		params.parameter_value = parameter_value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.LogCustomInt64Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      parameter_name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            parameter_value                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseFunctionLibrary::LogCustomInt64Event(const class FString& Name, const class FString& parameter_name, int64_t parameter_value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.LogCustomInt64Event");
		
		UFirebaseFunctionLibrary_LogCustomInt64Event_Params params {};
		params.Name = Name;
		params.parameter_name = parameter_name;
		params.parameter_value = parameter_value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.LogCustomFloatEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      parameter_name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              parameter_value                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseFunctionLibrary::LogCustomFloatEvent(const class FString& Name, const class FString& parameter_name, float parameter_value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.LogCustomFloatEvent");
		
		UFirebaseFunctionLibrary_LogCustomFloatEvent_Params params {};
		params.Name = Name;
		params.parameter_name = parameter_name;
		params.parameter_value = parameter_value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.LogCustomEventWithParameterList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnalyticsParam>                     parameterList                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFirebaseFunctionLibrary::LogCustomEventWithParameterList(const class FString& Name, TArray<struct FAnalyticsParam> parameterList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.LogCustomEventWithParameterList");
		
		UFirebaseFunctionLibrary_LogCustomEventWithParameterList_Params params {};
		params.Name = Name;
		params.parameterList = parameterList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.LogCustomEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseFunctionLibrary::LogCustomEvent(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.LogCustomEvent");
		
		UFirebaseFunctionLibrary_LogCustomEvent_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.IsSupportAppleSignIn
	 * 		Flags  -> ()
	 */
	bool UFirebaseFunctionLibrary::IsSupportAppleSignIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.IsSupportAppleSignIn");
		
		UFirebaseFunctionLibrary_IsSupportAppleSignIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.GetString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FValueInfo                                  Info                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UFirebaseFunctionLibrary::GetString(const class FString& Key, struct FValueInfo* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.GetString");
		
		UFirebaseFunctionLibrary_GetString_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.GetLong
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FValueInfo                                  Info                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int64_t UFirebaseFunctionLibrary::GetLong(const class FString& Key, struct FValueInfo* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.GetLong");
		
		UFirebaseFunctionLibrary_GetLong_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.GetKeysByPrefix
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UFirebaseFunctionLibrary::GetKeysByPrefix(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.GetKeysByPrefix");
		
		UFirebaseFunctionLibrary_GetKeysByPrefix_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.GetKeys
	 * 		Flags  -> ()
	 */
	TArray<class FString> UFirebaseFunctionLibrary::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.GetKeys");
		
		UFirebaseFunctionLibrary_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.GetDouble
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FValueInfo                                  Info                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UFirebaseFunctionLibrary::GetDouble(const class FString& Key, struct FValueInfo* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.GetDouble");
		
		UFirebaseFunctionLibrary_GetDouble_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.GetBoolean
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FValueInfo                                  Info                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFirebaseFunctionLibrary::GetBoolean(const class FString& Key, struct FValueInfo* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.GetBoolean");
		
		UFirebaseFunctionLibrary_GetBoolean_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.FireBaseInitialize
	 * 		Flags  -> ()
	 */
	bool UFirebaseFunctionLibrary::FireBaseInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.FireBaseInitialize");
		
		UFirebaseFunctionLibrary_FireBaseInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.FetchLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseFunctionLibrary::FetchLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.FetchLastResult");
		
		UFirebaseFunctionLibrary_FetchLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.FetchAndActivateLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureBool* UFirebaseFunctionLibrary::FetchAndActivateLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.FetchAndActivateLastResult");
		
		UFirebaseFunctionLibrary_FetchAndActivateLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.FetchAndActivate
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureBool* UFirebaseFunctionLibrary::FetchAndActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.FetchAndActivate");
		
		UFirebaseFunctionLibrary_FetchAndActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.Fetch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            cache_expiration_in_seconds                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureVoid* UFirebaseFunctionLibrary::Fetch(int64_t cache_expiration_in_seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.Fetch");
		
		UFirebaseFunctionLibrary_Fetch_Params params {};
		params.cache_expiration_in_seconds = cache_expiration_in_seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.CrashTest3
	 * 		Flags  -> ()
	 */
	void UFirebaseFunctionLibrary::CrashTest3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.CrashTest3");
		
		UFirebaseFunctionLibrary_CrashTest3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.CrashTest2
	 * 		Flags  -> ()
	 */
	void UFirebaseFunctionLibrary::CrashTest2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.CrashTest2");
		
		UFirebaseFunctionLibrary_CrashTest2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.CrashTest
	 * 		Flags  -> ()
	 */
	void UFirebaseFunctionLibrary::CrashTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.CrashTest");
		
		UFirebaseFunctionLibrary_CrashTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.CrashlyticsByUserID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      userID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseFunctionLibrary::CrashlyticsByUserID(const class FString& userID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.CrashlyticsByUserID");
		
		UFirebaseFunctionLibrary_CrashlyticsByUserID_Params params {};
		params.userID = userID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.ActivateLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureBool* UFirebaseFunctionLibrary::ActivateLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.ActivateLastResult");
		
		UFirebaseFunctionLibrary_ActivateLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.ActivateFetched
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureBool* UFirebaseFunctionLibrary::ActivateFetched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.ActivateFetched");
		
		UFirebaseFunctionLibrary_ActivateFetched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFunctionLibrary.Activate
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureBool* UFirebaseFunctionLibrary::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFunctionLibrary.Activate");
		
		UFirebaseFunctionLibrary_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFutureBool.WaitFuture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseFutureBool*                         future                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureBool* UFirebaseFutureBool::WaitFuture(class UFirebaseFutureBool* future)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFutureBool.WaitFuture");
		
		UFirebaseFutureBool_WaitFuture_Params params {};
		params.future = future;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseFutureBool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseFutureBool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseFutureBool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFutureDataSnapshot.WaitFuture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseFutureDataSnapshot*                 future                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureDataSnapshot* UFirebaseFutureDataSnapshot::WaitFuture(class UFirebaseFutureDataSnapshot* future)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFutureDataSnapshot.WaitFuture");
		
		UFirebaseFutureDataSnapshot_WaitFuture_Params params {};
		params.future = future;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseFutureDataSnapshot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseFutureDataSnapshot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseFutureDataSnapshot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFutureFetchProvideResult.WaitFuture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseFutureFetchProvideResult*           future                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureFetchProvideResult* UFirebaseFutureFetchProvideResult::WaitFuture(class UFirebaseFutureFetchProvideResult* future)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFutureFetchProvideResult.WaitFuture");
		
		UFirebaseFutureFetchProvideResult_WaitFuture_Params params {};
		params.future = future;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseFutureFetchProvideResult.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseFutureFetchProvideResult::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseFutureFetchProvideResult");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFutureSignInResult.WaitFuture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseFutureSignInResult*                 future                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureSignInResult* UFirebaseFutureSignInResult::WaitFuture(class UFirebaseFutureSignInResult* future)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFutureSignInResult.WaitFuture");
		
		UFirebaseFutureSignInResult_WaitFuture_Params params {};
		params.future = future;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseFutureSignInResult.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseFutureSignInResult::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseFutureSignInResult");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFutureString.WaitFuture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseFutureString*                       future                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureString* UFirebaseFutureString::WaitFuture(class UFirebaseFutureString* future)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFutureString.WaitFuture");
		
		UFirebaseFutureString_WaitFuture_Params params {};
		params.future = future;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseFutureString.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseFutureString::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseFutureString");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFutureUser.WaitFuture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseFutureUser*                         future                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureUser* UFirebaseFutureUser::WaitFuture(class UFirebaseFutureUser* future)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFutureUser.WaitFuture");
		
		UFirebaseFutureUser_WaitFuture_Params params {};
		params.future = future;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseFutureUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseFutureUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseFutureUser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseFutureVoid.WaitFuture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseFutureVoid*                         future                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureVoid* UFirebaseFutureVoid::WaitFuture(class UFirebaseFutureVoid* future)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseFutureVoid.WaitFuture");
		
		UFirebaseFutureVoid_WaitFuture_Params params {};
		params.future = future;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseFutureVoid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseFutureVoid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseFutureVoid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseGameCenterCredential.RequestGameCenterCredential
	 * 		Flags  -> ()
	 */
	class UFirebaseGameCenterCredential* UFirebaseGameCenterCredential::RequestGameCenterCredential()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseGameCenterCredential.RequestGameCenterCredential");
		
		UFirebaseGameCenterCredential_RequestGameCenterCredential_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseGameCenterCredential.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseGameCenterCredential::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseGameCenterCredential");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseGoogleCredential.RequestGoogleCredential
	 * 		Flags  -> ()
	 */
	class UFirebaseGoogleCredential* UFirebaseGoogleCredential::RequestGoogleCredential()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseGoogleCredential.RequestGoogleCredential");
		
		UFirebaseGoogleCredential_RequestGoogleCredential_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseGoogleCredential.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseGoogleCredential::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseGoogleCredential");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseGoogleServerAuthCode.RequestGoogleServerAuthCode
	 * 		Flags  -> ()
	 */
	class UFirebaseGoogleServerAuthCode* UFirebaseGoogleServerAuthCode::RequestGoogleServerAuthCode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseGoogleServerAuthCode.RequestGoogleServerAuthCode");
		
		UFirebaseGoogleServerAuthCode_RequestGoogleServerAuthCode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseGoogleServerAuthCode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseGoogleServerAuthCode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseGoogleServerAuthCode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseMessageInitlize.FirebaseMessageInitlize
	 * 		Flags  -> ()
	 */
	class UFirebaseMessageInitlize* UFirebaseMessageInitlize::FirebaseMessageInitlize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseMessageInitlize.FirebaseMessageInitlize");
		
		UFirebaseMessageInitlize_FirebaseMessageInitlize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseMessageInitlize.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseMessageInitlize::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseMessageInitlize");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseMutableData.Value
	 * 		Flags  -> ()
	 */
	class UFirebaseVariant* UFirebaseMutableData::Value()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseMutableData.Value");
		
		UFirebaseMutableData_Value_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseMutableData.set_value
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseVariant*                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseMutableData::set_value(class UFirebaseVariant* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseMutableData.set_value");
		
		UFirebaseMutableData_set_value_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseMutableData.set_priority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseVariant*                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFirebaseMutableData::set_priority(class UFirebaseVariant* Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseMutableData.set_priority");
		
		UFirebaseMutableData_set_priority_Params params {};
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseMutableData.Priority
	 * 		Flags  -> ()
	 */
	class UFirebaseVariant* UFirebaseMutableData::Priority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseMutableData.Priority");
		
		UFirebaseMutableData_Priority_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseMutableData.Key
	 * 		Flags  -> ()
	 */
	class FString UFirebaseMutableData::Key()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseMutableData.Key");
		
		UFirebaseMutableData_Key_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseMutableData.HasChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFirebaseMutableData::HasChild(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseMutableData.HasChild");
		
		UFirebaseMutableData_HasChild_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseMutableData.children_count
	 * 		Flags  -> ()
	 */
	int64_t UFirebaseMutableData::children_count()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseMutableData.children_count");
		
		UFirebaseMutableData_children_count_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseMutableData.Children
	 * 		Flags  -> ()
	 */
	TArray<class UFirebaseMutableData*> UFirebaseMutableData::Children()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseMutableData.Children");
		
		UFirebaseMutableData_Children_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseMutableData.Child
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseMutableData* UFirebaseMutableData::Child(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseMutableData.Child");
		
		UFirebaseMutableData_Child_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseMutableData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseMutableData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseMutableData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUserInfoInterface.uid
	 * 		Flags  -> ()
	 */
	class FString UFirebaseUserInfoInterface::uid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUserInfoInterface.uid");
		
		UFirebaseUserInfoInterface_uid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUserInfoInterface.provider_id
	 * 		Flags  -> ()
	 */
	class FString UFirebaseUserInfoInterface::provider_id()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUserInfoInterface.provider_id");
		
		UFirebaseUserInfoInterface_provider_id_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUserInfoInterface.photo_url
	 * 		Flags  -> ()
	 */
	class FString UFirebaseUserInfoInterface::photo_url()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUserInfoInterface.photo_url");
		
		UFirebaseUserInfoInterface_photo_url_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUserInfoInterface.phone_number
	 * 		Flags  -> ()
	 */
	class FString UFirebaseUserInfoInterface::phone_number()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUserInfoInterface.phone_number");
		
		UFirebaseUserInfoInterface_phone_number_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUserInfoInterface.email
	 * 		Flags  -> ()
	 */
	class FString UFirebaseUserInfoInterface::email()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUserInfoInterface.email");
		
		UFirebaseUserInfoInterface_email_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUserInfoInterface.display_name
	 * 		Flags  -> ()
	 */
	class FString UFirebaseUserInfoInterface::display_name()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUserInfoInterface.display_name");
		
		UFirebaseUserInfoInterface_display_name_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseUserInfoInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseUserInfoInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseUserInfoInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.UpdateUserProfileLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseUser::UpdateUserProfileLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.UpdateUserProfileLastResult");
		
		UFirebaseUser_UpdateUserProfileLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.UpdateUserProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUserProfile                                profile                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureVoid* UFirebaseUser::UpdateUserProfile(const struct FUserProfile& profile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.UpdateUserProfile");
		
		UFirebaseUser_UpdateUserProfile_Params params {};
		params.profile = profile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.UpdatePhoneNumberCredentialLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureUser* UFirebaseUser::UpdatePhoneNumberCredentialLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.UpdatePhoneNumberCredentialLastResult");
		
		UFirebaseUser_UpdatePhoneNumberCredentialLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.UpdatePhoneNumberCredential
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseCredential*                         crdenntial                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureUser* UFirebaseUser::UpdatePhoneNumberCredential(class UFirebaseCredential* crdenntial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.UpdatePhoneNumberCredential");
		
		UFirebaseUser_UpdatePhoneNumberCredential_Params params {};
		params.crdenntial = crdenntial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.UpdatePasswordLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseUser::UpdatePasswordLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.UpdatePasswordLastResult");
		
		UFirebaseUser_UpdatePasswordLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.UpdatePassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      passwd                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureVoid* UFirebaseUser::UpdatePassword(const class FString& passwd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.UpdatePassword");
		
		UFirebaseUser_UpdatePassword_Params params {};
		params.passwd = passwd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.UpdateEmailLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseUser::UpdateEmailLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.UpdateEmailLastResult");
		
		UFirebaseUser_UpdateEmailLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.UpdateEmail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureVoid* UFirebaseUser::UpdateEmail(const class FString& email)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.UpdateEmail");
		
		UFirebaseUser_UpdateEmail_Params params {};
		params.email = email;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.Unlink
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      provider                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureUser* UFirebaseUser::Unlink(const class FString& provider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.Unlink");
		
		UFirebaseUser_Unlink_Params params {};
		params.provider = provider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.SendEmailVerificationLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseUser::SendEmailVerificationLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.SendEmailVerificationLastResult");
		
		UFirebaseUser_SendEmailVerificationLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.SendEmailVerification
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseUser::SendEmailVerification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.SendEmailVerification");
		
		UFirebaseUser_SendEmailVerification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.ReloadLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseUser::ReloadLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.ReloadLastResult");
		
		UFirebaseUser_ReloadLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.Reload
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseUser::Reload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.Reload");
		
		UFirebaseUser_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.ReauthenticateLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseUser::ReauthenticateLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.ReauthenticateLastResult");
		
		UFirebaseUser_ReauthenticateLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.ReauthenticateAndRetrieveDataLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureSignInResult* UFirebaseUser::ReauthenticateAndRetrieveDataLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.ReauthenticateAndRetrieveDataLastResult");
		
		UFirebaseUser_ReauthenticateAndRetrieveDataLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.ReauthenticateAndRetrieveData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseCredential*                         crdenntial                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureSignInResult* UFirebaseUser::ReauthenticateAndRetrieveData(class UFirebaseCredential* crdenntial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.ReauthenticateAndRetrieveData");
		
		UFirebaseUser_ReauthenticateAndRetrieveData_Params params {};
		params.crdenntial = crdenntial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.Reauthenticate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseCredential*                         crdenntial                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureVoid* UFirebaseUser::Reauthenticate(class UFirebaseCredential* crdenntial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.Reauthenticate");
		
		UFirebaseUser_Reauthenticate_Params params {};
		params.crdenntial = crdenntial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.provider_data
	 * 		Flags  -> ()
	 */
	TArray<class UFirebaseUserInfoInterface*> UFirebaseUser::provider_data()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.provider_data");
		
		UFirebaseUser_provider_data_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.metadata
	 * 		Flags  -> ()
	 */
	struct FUserMetadata UFirebaseUser::metadata()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.metadata");
		
		UFirebaseUser_metadata_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.LinkWithCredentialLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureUser* UFirebaseUser::LinkWithCredentialLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.LinkWithCredentialLastResult");
		
		UFirebaseUser_LinkWithCredentialLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.LinkWithCredential
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseCredential*                         crdenntial                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureUser* UFirebaseUser::LinkWithCredential(class UFirebaseCredential* crdenntial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.LinkWithCredential");
		
		UFirebaseUser_LinkWithCredential_Params params {};
		params.crdenntial = crdenntial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.LinkAndRetrieveDataWithCredentialLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureSignInResult* UFirebaseUser::LinkAndRetrieveDataWithCredentialLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.LinkAndRetrieveDataWithCredentialLastResult");
		
		UFirebaseUser_LinkAndRetrieveDataWithCredentialLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.LinkAndRetrieveDataWithCredential
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseCredential*                         crdenntial                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureSignInResult* UFirebaseUser::LinkAndRetrieveDataWithCredential(class UFirebaseCredential* crdenntial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.LinkAndRetrieveDataWithCredential");
		
		UFirebaseUser_LinkAndRetrieveDataWithCredential_Params params {};
		params.crdenntial = crdenntial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.is_email_verified
	 * 		Flags  -> ()
	 */
	bool UFirebaseUser::is_email_verified()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.is_email_verified");
		
		UFirebaseUser_is_email_verified_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.is_anonymous
	 * 		Flags  -> ()
	 */
	bool UFirebaseUser::is_anonymous()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.is_anonymous");
		
		UFirebaseUser_is_anonymous_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.GetTokenLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureString* UFirebaseUser::GetTokenLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.GetTokenLastResult");
		
		UFirebaseUser_GetTokenLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.GetToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               forceRefresh                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseFutureString* UFirebaseUser::GetToken(bool forceRefresh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.GetToken");
		
		UFirebaseUser_GetToken_Params params {};
		params.forceRefresh = forceRefresh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.DeleteLastResult
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseUser::DeleteLastResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.DeleteLastResult");
		
		UFirebaseUser_DeleteLastResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseUser.Delete
	 * 		Flags  -> ()
	 */
	class UFirebaseFutureVoid* UFirebaseUser::Delete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseUser.Delete");
		
		UFirebaseUser_Delete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseUser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseValueListener.RunValueListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFirebaseValueListener*                      listener                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseValueListener* UFirebaseValueListener::RunValueListener(class UFirebaseValueListener* listener)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseValueListener.RunValueListener");
		
		UFirebaseValueListener_RunValueListener_Params params {};
		params.listener = listener;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseValueListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseValueListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseValueListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseVariant.CreateVariantVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UFirebaseVariant*>                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UFirebaseVariant* UFirebaseVariant::CreateVariantVector(TArray<class UFirebaseVariant*> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseVariant.CreateVariantVector");
		
		UFirebaseVariant_CreateVariantVector_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseVariant.CreateVariantString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseVariant* UFirebaseVariant::CreateVariantString(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseVariant.CreateVariantString");
		
		UFirebaseVariant_CreateVariantString_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseVariant.CreateVariantMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, class UFirebaseVariant*>       Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UFirebaseVariant* UFirebaseVariant::CreateVariantMap(TMap<class FString, class UFirebaseVariant*> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseVariant.CreateVariantMap");
		
		UFirebaseVariant_CreateVariantMap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseVariant.CreateVariantInt64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseVariant* UFirebaseVariant::CreateVariantInt64(int64_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseVariant.CreateVariantInt64");
		
		UFirebaseVariant_CreateVariantInt64_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseVariant.CreateVariantFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseVariant* UFirebaseVariant::CreateVariantFloat(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseVariant.CreateVariantFloat");
		
		UFirebaseVariant_CreateVariantFloat_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFirebase.FirebaseVariant.CreateVariantBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFirebaseVariant* UFirebaseVariant::CreateVariantBool(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFirebase.FirebaseVariant.CreateVariantBool");
		
		UFirebaseVariant_CreateVariantBool_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFirebaseVariant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirebaseVariant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFirebase.FirebaseVariant");
		return ptr;
	}

}


