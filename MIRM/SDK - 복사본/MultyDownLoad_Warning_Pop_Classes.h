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
	 * WidgetBlueprintGeneratedClass MultyDownLoad_Warning_Pop.MultyDownLoad_Warning_Pop_C
	 * Size -> 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
	 */
	class UMultyDownLoad_Warning_Pop_C : public UMirMultyPatchWarningPop
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ULocal_Common_Pop_slot_C*                            MultyDownLoad_Warning_Pop;                               // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnPreSet();
		void OnSetText(int32_t Type);
		void BndEvt__MultyDownLoad_Warning_Pop_Local_Common_Pop_slot_K2Node_ComponentBoundEvent_1_Ok_Btn_Click__DelegateSignature();
		void ExecuteUbergraph_MultyDownLoad_Warning_Pop(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
