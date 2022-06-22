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
	 * BlueprintGeneratedClass MirGridNavMesh_BP.MirGridNavMesh_BP_C
	 * Size -> 0x0044 (FullSize[0x030C] - InheritedSize[0x02C8])
	 */
	class AMirGridNavMesh_BP_C : public AMirGridNavMesh
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalWidth;                                              // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalHeight;                                             // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CellSize;                                                // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CellWidthCount;                                          // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CellHeightCount;                                         // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLoadFileToActor;                                        // 0x02EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bMakeMapFromActor;                                       // 0x02ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0GDZ[0x2];                                   // 0x02EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PathPointCellWidthCount;                                 // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NavMeshCellWidthCount;                                   // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUse8Way;                                                // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QA6F[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMirGridNavMeshTool*                                 MirGridNavMeshTool;                                      // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShow;                                                   // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bHide;                                                   // 0x0309(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDrawExpandedPath;                                       // 0x030A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClearActor;                                             // 0x030B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SaveGridNavMeshCam_BP();
		void SaveCam_BP(bool* result);
		bool ChangeColorReplaceCell(int32_t GroupNumber);
		void LoadMap_BP(bool* result);
		void SetEditView_BP(bool DrawAttribute, int32_t EditViewType);
		void Hide_BP();
		void Show_BP();
		void SaveGridNavMesh_BP();
		void LoadGridNavMesh_BP();
		void MakeGridNavMesh_BP(bool SetLoaded);
		void CheckCellError_BP();
		void MakePathPoint_BP();
		void UpdateGroundInfo();
		void GetAttribute_Viewer(const struct FVector& WorldPos, int32_t* Attribute, int32_t* GroundMaterial, struct FMirGridNavCamData* CamData, int32_t* SiegeWarfare);
		void SetCellSize(const struct FVector2D& CellSize);
		void SetWorldSize(const struct FVector2D& WorldSize);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ChangeColor(const struct FVector& WorldPos, int32_t ColorIndex, int64_t UUID, int32_t RestoreId);
		void RestoreColor(const struct FVector& WorldPos);
		void DrawPath(bool bDrawExpandedPath);
		void RestoreColorId(int32_t RestoreId);
		void ExecuteUbergraph_MirGridNavMesh_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
