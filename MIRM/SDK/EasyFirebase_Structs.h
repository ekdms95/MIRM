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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum EasyFirebase.ValueEventType
	 */
	enum class EValueEventType : uint8_t
	{
		ValueEventType__Changed            = 0,
		ValueEventType__Cancelled          = 1,
		ValueEventType__ValueEventType_MAX = 2
	};

	/**
	 * Enum EasyFirebase.ChildEventType
	 */
	enum class EChildEventType : uint8_t
	{
		ChildEventType__Added              = 0,
		ChildEventType__Changed            = 1,
		ChildEventType__Moved              = 2,
		ChildEventType__Removed            = 3,
		ChildEventType__Cancelled          = 4,
		ChildEventType__ChildEventType_MAX = 5
	};

	/**
	 * Enum EasyFirebase.TransactionResult
	 */
	enum class ETransactionResult : uint8_t
	{
		TransactionResult__Success               = 0,
		TransactionResult__Abort                 = 1,
		TransactionResult__TransactionResult_MAX = 2
	};

	/**
	 * Enum EasyFirebase.AnalyticsParameter
	 */
	enum class EAnalyticsParameter : uint8_t
	{
		AnalyticsParameter__achievement_id         = 0,
		AnalyticsParameter__aclid                  = 1,
		AnalyticsParameter__affiliation            = 2,
		AnalyticsParameter__campaign               = 3,
		AnalyticsParameter__character              = 4,
		AnalyticsParameter__checkout_step          = 5,
		AnalyticsParameter__checkout_option        = 6,
		AnalyticsParameter__content                = 7,
		AnalyticsParameter__content_type           = 8,
		AnalyticsParameter__coupon                 = 9,
		AnalyticsParameter__cp1                    = 10,
		AnalyticsParameter__creative_name          = 11,
		AnalyticsParameter__creative_slot          = 12,
		AnalyticsParameter__currency               = 13,
		AnalyticsParameter__destination            = 14,
		AnalyticsParameter__end_date               = 15,
		AnalyticsParameter__flight_number          = 16,
		AnalyticsParameter__group_id               = 17,
		AnalyticsParameter__index                  = 18,
		AnalyticsParameter__item_brand             = 19,
		AnalyticsParameter__item_category          = 20,
		AnalyticsParameter__item_id                = 21,
		AnalyticsParameter__item_location_id       = 22,
		AnalyticsParameter__item_name              = 23,
		AnalyticsParameter__item_list              = 24,
		AnalyticsParameter__item_variant           = 25,
		AnalyticsParameter__level                  = 26,
		AnalyticsParameter__location               = 27,
		AnalyticsParameter__medium                 = 28,
		AnalyticsParameter__number_of_nights       = 29,
		AnalyticsParameter__number_of_passengers   = 30,
		AnalyticsParameter__number_of_rooms        = 31,
		AnalyticsParameter__origin                 = 32,
		AnalyticsParameter__price                  = 33,
		AnalyticsParameter__quantity               = 34,
		AnalyticsParameter__score                  = 35,
		AnalyticsParameter__search_term            = 36,
		AnalyticsParameter__shipping               = 37,
		AnalyticsParameter__sign_up_method         = 38,
		AnalyticsParameter__method                 = 39,
		AnalyticsParameter__source                 = 40,
		AnalyticsParameter__start_date             = 41,
		AnalyticsParameter__tax                    = 42,
		AnalyticsParameter__term                   = 43,
		AnalyticsParameter__transaction_id         = 44,
		AnalyticsParameter__travel_class           = 45,
		AnalyticsParameter__value                  = 46,
		AnalyticsParameter__virtual_currency_name  = 47,
		AnalyticsParameter__level_name             = 48,
		AnalyticsParameter__success                = 49,
		AnalyticsParameter__extend_session         = 50,
		AnalyticsParameter__AnalyticsParameter_MAX = 51
	};

	/**
	 * Enum EasyFirebase.AnalyticsEvent
	 */
	enum class EAnalyticsEvent : uint8_t
	{
		AnalyticsEvent__add_payment_info       = 0,
		AnalyticsEvent__add_to_cart            = 1,
		AnalyticsEvent__add_to_wishlist        = 2,
		AnalyticsEvent__app_open               = 3,
		AnalyticsEvent__begin_checkout         = 4,
		AnalyticsEvent__campaign_details       = 5,
		AnalyticsEvent__checkout_progress      = 6,
		AnalyticsEvent__earn_virtual_currency  = 7,
		AnalyticsEvent__ecommerce_purchase     = 8,
		AnalyticsEvent__generate_lead          = 9,
		AnalyticsEvent__join_group             = 10,
		AnalyticsEvent__level_up               = 11,
		AnalyticsEvent__login                  = 12,
		AnalyticsEvent__post_score             = 13,
		AnalyticsEvent__present_offer          = 14,
		AnalyticsEvent__purchase_refund        = 15,
		AnalyticsEvent__remove_from_cart       = 16,
		AnalyticsEvent__search                 = 17,
		AnalyticsEvent__select_content         = 18,
		AnalyticsEvent__set_checkout_option    = 19,
		AnalyticsEvent__share                  = 20,
		AnalyticsEvent__sign_up                = 21,
		AnalyticsEvent__spend_virtual_currency = 22,
		AnalyticsEvent__tutorial_begin         = 23,
		AnalyticsEvent__tutorial_complete      = 24,
		AnalyticsEvent__unlock_achievement     = 25,
		AnalyticsEvent__view_item              = 26,
		AnalyticsEvent__view_item_list         = 27,
		AnalyticsEvent__view_search_results    = 28,
		AnalyticsEvent__level_start            = 29,
		AnalyticsEvent__level_end              = 30,
		AnalyticsEvent__AnalyticsEvent_MAX     = 31
	};

	/**
	 * Enum EasyFirebase.ValueSource
	 */
	enum class EValueSource : uint8_t
	{
		ValueSource__kValueSourceStaticValue  = 0,
		ValueSource__kValueSourceRemoteValue  = 1,
		ValueSource__kValueSourceDefaultValue = 2,
		ValueSource__ValueSource_MAX          = 3
	};

	/**
	 * Enum EasyFirebase.VariantType
	 */
	enum class EVariantType : uint8_t
	{
		VariantType__Null            = 0,
		VariantType__Int64           = 1,
		VariantType__Float           = 2,
		VariantType__Bool            = 3,
		VariantType__String          = 4,
		VariantType__Vector          = 5,
		VariantType__Map             = 6,
		VariantType__VariantType_MAX = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EasyFirebase.CancelParam
	 * Size -> 0x0018
	 */
	struct FCancelParam
	{
	public:
		int32_t                                                    ErrorCode;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZ8Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EasyFirebase.ChildEventParam
	 * Size -> 0x0018
	 */
	struct FChildEventParam
	{
	public:
		class UFirebaseDataSnapshot*                               dataSnapshot;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PreviousSiblingKey;                                      // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EasyFirebase.FetchProvidersResult
	 * Size -> 0x0010
	 */
	struct FFetchProvidersResult
	{
	public:
		TArray<class FString>                                      providers;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EasyFirebase.AdditionalUserInfo
	 * Size -> 0x0070
	 */
	struct FAdditionalUserInfo
	{
	public:
		class FString                                              provider_id;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              user_name;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UFirebaseVariant*, class UFirebaseVariant*>     profile;                                                 // 0x0020(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EasyFirebase.UserMetadata
	 * Size -> 0x0010
	 */
	struct FUserMetadata
	{
	public:
		int64_t                                                    last_sign_in_timestamp;                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    creation_timestamp;                                      // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EasyFirebase.FirebaseSignInResult
	 * Size -> 0x0088
	 */
	struct FFirebaseSignInResult
	{
	public:
		class UFirebaseUser*                                       User;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAdditionalUserInfo                                 Info;                                                    // 0x0008(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FUserMetadata                                       meta;                                                    // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EasyFirebase.AnalyticsParam
	 * Size -> 0x0018
	 */
	struct FAnalyticsParam
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFirebaseVariant*                                    Value;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EasyFirebase.ValueInfo
	 * Size -> 0x0002
	 */
	struct FValueInfo
	{
	public:
		EValueSource                                               Source;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       conversion_successful;                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EasyFirebase.FirebaseConfigKeyValueVariant
	 * Size -> 0x0018
	 */
	struct FFirebaseConfigKeyValueVariant
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFirebaseVariant*                                    Value;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EasyFirebase.FirebaseNotify
	 * Size -> 0x00C0
	 */
	struct FFirebaseNotify
	{
	public:
		class FString                                              Title;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Body;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              icon;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              sound;                                                   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              badge;                                                   // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tag;                                                     // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Color;                                                   // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              click_action;                                            // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              body_loc_key;                                            // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      body_loc_args;                                           // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              title_loc_key;                                           // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      title_loc_args;                                          // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EasyFirebase.FirebaseMessage
	 * Size -> 0x01C0
	 */
	struct FFirebaseMessage
	{
	public:
		class FString                                              from;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              to;                                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              collapse_key;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         data;                                                    // 0x0030(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              message_id;                                              // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              message_type;                                            // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Priority;                                                // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    time_to_live;                                            // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LV2H[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Error;                                                   // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              error_description;                                       // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       notification_opened;                                     // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PU8L[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              link;                                                    // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    sent_time;                                               // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       have_notify;                                             // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PM3J[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFirebaseNotify                                     notification;                                            // 0x0100(0x00C0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EasyFirebase.UserProfile
	 * Size -> 0x0020
	 */
	struct FUserProfile
	{
	public:
		class FString                                              display_name;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              photo_url;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
