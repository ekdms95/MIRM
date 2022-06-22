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
	 * Class UIParticleSystem.ParticleSystemWidget
	 * Size -> 0x0030 (FullSize[0x0138] - InheritedSize[0x0108])
	 */
	class UParticleSystemWidget : public UWidget
	{
	public:
		class UParticleSystem*                                     ParticleSystemTemplate;                                  // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReactivate;                                             // 0x0110(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0EKF[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            WorldParticleComponent;                                  // 0x0118(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              WorldParticleActor;                                      // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1Q42[0x10];                                  // 0x0128(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetReactivate(bool bActivateAndReset);
		void ActivateParticles(bool bActive, bool bReset);
		static UClass* StaticClass();
	};

	/**
	 * Class UIParticleSystem.UIParticleComponent
	 * Size -> 0x0000 (FullSize[0x06B0] - InheritedSize[0x06B0])
	 */
	class UUIParticleComponent : public UParticleSystemComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UIParticleSystem.UIParticleActor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class AUIParticleActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
