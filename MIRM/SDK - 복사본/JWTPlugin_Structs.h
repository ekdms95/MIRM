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
	 * Enum JWTPlugin.EAlgorithm
	 */
	enum class EAlgorithm : uint8_t
	{
		hs256 = 0,
		hs384 = 1,
		hs512 = 2,
		rs256 = 3,
		rs384 = 4,
		rs512 = 5,
		es256 = 6,
		es384 = 7,
		es512 = 8,
		MAX   = 9
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
