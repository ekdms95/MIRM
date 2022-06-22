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
	 * BlueprintGeneratedClass MotionBlur_BP.MotionBlur_BP_C
	 * Size -> 0x0048 (FullSize[0x02A0] - InheritedSize[0x0258])
	 */
	class AMotionBlur_BP_C : public AMirMotionBlurActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsFreeze;                                                // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V61T[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPoseSnapshot                                       Pose;                                                    // 0x0268(0x0038) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnInvisibleMesh();
		void ExecuteUbergraph_MotionBlur_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
