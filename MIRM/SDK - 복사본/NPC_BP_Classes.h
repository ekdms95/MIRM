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
	 * BlueprintGeneratedClass NPC_BP.NPC_BP_C
	 * Size -> 0x0020 (FullSize[0x10B0] - InheritedSize[0x1090])
	 */
	class ANPC_BP_C : public AMirNPC
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1090(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Box;                                                     // 0x1098(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_PlayerShadow;                                         // 0x10A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x10A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void SetCameraZoom(bool isZoom);
		void GetBillboardRotator(struct FRotator* Rotation);
		void OnSetBoneShake(bool IsBoneShake);
		void OnAfterPossessed();
		void OnBeforeUnPossessed();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_NPC_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
