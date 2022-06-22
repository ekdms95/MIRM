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
	 * Class EasyFirebase.FirebaseAppleCredential
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UFirebaseAppleCredential : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              UnknownData_ZHVG[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnComplete;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UFirebaseAppleCredential* RequestAppleCredential();
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseAuth
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFirebaseAuth : public UObject
	{
	public:
		void SignOut();
		class UFirebaseFutureUser* SignInWithEmailAndPasswordLastResult();
		class UFirebaseFutureUser* SignInWithEmailAndPassword(const class FString& email, const class FString& passwd);
		class UFirebaseFutureUser* SignInWithCustomTokenLastResult();
		class UFirebaseFutureUser* SignInWithCustomToken(const class FString& Token);
		class UFirebaseFutureUser* SignInWithCredentialLastResult();
		class UFirebaseFutureUser* SignInWithCredential(class UFirebaseCredential* credential);
		class UFirebaseFutureUser* SignInAnonymously();
		class UFirebaseFutureSignInResult* SignInAndRetrieveDataWithCredentialLastResult();
		class UFirebaseFutureSignInResult* SignInAndRetrieveDataWithCredential(class UFirebaseCredential* credential);
		class UFirebaseFutureVoid* SendPasswordResetEmailLastResult();
		class UFirebaseFutureVoid* SendPasswordResetEmail(const class FString& email);
		void RemoveAuthStateListener(class UFirebaseAuthStateListener* listener);
		class UFirebaseCredential* GetPlayServiceCredential(const class FString& serverAuthCode);
		class UFirebaseAuth* GetFirebaseAuth();
		class UFirebaseFutureFetchProvideResult* FetchProvidersForEmailLastResult();
		class UFirebaseFutureFetchProvideResult* FetchProvidersForEmail(const class FString& email);
		class UFirebaseUser* current_user();
		class UFirebaseFutureUser* CreateUserWithEmailAndPasswordLastResult();
		class UFirebaseFutureUser* CreateUserWithEmailAndPassword(const class FString& email, const class FString& passwd);
		class UFirebaseAuthStateListener* AddAuthStateListener();
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseAuthStateListener
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UFirebaseAuthStateListener : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnEvent;                                                 // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RREG[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		class UFirebaseAuthStateListener* RunValueListener(class UFirebaseAuthStateListener* listener);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseChildListener
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UFirebaseChildListener : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnEvent;                                                 // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K05A[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		class UFirebaseChildListener* RunChildListener(class UFirebaseChildListener* listener);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseCredential
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UFirebaseCredential : public UObject
	{
	public:
		unsigned char                                              UnknownData_MMWP[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		class FString provider();
		bool is_valid();
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseQuery
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UFirebaseQuery : public UObject
	{
	public:
		unsigned char                                              UnknownData_SYW6[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		class UFirebaseQuery* StartWithKeyAt(class UFirebaseVariant* orderValue, const class FString& Key);
		class UFirebaseQuery* StartAt(class UFirebaseVariant* orderValue);
		void SetKeepSynchronized(bool keep_sync);
		void RemoveValueListener(class UFirebaseValueListener* listner);
		void RemoveChildListener(class UFirebaseChildListener* listener);
		void RemoveAllValueListeners();
		void RemoveAllChildListeners();
		class UFirebaseQuery* OrderByValue();
		class UFirebaseQuery* OrderByPriority();
		class UFirebaseQuery* OrderByKey();
		class UFirebaseQuery* OrderByChild(const class FString& Path);
		class UFirebaseQuery* LimitToLast(int64_t limit);
		class UFirebaseQuery* LimitToFirst(int64_t limit);
		bool IsValid();
		class UFirebaseFutureDataSnapshot* GetValueLastResult();
		class UFirebaseFutureDataSnapshot* GetValue();
		class UFirebaseDatabaseRef* GetReference();
		class UFirebaseQuery* EqualWithKeyTo(class UFirebaseVariant* orderValue, const class FString& Key);
		class UFirebaseQuery* EqualTo(class UFirebaseVariant* orderValue);
		class UFirebaseQuery* EndWithKeyAt(class UFirebaseVariant* orderValue, const class FString& Key);
		class UFirebaseQuery* EndAt(class UFirebaseVariant* orderValue);
		class UFirebaseValueListener* AddValueListener();
		class UFirebaseChildListener* AddChildListener();
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseDatabaseRef
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UFirebaseDatabaseRef : public UFirebaseQuery
	{
	public:
		unsigned char                                              UnknownData_Q7JV[0x18];                                  // 0x0058(0x0018) MISSED OFFSET (PADDING)

	public:
		class FString URL();
		class UFirebaseFutureVoid* UpdateChildrenLastResult();
		class UFirebaseFutureVoid* UpdateChildren(class UFirebaseVariant* Values);
		class UFirebaseFutureVoid* SetValueLastResult();
		class UFirebaseFutureVoid* SetValueAndPriorityLastResult();
		class UFirebaseFutureVoid* SetValueAndPriority(class UFirebaseVariant* Value, class UFirebaseVariant* Priority);
		class UFirebaseFutureVoid* SetValue(class UFirebaseVariant* Variant);
		class UFirebaseFutureVoid* SetPriorityLastResult();
		class UFirebaseFutureVoid* SetPriority(class UFirebaseVariant* Variant);
		class UFirebaseFutureDataSnapshot* RunTransactionLastResult();
		class UFirebaseFutureDataSnapshot* RunTransaction(const class FScriptDelegate& Body);
		class UFirebaseFutureVoid* RemoveValueLastResult();
		class UFirebaseFutureVoid* RemoveValue();
		class UFirebaseDatabaseRef* PushChild();
		class FString Key();
		bool IsRoot();
		bool IsDatabaseValid();
		void GoOnline();
		void GoOffline();
		class UFirebaseDatabaseRef* GetRootDatabaseRefFromUrl(const class FString& URL);
		class UFirebaseDatabaseRef* GetRootDatabaseRef();
		class UFirebaseDatabaseRef* GetRoot();
		class UFirebaseDatabaseRef* GetParent();
		class UFirebaseDatabaseRef* Child(const class FString& Path);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseDataSnapshot
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UFirebaseDataSnapshot : public UObject
	{
	public:
		unsigned char                                              UnknownData_JRQZ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		class UFirebaseVariant* Value();
		class UFirebaseVariant* Priority();
		class FString Key();
		bool IsValid();
		bool HasChildren();
		bool HasChild(const class FString& Path);
		bool Exists();
		int64_t ChildrenCount();
		TArray<class UFirebaseDataSnapshot*> Children();
		class UFirebaseDataSnapshot* Child(const class FString& Path);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseFacebookCredential
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFirebaseFacebookCredential : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnComplete;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UFirebaseFacebookCredential* RequestFacebookCredential();
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFirebaseFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UFirebaseFutureVoid* UnsubscribeLastResult();
		class UFirebaseFutureVoid* Unsubscribe(const class FString& topic);
		class UFirebaseFutureVoid* SubscribeLastResult();
		class UFirebaseFutureVoid* Subscribe(const class FString& topic);
		void SetUserProperty(const class FString& Name, const class FString& Property);
		class UFirebaseFutureVoid* SetDefaults(TArray<struct FFirebaseConfigKeyValueVariant> defaults);
		void SetCurrentScreen(const class FString& screen_name, const class FString& screen_class);
		class UFirebaseFutureVoid* RequestPermissionLastResult();
		class UFirebaseFutureVoid* RequestPermission();
		class FString PollRegistrationToken();
		bool PollMessage(struct FFirebaseMessage* Message);
		void LogStringEvent(EAnalyticsEvent Name, EAnalyticsParameter parameter_name, const class FString& parameter_value);
		void LogIntEvent(EAnalyticsEvent Name, EAnalyticsParameter parameter_name, int32_t parameter_value);
		void LogInt64Event(EAnalyticsEvent Name, EAnalyticsParameter parameter_name, int64_t parameter_value);
		void LogFloatEvent(EAnalyticsEvent Name, EAnalyticsParameter parameter_name, float parameter_value);
		void LogEvent(EAnalyticsEvent Name);
		void LogCustomStringEvent(const class FString& Name, const class FString& parameter_name, const class FString& parameter_value);
		void LogCustomIntEvent(const class FString& Name, const class FString& parameter_name, int32_t parameter_value);
		void LogCustomInt64Event(const class FString& Name, const class FString& parameter_name, int64_t parameter_value);
		void LogCustomFloatEvent(const class FString& Name, const class FString& parameter_name, float parameter_value);
		void LogCustomEventWithParameterList(const class FString& Name, TArray<struct FAnalyticsParam> parameterList);
		void LogCustomEvent(const class FString& Name);
		bool IsSupportAppleSignIn();
		class FString GetString(const class FString& Key, struct FValueInfo* Info);
		int64_t GetLong(const class FString& Key, struct FValueInfo* Info);
		TArray<class FString> GetKeysByPrefix(const class FString& Key);
		TArray<class FString> GetKeys();
		float GetDouble(const class FString& Key, struct FValueInfo* Info);
		bool GetBoolean(const class FString& Key, struct FValueInfo* Info);
		bool FireBaseInitialize();
		class UFirebaseFutureVoid* FetchLastResult();
		class UFirebaseFutureBool* FetchAndActivateLastResult();
		class UFirebaseFutureBool* FetchAndActivate();
		class UFirebaseFutureVoid* Fetch(int64_t cache_expiration_in_seconds);
		void CrashTest3();
		void CrashTest2();
		void CrashTest();
		void CrashlyticsByUserID(const class FString& userID);
		class UFirebaseFutureBool* ActivateLastResult();
		class UFirebaseFutureBool* ActivateFetched();
		class UFirebaseFutureBool* Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseFutureBool
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UFirebaseFutureBool : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnComplete;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1USB[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		class UFirebaseFutureBool* WaitFuture(class UFirebaseFutureBool* future);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseFutureDataSnapshot
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UFirebaseFutureDataSnapshot : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnComplete;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0GO1[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		class UFirebaseFutureDataSnapshot* WaitFuture(class UFirebaseFutureDataSnapshot* future);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseFutureFetchProvideResult
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UFirebaseFutureFetchProvideResult : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnComplete;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KNI0[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		class UFirebaseFutureFetchProvideResult* WaitFuture(class UFirebaseFutureFetchProvideResult* future);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseFutureSignInResult
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UFirebaseFutureSignInResult : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnComplete;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8RDD[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		class UFirebaseFutureSignInResult* WaitFuture(class UFirebaseFutureSignInResult* future);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseFutureString
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UFirebaseFutureString : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnComplete;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M8RB[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		class UFirebaseFutureString* WaitFuture(class UFirebaseFutureString* future);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseFutureUser
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UFirebaseFutureUser : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnComplete;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9501[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		class UFirebaseFutureUser* WaitFuture(class UFirebaseFutureUser* future);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseFutureVoid
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UFirebaseFutureVoid : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnComplete;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L2WR[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		class UFirebaseFutureVoid* WaitFuture(class UFirebaseFutureVoid* future);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseGameCenterCredential
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UFirebaseGameCenterCredential : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnComplete;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GSAJ[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		class UFirebaseGameCenterCredential* RequestGameCenterCredential();
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseGoogleCredential
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFirebaseGoogleCredential : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnComplete;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UFirebaseGoogleCredential* RequestGoogleCredential();
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseGoogleServerAuthCode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFirebaseGoogleServerAuthCode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnComplete;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UFirebaseGoogleServerAuthCode* RequestGoogleServerAuthCode();
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseMessageInitlize
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UFirebaseMessageInitlize : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnMessageRcv;                                            // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTokenRcv;                                              // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UFirebaseMessageInitlize* FirebaseMessageInitlize();
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseMutableData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UFirebaseMutableData : public UObject
	{
	public:
		unsigned char                                              UnknownData_KS40[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		class UFirebaseVariant* Value();
		void set_value(class UFirebaseVariant* Value);
		void set_priority(class UFirebaseVariant* Priority);
		class UFirebaseVariant* Priority();
		class FString Key();
		bool HasChild(const class FString& Path);
		int64_t children_count();
		TArray<class UFirebaseMutableData*> Children();
		class UFirebaseMutableData* Child(const class FString& Path);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseUserInfoInterface
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UFirebaseUserInfoInterface : public UObject
	{
	public:
		unsigned char                                              UnknownData_LU7P[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		class FString uid();
		class FString provider_id();
		class FString photo_url();
		class FString phone_number();
		class FString email();
		class FString display_name();
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseUser
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UFirebaseUser : public UFirebaseUserInfoInterface
	{
	public:
		unsigned char                                              UnknownData_MEPU[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		class UFirebaseFutureVoid* UpdateUserProfileLastResult();
		class UFirebaseFutureVoid* UpdateUserProfile(const struct FUserProfile& profile);
		class UFirebaseFutureUser* UpdatePhoneNumberCredentialLastResult();
		class UFirebaseFutureUser* UpdatePhoneNumberCredential(class UFirebaseCredential* crdenntial);
		class UFirebaseFutureVoid* UpdatePasswordLastResult();
		class UFirebaseFutureVoid* UpdatePassword(const class FString& passwd);
		class UFirebaseFutureVoid* UpdateEmailLastResult();
		class UFirebaseFutureVoid* UpdateEmail(const class FString& email);
		class UFirebaseFutureUser* Unlink(const class FString& provider);
		class UFirebaseFutureVoid* SendEmailVerificationLastResult();
		class UFirebaseFutureVoid* SendEmailVerification();
		class UFirebaseFutureVoid* ReloadLastResult();
		class UFirebaseFutureVoid* Reload();
		class UFirebaseFutureVoid* ReauthenticateLastResult();
		class UFirebaseFutureSignInResult* ReauthenticateAndRetrieveDataLastResult();
		class UFirebaseFutureSignInResult* ReauthenticateAndRetrieveData(class UFirebaseCredential* crdenntial);
		class UFirebaseFutureVoid* Reauthenticate(class UFirebaseCredential* crdenntial);
		TArray<class UFirebaseUserInfoInterface*> provider_data();
		struct FUserMetadata metadata();
		class UFirebaseFutureUser* LinkWithCredentialLastResult();
		class UFirebaseFutureUser* LinkWithCredential(class UFirebaseCredential* crdenntial);
		class UFirebaseFutureSignInResult* LinkAndRetrieveDataWithCredentialLastResult();
		class UFirebaseFutureSignInResult* LinkAndRetrieveDataWithCredential(class UFirebaseCredential* crdenntial);
		bool is_email_verified();
		bool is_anonymous();
		class UFirebaseFutureString* GetTokenLastResult();
		class UFirebaseFutureString* GetToken(bool forceRefresh);
		class UFirebaseFutureVoid* DeleteLastResult();
		class UFirebaseFutureVoid* Delete();
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseValueListener
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UFirebaseValueListener : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnEvent;                                                 // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WG8E[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		class UFirebaseValueListener* RunValueListener(class UFirebaseValueListener* listener);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyFirebase.FirebaseVariant
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UFirebaseVariant : public UObject
	{
	public:
		EVariantType                                               DataType;                                                // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RX3N[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    Int64Value;                                              // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZEGA[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StringValue;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UFirebaseVariant*>                            VectorValue;                                             // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FString, class UFirebaseVariant*>               MapValue;                                                // 0x0060(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		class UFirebaseVariant* CreateVariantVector(TArray<class UFirebaseVariant*> Value);
		class UFirebaseVariant* CreateVariantString(const class FString& Value);
		class UFirebaseVariant* CreateVariantMap(TMap<class FString, class UFirebaseVariant*> Value);
		class UFirebaseVariant* CreateVariantInt64(int64_t Value);
		class UFirebaseVariant* CreateVariantFloat(float Value);
		class UFirebaseVariant* CreateVariantBool(bool Value);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
