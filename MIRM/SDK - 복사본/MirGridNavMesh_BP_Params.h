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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SaveGridNavMeshCam_BP
	 */
	struct AMirGridNavMesh_BP_C_SaveGridNavMeshCam_BP_Params
	{	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SaveCam_BP
	 */
	struct AMirGridNavMesh_BP_C_SaveCam_BP_Params
	{
	public:
		bool                                                       result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.ChangeColorReplaceCell
	 */
	struct AMirGridNavMesh_BP_C_ChangeColorReplaceCell_Params
	{
	public:
		int32_t                                                    GroupNumber;                                             // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.LoadMap_BP
	 */
	struct AMirGridNavMesh_BP_C_LoadMap_BP_Params
	{
	public:
		bool                                                       result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SetEditView_BP
	 */
	struct AMirGridNavMesh_BP_C_SetEditView_BP_Params
	{
	public:
		bool                                                       DrawAttribute;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    EditViewType;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.Hide_BP
	 */
	struct AMirGridNavMesh_BP_C_Hide_BP_Params
	{	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.Show_BP
	 */
	struct AMirGridNavMesh_BP_C_Show_BP_Params
	{	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SaveGridNavMesh_BP
	 */
	struct AMirGridNavMesh_BP_C_SaveGridNavMesh_BP_Params
	{	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.LoadGridNavMesh_BP
	 */
	struct AMirGridNavMesh_BP_C_LoadGridNavMesh_BP_Params
	{	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.MakeGridNavMesh_BP
	 */
	struct AMirGridNavMesh_BP_C_MakeGridNavMesh_BP_Params
	{
	public:
		bool                                                       SetLoaded;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.CheckCellError_BP
	 */
	struct AMirGridNavMesh_BP_C_CheckCellError_BP_Params
	{	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.MakePathPoint_BP
	 */
	struct AMirGridNavMesh_BP_C_MakePathPoint_BP_Params
	{	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.UpdateGroundInfo
	 */
	struct AMirGridNavMesh_BP_C_UpdateGroundInfo_Params
	{	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.GetAttribute_Viewer
	 */
	struct AMirGridNavMesh_BP_C_GetAttribute_Viewer_Params
	{
	public:
		struct FVector                                             WorldPos;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Attribute;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GroundMaterial;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMirGridNavCamData                                  CamData;                                                 // 0x0014(0x001C)  (Parm, OutParm, NoDestructor)
		int32_t                                                    SiegeWarfare;                                            // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SetCellSize
	 */
	struct AMirGridNavMesh_BP_C_SetCellSize_Params
	{
	public:
		struct FVector2D                                           CellSize;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SetWorldSize
	 */
	struct AMirGridNavMesh_BP_C_SetWorldSize_Params
	{
	public:
		struct FVector2D                                           WorldSize;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.UserConstructionScript
	 */
	struct AMirGridNavMesh_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.ReceiveBeginPlay
	 */
	struct AMirGridNavMesh_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.ReceiveTick
	 */
	struct AMirGridNavMesh_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.ChangeColor
	 */
	struct AMirGridNavMesh_BP_C_ChangeColor_Params
	{
	public:
		struct FVector                                             WorldPos;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ColorIndex;                                              // 0x000C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int64_t                                                    UUID;                                                    // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RestoreId;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.RestoreColor
	 */
	struct AMirGridNavMesh_BP_C_RestoreColor_Params
	{
	public:
		struct FVector                                             WorldPos;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.DrawPath
	 */
	struct AMirGridNavMesh_BP_C_DrawPath_Params
	{
	public:
		bool                                                       bDrawExpandedPath;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.RestoreColorId
	 */
	struct AMirGridNavMesh_BP_C_RestoreColorId_Params
	{
	public:
		int32_t                                                    RestoreId;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.ExecuteUbergraph_MirGridNavMesh_BP
	 */
	struct AMirGridNavMesh_BP_C_ExecuteUbergraph_MirGridNavMesh_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
