/**
 * Name: MIRM
 * Version: 0623
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SaveGridNavMeshCam_BP
	 * 		Flags  -> ()
	 */
	void AMirGridNavMesh_BP_C::SaveGridNavMeshCam_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SaveGridNavMeshCam_BP");
		
		AMirGridNavMesh_BP_C_SaveGridNavMeshCam_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SaveCam_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMirGridNavMesh_BP_C::SaveCam_BP(bool* result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SaveCam_BP");
		
		AMirGridNavMesh_BP_C_SaveCam_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.ChangeColorReplaceCell
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GroupNumber                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AMirGridNavMesh_BP_C::ChangeColorReplaceCell(int32_t GroupNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.ChangeColorReplaceCell");
		
		AMirGridNavMesh_BP_C_ChangeColorReplaceCell_Params params {};
		params.GroupNumber = GroupNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.LoadMap_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMirGridNavMesh_BP_C::LoadMap_BP(bool* result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.LoadMap_BP");
		
		AMirGridNavMesh_BP_C_LoadMap_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SetEditView_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DrawAttribute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            EditViewType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMirGridNavMesh_BP_C::SetEditView_BP(bool DrawAttribute, int32_t EditViewType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SetEditView_BP");
		
		AMirGridNavMesh_BP_C_SetEditView_BP_Params params {};
		params.DrawAttribute = DrawAttribute;
		params.EditViewType = EditViewType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.Hide_BP
	 * 		Flags  -> ()
	 */
	void AMirGridNavMesh_BP_C::Hide_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.Hide_BP");
		
		AMirGridNavMesh_BP_C_Hide_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.Show_BP
	 * 		Flags  -> ()
	 */
	void AMirGridNavMesh_BP_C::Show_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.Show_BP");
		
		AMirGridNavMesh_BP_C_Show_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SaveGridNavMesh_BP
	 * 		Flags  -> ()
	 */
	void AMirGridNavMesh_BP_C::SaveGridNavMesh_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SaveGridNavMesh_BP");
		
		AMirGridNavMesh_BP_C_SaveGridNavMesh_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.LoadGridNavMesh_BP
	 * 		Flags  -> ()
	 */
	void AMirGridNavMesh_BP_C::LoadGridNavMesh_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.LoadGridNavMesh_BP");
		
		AMirGridNavMesh_BP_C_LoadGridNavMesh_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.MakeGridNavMesh_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetLoaded                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMirGridNavMesh_BP_C::MakeGridNavMesh_BP(bool SetLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.MakeGridNavMesh_BP");
		
		AMirGridNavMesh_BP_C_MakeGridNavMesh_BP_Params params {};
		params.SetLoaded = SetLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.CheckCellError_BP
	 * 		Flags  -> ()
	 */
	void AMirGridNavMesh_BP_C::CheckCellError_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.CheckCellError_BP");
		
		AMirGridNavMesh_BP_C_CheckCellError_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.MakePathPoint_BP
	 * 		Flags  -> ()
	 */
	void AMirGridNavMesh_BP_C::MakePathPoint_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.MakePathPoint_BP");
		
		AMirGridNavMesh_BP_C_MakePathPoint_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.UpdateGroundInfo
	 * 		Flags  -> ()
	 */
	void AMirGridNavMesh_BP_C::UpdateGroundInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.UpdateGroundInfo");
		
		AMirGridNavMesh_BP_C_UpdateGroundInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.GetAttribute_Viewer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldPos                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Attribute                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GroundMaterial                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMirGridNavCamData                          CamData                                                    (Parm, OutParm, NoDestructor)
	 * 		int32_t                                            SiegeWarfare                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMirGridNavMesh_BP_C::GetAttribute_Viewer(const struct FVector& WorldPos, int32_t* Attribute, int32_t* GroundMaterial, struct FMirGridNavCamData* CamData, int32_t* SiegeWarfare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.GetAttribute_Viewer");
		
		AMirGridNavMesh_BP_C_GetAttribute_Viewer_Params params {};
		params.WorldPos = WorldPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attribute != nullptr)
			*Attribute = params.Attribute;
		if (GroundMaterial != nullptr)
			*GroundMaterial = params.GroundMaterial;
		if (CamData != nullptr)
			*CamData = params.CamData;
		if (SiegeWarfare != nullptr)
			*SiegeWarfare = params.SiegeWarfare;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SetCellSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   CellSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMirGridNavMesh_BP_C::SetCellSize(const struct FVector2D& CellSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SetCellSize");
		
		AMirGridNavMesh_BP_C_SetCellSize_Params params {};
		params.CellSize = CellSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SetWorldSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   WorldSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMirGridNavMesh_BP_C::SetWorldSize(const struct FVector2D& WorldSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.SetWorldSize");
		
		AMirGridNavMesh_BP_C_SetWorldSize_Params params {};
		params.WorldSize = WorldSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMirGridNavMesh_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.UserConstructionScript");
		
		AMirGridNavMesh_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMirGridNavMesh_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.ReceiveBeginPlay");
		
		AMirGridNavMesh_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMirGridNavMesh_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.ReceiveTick");
		
		AMirGridNavMesh_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.ChangeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldPos                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ColorIndex                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int64_t                                            UUID                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RestoreId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMirGridNavMesh_BP_C::ChangeColor(const struct FVector& WorldPos, int32_t ColorIndex, int64_t UUID, int32_t RestoreId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.ChangeColor");
		
		AMirGridNavMesh_BP_C_ChangeColor_Params params {};
		params.WorldPos = WorldPos;
		params.ColorIndex = ColorIndex;
		params.UUID = UUID;
		params.RestoreId = RestoreId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.RestoreColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldPos                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMirGridNavMesh_BP_C::RestoreColor(const struct FVector& WorldPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.RestoreColor");
		
		AMirGridNavMesh_BP_C_RestoreColor_Params params {};
		params.WorldPos = WorldPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.DrawPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDrawExpandedPath                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMirGridNavMesh_BP_C::DrawPath(bool bDrawExpandedPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.DrawPath");
		
		AMirGridNavMesh_BP_C_DrawPath_Params params {};
		params.bDrawExpandedPath = bDrawExpandedPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.RestoreColorId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RestoreId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMirGridNavMesh_BP_C::RestoreColorId(int32_t RestoreId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.RestoreColorId");
		
		AMirGridNavMesh_BP_C_RestoreColorId_Params params {};
		params.RestoreId = RestoreId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.ExecuteUbergraph_MirGridNavMesh_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMirGridNavMesh_BP_C::ExecuteUbergraph_MirGridNavMesh_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGridNavMesh_BP.MirGridNavMesh_BP_C.ExecuteUbergraph_MirGridNavMesh_BP");
		
		AMirGridNavMesh_BP_C_ExecuteUbergraph_MirGridNavMesh_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AMirGridNavMesh_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMirGridNavMesh_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MirGridNavMesh_BP.MirGridNavMesh_BP_C");
		return ptr;
	}

}


