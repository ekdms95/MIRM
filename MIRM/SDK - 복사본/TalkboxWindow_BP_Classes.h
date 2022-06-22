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
	 * BlueprintGeneratedClass TalkboxWindow_BP.TalkboxWindow_BP_C
	 * Size -> 0x0010 (FullSize[0x0368] - InheritedSize[0x0358])
	 */
	class ATalkboxWindow_BP_C : public ATalkBoxWindow
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnSetActive(bool IsActive, const class FString& Parameters);
		void OnReceivePrefabMessage(const class FName& PrefabMessage, const class FString& PrefabParameters);
		void OnSetVisible(bool IsVisible);
		void ExecuteUbergraph_TalkboxWindow_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
