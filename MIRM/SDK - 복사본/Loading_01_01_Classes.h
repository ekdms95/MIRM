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
	 * WidgetBlueprintGeneratedClass Loading_01_01.Loading_01_01_C
	 * Size -> 0x0011 (FullSize[0x02D1] - InheritedSize[0x02C0])
	 */
	class ULoading_01_01_C : public UMirLoadingWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPage_LoadingSet_C*                                  Loading_01_01;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       EndTrigger;                                              // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EndLoading();
		void OnInitialized();
		void OnAnimSpd(float timeVal);
		void OnTickbyNativeTick(float InDeltaTime);
		void OnProgressVal(float Val);
		void OnPreSet();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_Loading_01_01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
