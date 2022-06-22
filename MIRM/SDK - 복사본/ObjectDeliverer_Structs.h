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
	 * Enum ObjectDeliverer.EUPropertyType
	 */
	enum class EUPropertyType : uint8_t
	{
		None   = 0,
		Bool   = 1,
		Int    = 2,
		Float  = 3,
		Double = 4,
		UInt8  = 5,
		Enum   = 6,
		String = 7,
		Array  = 8,
		Map    = 9,
		Set    = 10,
		Struct = 11,
		Object = 12,
		MAX    = 13
	};

	/**
	 * Enum ObjectDeliverer.ECNBufferEndian
	 */
	enum class ECNBufferEndian : uint8_t
	{
		Big    = 0,
		Little = 1,
		MAX    = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
