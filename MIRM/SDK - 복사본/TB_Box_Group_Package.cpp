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
	 * 		Name   -> Function TB_Box_Group.TB_Box_Group_C.SetNpcIntimacyGradeType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            npcid                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTB_Box_Group_C::SetNpcIntimacyGradeType(int32_t npcid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Box_Group.TB_Box_Group_C.SetNpcIntimacyGradeType");
		
		UTB_Box_Group_C_SetNpcIntimacyGradeType_Params params {};
		params.npcid = npcid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Box_Group.TB_Box_Group_C.PcNpc_Bg_Set_func
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTB_Box_Group_C::PcNpc_Bg_Set_func(bool condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Box_Group.TB_Box_Group_C.PcNpc_Bg_Set_func");
		
		UTB_Box_Group_C_PcNpc_Bg_Set_func_Params params {};
		params.condition = condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Box_Group.TB_Box_Group_C.GetTxtBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirTextBlock*                               TextBlock                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTB_Box_Group_C::GetTxtBlock(class UMirTextBlock** TextBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Box_Group.TB_Box_Group_C.GetTxtBlock");
		
		UTB_Box_Group_C_GetTxtBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextBlock != nullptr)
			*TextBlock = params.TextBlock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Box_Group.TB_Box_Group_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTB_Box_Group_C::SetName(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Box_Group.TB_Box_Group_C.SetName");
		
		UTB_Box_Group_C_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Box_Group.TB_Box_Group_C.ExecuteUbergraph_TB_Box_Group
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTB_Box_Group_C::ExecuteUbergraph_TB_Box_Group(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Box_Group.TB_Box_Group_C.ExecuteUbergraph_TB_Box_Group");
		
		UTB_Box_Group_C_ExecuteUbergraph_TB_Box_Group_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTB_Box_Group_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTB_Box_Group_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TB_Box_Group.TB_Box_Group_C");
		return ptr;
	}

}


