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
	 * WidgetBlueprintGeneratedClass Ch_Info_Status_Tab.Ch_Info_Status_Tab_C
	 * Size -> 0x0018 (FullSize[0x02F0] - InheritedSize[0x02D8])
	 */
	class UCh_Info_Status_Tab_C : public UMirPrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCh_Info_Status_Tab_Elem_C*                          Ch_Info_Status_Tab_Elem;                                 // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_29;                                          // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnInitailizeWidget(const class FString& Parameters);
		void OnChangeCflag(const struct FCFlagValues& CFlagValues);
		void ExecuteUbergraph_Ch_Info_Status_Tab(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
