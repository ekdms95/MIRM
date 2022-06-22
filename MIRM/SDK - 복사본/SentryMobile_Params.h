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
	 * Function SentryMobile.SentryMobileFunctionLibrary.SetUserInfo
	 */
	struct USentryMobileFunctionLibrary_SetUserInfo_Params
	{
	public:
		class FString                                              UserInfo;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SentryMobile.SentryMobileFunctionLibrary.Init
	 */
	struct USentryMobileFunctionLibrary_Init_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
