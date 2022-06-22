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
	 * BlueprintGeneratedClass Ginkgo_villageMaster.SequenceDirector_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USequenceDirector_C : public ULevelSequenceDirector
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ACutSceneDialogManager_BP_C* Cut_Scene_Dialog_Manager_BP);
		void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ACutSceneDialogManager_BP_C* Cut_Scene_Dialog_Manager_BP);
		void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ACutSceneDialogManager_BP_C* Cut_Scene_Dialog_Manager_BP);
		void SequenceEvent_1();
		void Cut_Scene_Dialog_Manager_BP_Event_1(class ACutSceneDialogManager_BP_C* Cut_Scene_Dialog_Manager_BP, int32_t TalkerNameID, int32_t DialogID);
		void Cut_Scene_Dialog_Manager_BP_Event_2(class ACutSceneDialogManager_BP_C* Cut_Scene_Dialog_Manager_BP, int32_t TalkerNameID, int32_t DialogID);
		void Cut_Scene_Dialog_Manager_BP_Event_3(class ACutSceneDialogManager_BP_C* Cut_Scene_Dialog_Manager_BP, int32_t TalkerNameID, int32_t DialogID);
		void ExecuteUbergraph_SequenceDirector(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
