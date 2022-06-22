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
	 * Function EasyFirebase.FirebaseAppleCredential.RequestAppleCredential
	 */
	struct UFirebaseAppleCredential_RequestAppleCredential_Params
	{
	public:
		class UFirebaseAppleCredential*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.SignOut
	 */
	struct UFirebaseAuth_SignOut_Params
	{	};

	/**
	 * Function EasyFirebase.FirebaseAuth.SignInWithEmailAndPasswordLastResult
	 */
	struct UFirebaseAuth_SignInWithEmailAndPasswordLastResult_Params
	{
	public:
		class UFirebaseFutureUser*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.SignInWithEmailAndPassword
	 */
	struct UFirebaseAuth_SignInWithEmailAndPassword_Params
	{
	public:
		class FString                                              email;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              passwd;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureUser*                                 ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.SignInWithCustomTokenLastResult
	 */
	struct UFirebaseAuth_SignInWithCustomTokenLastResult_Params
	{
	public:
		class UFirebaseFutureUser*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.SignInWithCustomToken
	 */
	struct UFirebaseAuth_SignInWithCustomToken_Params
	{
	public:
		class FString                                              Token;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureUser*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.SignInWithCredentialLastResult
	 */
	struct UFirebaseAuth_SignInWithCredentialLastResult_Params
	{
	public:
		class UFirebaseFutureUser*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.SignInWithCredential
	 */
	struct UFirebaseAuth_SignInWithCredential_Params
	{
	public:
		class UFirebaseCredential*                                 credential;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureUser*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.SignInAnonymously
	 */
	struct UFirebaseAuth_SignInAnonymously_Params
	{
	public:
		class UFirebaseFutureUser*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.SignInAndRetrieveDataWithCredentialLastResult
	 */
	struct UFirebaseAuth_SignInAndRetrieveDataWithCredentialLastResult_Params
	{
	public:
		class UFirebaseFutureSignInResult*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.SignInAndRetrieveDataWithCredential
	 */
	struct UFirebaseAuth_SignInAndRetrieveDataWithCredential_Params
	{
	public:
		class UFirebaseCredential*                                 credential;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureSignInResult*                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.SendPasswordResetEmailLastResult
	 */
	struct UFirebaseAuth_SendPasswordResetEmailLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.SendPasswordResetEmail
	 */
	struct UFirebaseAuth_SendPasswordResetEmail_Params
	{
	public:
		class FString                                              email;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.RemoveAuthStateListener
	 */
	struct UFirebaseAuth_RemoveAuthStateListener_Params
	{
	public:
		class UFirebaseAuthStateListener*                          listener;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.GetPlayServiceCredential
	 */
	struct UFirebaseAuth_GetPlayServiceCredential_Params
	{
	public:
		class FString                                              serverAuthCode;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseCredential*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.GetFirebaseAuth
	 */
	struct UFirebaseAuth_GetFirebaseAuth_Params
	{
	public:
		class UFirebaseAuth*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.FetchProvidersForEmailLastResult
	 */
	struct UFirebaseAuth_FetchProvidersForEmailLastResult_Params
	{
	public:
		class UFirebaseFutureFetchProvideResult*                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.FetchProvidersForEmail
	 */
	struct UFirebaseAuth_FetchProvidersForEmail_Params
	{
	public:
		class FString                                              email;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureFetchProvideResult*                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.current_user
	 */
	struct UFirebaseAuth_current_user_Params
	{
	public:
		class UFirebaseUser*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.CreateUserWithEmailAndPasswordLastResult
	 */
	struct UFirebaseAuth_CreateUserWithEmailAndPasswordLastResult_Params
	{
	public:
		class UFirebaseFutureUser*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.CreateUserWithEmailAndPassword
	 */
	struct UFirebaseAuth_CreateUserWithEmailAndPassword_Params
	{
	public:
		class FString                                              email;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              passwd;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureUser*                                 ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuth.AddAuthStateListener
	 */
	struct UFirebaseAuth_AddAuthStateListener_Params
	{
	public:
		class UFirebaseAuthStateListener*                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseAuthStateListener.RunValueListener
	 */
	struct UFirebaseAuthStateListener_RunValueListener_Params
	{
	public:
		class UFirebaseAuthStateListener*                          listener;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseAuthStateListener*                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseChildListener.RunChildListener
	 */
	struct UFirebaseChildListener_RunChildListener_Params
	{
	public:
		class UFirebaseChildListener*                              listener;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseChildListener*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseCredential.provider
	 */
	struct UFirebaseCredential_provider_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseCredential.is_valid
	 */
	struct UFirebaseCredential_is_valid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.StartWithKeyAt
	 */
	struct UFirebaseQuery_StartWithKeyAt_Params
	{
	public:
		class UFirebaseVariant*                                    orderValue;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseQuery*                                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.StartAt
	 */
	struct UFirebaseQuery_StartAt_Params
	{
	public:
		class UFirebaseVariant*                                    orderValue;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseQuery*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.SetKeepSynchronized
	 */
	struct UFirebaseQuery_SetKeepSynchronized_Params
	{
	public:
		bool                                                       keep_sync;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.RemoveValueListener
	 */
	struct UFirebaseQuery_RemoveValueListener_Params
	{
	public:
		class UFirebaseValueListener*                              listner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.RemoveChildListener
	 */
	struct UFirebaseQuery_RemoveChildListener_Params
	{
	public:
		class UFirebaseChildListener*                              listener;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.RemoveAllValueListeners
	 */
	struct UFirebaseQuery_RemoveAllValueListeners_Params
	{	};

	/**
	 * Function EasyFirebase.FirebaseQuery.RemoveAllChildListeners
	 */
	struct UFirebaseQuery_RemoveAllChildListeners_Params
	{	};

	/**
	 * Function EasyFirebase.FirebaseQuery.OrderByValue
	 */
	struct UFirebaseQuery_OrderByValue_Params
	{
	public:
		class UFirebaseQuery*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.OrderByPriority
	 */
	struct UFirebaseQuery_OrderByPriority_Params
	{
	public:
		class UFirebaseQuery*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.OrderByKey
	 */
	struct UFirebaseQuery_OrderByKey_Params
	{
	public:
		class UFirebaseQuery*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.OrderByChild
	 */
	struct UFirebaseQuery_OrderByChild_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseQuery*                                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.LimitToLast
	 */
	struct UFirebaseQuery_LimitToLast_Params
	{
	public:
		int64_t                                                    limit;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseQuery*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.LimitToFirst
	 */
	struct UFirebaseQuery_LimitToFirst_Params
	{
	public:
		int64_t                                                    limit;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseQuery*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.IsValid
	 */
	struct UFirebaseQuery_IsValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.GetValueLastResult
	 */
	struct UFirebaseQuery_GetValueLastResult_Params
	{
	public:
		class UFirebaseFutureDataSnapshot*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.GetValue
	 */
	struct UFirebaseQuery_GetValue_Params
	{
	public:
		class UFirebaseFutureDataSnapshot*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.GetReference
	 */
	struct UFirebaseQuery_GetReference_Params
	{
	public:
		class UFirebaseDatabaseRef*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.EqualWithKeyTo
	 */
	struct UFirebaseQuery_EqualWithKeyTo_Params
	{
	public:
		class UFirebaseVariant*                                    orderValue;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseQuery*                                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.EqualTo
	 */
	struct UFirebaseQuery_EqualTo_Params
	{
	public:
		class UFirebaseVariant*                                    orderValue;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseQuery*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.EndWithKeyAt
	 */
	struct UFirebaseQuery_EndWithKeyAt_Params
	{
	public:
		class UFirebaseVariant*                                    orderValue;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseQuery*                                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.EndAt
	 */
	struct UFirebaseQuery_EndAt_Params
	{
	public:
		class UFirebaseVariant*                                    orderValue;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseQuery*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.AddValueListener
	 */
	struct UFirebaseQuery_AddValueListener_Params
	{
	public:
		class UFirebaseValueListener*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseQuery.AddChildListener
	 */
	struct UFirebaseQuery_AddChildListener_Params
	{
	public:
		class UFirebaseChildListener*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.URL
	 */
	struct UFirebaseDatabaseRef_URL_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.UpdateChildrenLastResult
	 */
	struct UFirebaseDatabaseRef_UpdateChildrenLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.UpdateChildren
	 */
	struct UFirebaseDatabaseRef_UpdateChildren_Params
	{
	public:
		class UFirebaseVariant*                                    Values;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.SetValueLastResult
	 */
	struct UFirebaseDatabaseRef_SetValueLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.SetValueAndPriorityLastResult
	 */
	struct UFirebaseDatabaseRef_SetValueAndPriorityLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.SetValueAndPriority
	 */
	struct UFirebaseDatabaseRef_SetValueAndPriority_Params
	{
	public:
		class UFirebaseVariant*                                    Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseVariant*                                    Priority;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.SetValue
	 */
	struct UFirebaseDatabaseRef_SetValue_Params
	{
	public:
		class UFirebaseVariant*                                    Variant;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.SetPriorityLastResult
	 */
	struct UFirebaseDatabaseRef_SetPriorityLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.SetPriority
	 */
	struct UFirebaseDatabaseRef_SetPriority_Params
	{
	public:
		class UFirebaseVariant*                                    Variant;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.RunTransactionLastResult
	 */
	struct UFirebaseDatabaseRef_RunTransactionLastResult_Params
	{
	public:
		class UFirebaseFutureDataSnapshot*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.RunTransaction
	 */
	struct UFirebaseDatabaseRef_RunTransaction_Params
	{
	public:
		class FScriptDelegate                                      Body;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class UFirebaseFutureDataSnapshot*                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.RemoveValueLastResult
	 */
	struct UFirebaseDatabaseRef_RemoveValueLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.RemoveValue
	 */
	struct UFirebaseDatabaseRef_RemoveValue_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.PushChild
	 */
	struct UFirebaseDatabaseRef_PushChild_Params
	{
	public:
		class UFirebaseDatabaseRef*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.Key
	 */
	struct UFirebaseDatabaseRef_Key_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.IsRoot
	 */
	struct UFirebaseDatabaseRef_IsRoot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.IsDatabaseValid
	 */
	struct UFirebaseDatabaseRef_IsDatabaseValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.GoOnline
	 */
	struct UFirebaseDatabaseRef_GoOnline_Params
	{	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.GoOffline
	 */
	struct UFirebaseDatabaseRef_GoOffline_Params
	{	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.GetRootDatabaseRefFromUrl
	 */
	struct UFirebaseDatabaseRef_GetRootDatabaseRefFromUrl_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseDatabaseRef*                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.GetRootDatabaseRef
	 */
	struct UFirebaseDatabaseRef_GetRootDatabaseRef_Params
	{
	public:
		class UFirebaseDatabaseRef*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.GetRoot
	 */
	struct UFirebaseDatabaseRef_GetRoot_Params
	{
	public:
		class UFirebaseDatabaseRef*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.GetParent
	 */
	struct UFirebaseDatabaseRef_GetParent_Params
	{
	public:
		class UFirebaseDatabaseRef*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDatabaseRef.Child
	 */
	struct UFirebaseDatabaseRef_Child_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseDatabaseRef*                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDataSnapshot.Value
	 */
	struct UFirebaseDataSnapshot_Value_Params
	{
	public:
		class UFirebaseVariant*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDataSnapshot.Priority
	 */
	struct UFirebaseDataSnapshot_Priority_Params
	{
	public:
		class UFirebaseVariant*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDataSnapshot.Key
	 */
	struct UFirebaseDataSnapshot_Key_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDataSnapshot.IsValid
	 */
	struct UFirebaseDataSnapshot_IsValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDataSnapshot.HasChildren
	 */
	struct UFirebaseDataSnapshot_HasChildren_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDataSnapshot.HasChild
	 */
	struct UFirebaseDataSnapshot_HasChild_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDataSnapshot.Exists
	 */
	struct UFirebaseDataSnapshot_Exists_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDataSnapshot.ChildrenCount
	 */
	struct UFirebaseDataSnapshot_ChildrenCount_Params
	{
	public:
		int64_t                                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDataSnapshot.Children
	 */
	struct UFirebaseDataSnapshot_Children_Params
	{
	public:
		TArray<class UFirebaseDataSnapshot*>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseDataSnapshot.Child
	 */
	struct UFirebaseDataSnapshot_Child_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseDataSnapshot*                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFacebookCredential.RequestFacebookCredential
	 */
	struct UFirebaseFacebookCredential_RequestFacebookCredential_Params
	{
	public:
		class UFirebaseFacebookCredential*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.UnsubscribeLastResult
	 */
	struct UFirebaseFunctionLibrary_UnsubscribeLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.Unsubscribe
	 */
	struct UFirebaseFunctionLibrary_Unsubscribe_Params
	{
	public:
		class FString                                              topic;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.SubscribeLastResult
	 */
	struct UFirebaseFunctionLibrary_SubscribeLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.Subscribe
	 */
	struct UFirebaseFunctionLibrary_Subscribe_Params
	{
	public:
		class FString                                              topic;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.SetUserProperty
	 */
	struct UFirebaseFunctionLibrary_SetUserProperty_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Property;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.SetDefaults
	 */
	struct UFirebaseFunctionLibrary_SetDefaults_Params
	{
	public:
		TArray<struct FFirebaseConfigKeyValueVariant>              defaults;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.SetCurrentScreen
	 */
	struct UFirebaseFunctionLibrary_SetCurrentScreen_Params
	{
	public:
		class FString                                              screen_name;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              screen_class;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.RequestPermissionLastResult
	 */
	struct UFirebaseFunctionLibrary_RequestPermissionLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.RequestPermission
	 */
	struct UFirebaseFunctionLibrary_RequestPermission_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.PollRegistrationToken
	 */
	struct UFirebaseFunctionLibrary_PollRegistrationToken_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.PollMessage
	 */
	struct UFirebaseFunctionLibrary_PollMessage_Params
	{
	public:
		struct FFirebaseMessage                                    Message;                                                 // 0x0000(0x01C0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.LogStringEvent
	 */
	struct UFirebaseFunctionLibrary_LogStringEvent_Params
	{
	public:
		EAnalyticsEvent                                            Name;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAnalyticsParameter                                        parameter_name;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              parameter_value;                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.LogIntEvent
	 */
	struct UFirebaseFunctionLibrary_LogIntEvent_Params
	{
	public:
		EAnalyticsEvent                                            Name;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAnalyticsParameter                                        parameter_name;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    parameter_value;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.LogInt64Event
	 */
	struct UFirebaseFunctionLibrary_LogInt64Event_Params
	{
	public:
		EAnalyticsEvent                                            Name;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAnalyticsParameter                                        parameter_name;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    parameter_value;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.LogFloatEvent
	 */
	struct UFirebaseFunctionLibrary_LogFloatEvent_Params
	{
	public:
		EAnalyticsEvent                                            Name;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAnalyticsParameter                                        parameter_name;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      parameter_value;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.LogEvent
	 */
	struct UFirebaseFunctionLibrary_LogEvent_Params
	{
	public:
		EAnalyticsEvent                                            Name;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.LogCustomStringEvent
	 */
	struct UFirebaseFunctionLibrary_LogCustomStringEvent_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              parameter_name;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              parameter_value;                                         // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.LogCustomIntEvent
	 */
	struct UFirebaseFunctionLibrary_LogCustomIntEvent_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              parameter_name;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    parameter_value;                                         // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.LogCustomInt64Event
	 */
	struct UFirebaseFunctionLibrary_LogCustomInt64Event_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              parameter_name;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    parameter_value;                                         // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.LogCustomFloatEvent
	 */
	struct UFirebaseFunctionLibrary_LogCustomFloatEvent_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              parameter_name;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      parameter_value;                                         // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.LogCustomEventWithParameterList
	 */
	struct UFirebaseFunctionLibrary_LogCustomEventWithParameterList_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAnalyticsParam>                             parameterList;                                           // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.LogCustomEvent
	 */
	struct UFirebaseFunctionLibrary_LogCustomEvent_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.IsSupportAppleSignIn
	 */
	struct UFirebaseFunctionLibrary_IsSupportAppleSignIn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.GetString
	 */
	struct UFirebaseFunctionLibrary_GetString_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FValueInfo                                          Info;                                                    // 0x0010(0x0002)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.GetLong
	 */
	struct UFirebaseFunctionLibrary_GetLong_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FValueInfo                                          Info;                                                    // 0x0010(0x0002)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.GetKeysByPrefix
	 */
	struct UFirebaseFunctionLibrary_GetKeysByPrefix_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.GetKeys
	 */
	struct UFirebaseFunctionLibrary_GetKeys_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.GetDouble
	 */
	struct UFirebaseFunctionLibrary_GetDouble_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FValueInfo                                          Info;                                                    // 0x0010(0x0002)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.GetBoolean
	 */
	struct UFirebaseFunctionLibrary_GetBoolean_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FValueInfo                                          Info;                                                    // 0x0010(0x0002)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.FireBaseInitialize
	 */
	struct UFirebaseFunctionLibrary_FireBaseInitialize_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.FetchLastResult
	 */
	struct UFirebaseFunctionLibrary_FetchLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.FetchAndActivateLastResult
	 */
	struct UFirebaseFunctionLibrary_FetchAndActivateLastResult_Params
	{
	public:
		class UFirebaseFutureBool*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.FetchAndActivate
	 */
	struct UFirebaseFunctionLibrary_FetchAndActivate_Params
	{
	public:
		class UFirebaseFutureBool*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.Fetch
	 */
	struct UFirebaseFunctionLibrary_Fetch_Params
	{
	public:
		int64_t                                                    cache_expiration_in_seconds;                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.CrashTest3
	 */
	struct UFirebaseFunctionLibrary_CrashTest3_Params
	{	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.CrashTest2
	 */
	struct UFirebaseFunctionLibrary_CrashTest2_Params
	{	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.CrashTest
	 */
	struct UFirebaseFunctionLibrary_CrashTest_Params
	{	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.CrashlyticsByUserID
	 */
	struct UFirebaseFunctionLibrary_CrashlyticsByUserID_Params
	{
	public:
		class FString                                              userID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.ActivateLastResult
	 */
	struct UFirebaseFunctionLibrary_ActivateLastResult_Params
	{
	public:
		class UFirebaseFutureBool*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.ActivateFetched
	 */
	struct UFirebaseFunctionLibrary_ActivateFetched_Params
	{
	public:
		class UFirebaseFutureBool*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFunctionLibrary.Activate
	 */
	struct UFirebaseFunctionLibrary_Activate_Params
	{
	public:
		class UFirebaseFutureBool*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFutureBool.WaitFuture
	 */
	struct UFirebaseFutureBool_WaitFuture_Params
	{
	public:
		class UFirebaseFutureBool*                                 future;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureBool*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFutureDataSnapshot.WaitFuture
	 */
	struct UFirebaseFutureDataSnapshot_WaitFuture_Params
	{
	public:
		class UFirebaseFutureDataSnapshot*                         future;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureDataSnapshot*                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFutureFetchProvideResult.WaitFuture
	 */
	struct UFirebaseFutureFetchProvideResult_WaitFuture_Params
	{
	public:
		class UFirebaseFutureFetchProvideResult*                   future;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureFetchProvideResult*                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFutureSignInResult.WaitFuture
	 */
	struct UFirebaseFutureSignInResult_WaitFuture_Params
	{
	public:
		class UFirebaseFutureSignInResult*                         future;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureSignInResult*                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFutureString.WaitFuture
	 */
	struct UFirebaseFutureString_WaitFuture_Params
	{
	public:
		class UFirebaseFutureString*                               future;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureString*                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFutureUser.WaitFuture
	 */
	struct UFirebaseFutureUser_WaitFuture_Params
	{
	public:
		class UFirebaseFutureUser*                                 future;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureUser*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseFutureVoid.WaitFuture
	 */
	struct UFirebaseFutureVoid_WaitFuture_Params
	{
	public:
		class UFirebaseFutureVoid*                                 future;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseGameCenterCredential.RequestGameCenterCredential
	 */
	struct UFirebaseGameCenterCredential_RequestGameCenterCredential_Params
	{
	public:
		class UFirebaseGameCenterCredential*                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseGoogleCredential.RequestGoogleCredential
	 */
	struct UFirebaseGoogleCredential_RequestGoogleCredential_Params
	{
	public:
		class UFirebaseGoogleCredential*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseGoogleServerAuthCode.RequestGoogleServerAuthCode
	 */
	struct UFirebaseGoogleServerAuthCode_RequestGoogleServerAuthCode_Params
	{
	public:
		class UFirebaseGoogleServerAuthCode*                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseMessageInitlize.FirebaseMessageInitlize
	 */
	struct UFirebaseMessageInitlize_FirebaseMessageInitlize_Params
	{
	public:
		class UFirebaseMessageInitlize*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseMutableData.Value
	 */
	struct UFirebaseMutableData_Value_Params
	{
	public:
		class UFirebaseVariant*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseMutableData.set_value
	 */
	struct UFirebaseMutableData_set_value_Params
	{
	public:
		class UFirebaseVariant*                                    Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseMutableData.set_priority
	 */
	struct UFirebaseMutableData_set_priority_Params
	{
	public:
		class UFirebaseVariant*                                    Priority;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseMutableData.Priority
	 */
	struct UFirebaseMutableData_Priority_Params
	{
	public:
		class UFirebaseVariant*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseMutableData.Key
	 */
	struct UFirebaseMutableData_Key_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseMutableData.HasChild
	 */
	struct UFirebaseMutableData_HasChild_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseMutableData.children_count
	 */
	struct UFirebaseMutableData_children_count_Params
	{
	public:
		int64_t                                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseMutableData.Children
	 */
	struct UFirebaseMutableData_Children_Params
	{
	public:
		TArray<class UFirebaseMutableData*>                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseMutableData.Child
	 */
	struct UFirebaseMutableData_Child_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseMutableData*                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUserInfoInterface.uid
	 */
	struct UFirebaseUserInfoInterface_uid_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUserInfoInterface.provider_id
	 */
	struct UFirebaseUserInfoInterface_provider_id_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUserInfoInterface.photo_url
	 */
	struct UFirebaseUserInfoInterface_photo_url_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUserInfoInterface.phone_number
	 */
	struct UFirebaseUserInfoInterface_phone_number_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUserInfoInterface.email
	 */
	struct UFirebaseUserInfoInterface_email_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUserInfoInterface.display_name
	 */
	struct UFirebaseUserInfoInterface_display_name_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.UpdateUserProfileLastResult
	 */
	struct UFirebaseUser_UpdateUserProfileLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.UpdateUserProfile
	 */
	struct UFirebaseUser_UpdateUserProfile_Params
	{
	public:
		struct FUserProfile                                        profile;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.UpdatePhoneNumberCredentialLastResult
	 */
	struct UFirebaseUser_UpdatePhoneNumberCredentialLastResult_Params
	{
	public:
		class UFirebaseFutureUser*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.UpdatePhoneNumberCredential
	 */
	struct UFirebaseUser_UpdatePhoneNumberCredential_Params
	{
	public:
		class UFirebaseCredential*                                 crdenntial;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureUser*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.UpdatePasswordLastResult
	 */
	struct UFirebaseUser_UpdatePasswordLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.UpdatePassword
	 */
	struct UFirebaseUser_UpdatePassword_Params
	{
	public:
		class FString                                              passwd;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.UpdateEmailLastResult
	 */
	struct UFirebaseUser_UpdateEmailLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.UpdateEmail
	 */
	struct UFirebaseUser_UpdateEmail_Params
	{
	public:
		class FString                                              email;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.Unlink
	 */
	struct UFirebaseUser_Unlink_Params
	{
	public:
		class FString                                              provider;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureUser*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.SendEmailVerificationLastResult
	 */
	struct UFirebaseUser_SendEmailVerificationLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.SendEmailVerification
	 */
	struct UFirebaseUser_SendEmailVerification_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.ReloadLastResult
	 */
	struct UFirebaseUser_ReloadLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.Reload
	 */
	struct UFirebaseUser_Reload_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.ReauthenticateLastResult
	 */
	struct UFirebaseUser_ReauthenticateLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.ReauthenticateAndRetrieveDataLastResult
	 */
	struct UFirebaseUser_ReauthenticateAndRetrieveDataLastResult_Params
	{
	public:
		class UFirebaseFutureSignInResult*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.ReauthenticateAndRetrieveData
	 */
	struct UFirebaseUser_ReauthenticateAndRetrieveData_Params
	{
	public:
		class UFirebaseCredential*                                 crdenntial;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureSignInResult*                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.Reauthenticate
	 */
	struct UFirebaseUser_Reauthenticate_Params
	{
	public:
		class UFirebaseCredential*                                 crdenntial;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.provider_data
	 */
	struct UFirebaseUser_provider_data_Params
	{
	public:
		TArray<class UFirebaseUserInfoInterface*>                  ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.metadata
	 */
	struct UFirebaseUser_metadata_Params
	{
	public:
		struct FUserMetadata                                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.LinkWithCredentialLastResult
	 */
	struct UFirebaseUser_LinkWithCredentialLastResult_Params
	{
	public:
		class UFirebaseFutureUser*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.LinkWithCredential
	 */
	struct UFirebaseUser_LinkWithCredential_Params
	{
	public:
		class UFirebaseCredential*                                 crdenntial;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureUser*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.LinkAndRetrieveDataWithCredentialLastResult
	 */
	struct UFirebaseUser_LinkAndRetrieveDataWithCredentialLastResult_Params
	{
	public:
		class UFirebaseFutureSignInResult*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.LinkAndRetrieveDataWithCredential
	 */
	struct UFirebaseUser_LinkAndRetrieveDataWithCredential_Params
	{
	public:
		class UFirebaseCredential*                                 crdenntial;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureSignInResult*                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.is_email_verified
	 */
	struct UFirebaseUser_is_email_verified_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.is_anonymous
	 */
	struct UFirebaseUser_is_anonymous_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.GetTokenLastResult
	 */
	struct UFirebaseUser_GetTokenLastResult_Params
	{
	public:
		class UFirebaseFutureString*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.GetToken
	 */
	struct UFirebaseUser_GetToken_Params
	{
	public:
		bool                                                       forceRefresh;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseFutureString*                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.DeleteLastResult
	 */
	struct UFirebaseUser_DeleteLastResult_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseUser.Delete
	 */
	struct UFirebaseUser_Delete_Params
	{
	public:
		class UFirebaseFutureVoid*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseValueListener.RunValueListener
	 */
	struct UFirebaseValueListener_RunValueListener_Params
	{
	public:
		class UFirebaseValueListener*                              listener;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseValueListener*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseVariant.CreateVariantVector
	 */
	struct UFirebaseVariant_CreateVariantVector_Params
	{
	public:
		TArray<class UFirebaseVariant*>                            Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UFirebaseVariant*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseVariant.CreateVariantString
	 */
	struct UFirebaseVariant_CreateVariantString_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseVariant*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseVariant.CreateVariantMap
	 */
	struct UFirebaseVariant_CreateVariantMap_Params
	{
	public:
		TMap<class FString, class UFirebaseVariant*>               Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UFirebaseVariant*                                    ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseVariant.CreateVariantInt64
	 */
	struct UFirebaseVariant_CreateVariantInt64_Params
	{
	public:
		int64_t                                                    Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseVariant*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseVariant.CreateVariantFloat
	 */
	struct UFirebaseVariant_CreateVariantFloat_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseVariant*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyFirebase.FirebaseVariant.CreateVariantBool
	 */
	struct UFirebaseVariant_CreateVariantBool_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFirebaseVariant*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
