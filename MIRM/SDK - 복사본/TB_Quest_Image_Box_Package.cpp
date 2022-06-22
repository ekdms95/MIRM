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
	 * 		Name   -> Function TB_Quest_Image_Box.TB_Quest_Image_Box_C.PcNpc_Bg_Set_func
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTB_Quest_Image_Box_C::PcNpc_Bg_Set_func(bool condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Quest_Image_Box.TB_Quest_Image_Box_C.PcNpc_Bg_Set_func");
		
		UTB_Quest_Image_Box_C_PcNpc_Bg_Set_func_Params params {};
		params.condition = condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Quest_Image_Box.TB_Quest_Image_Box_C.GetTxtBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirTextBlock*                               TextBlock                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTB_Quest_Image_Box_C::GetTxtBlock(class UMirTextBlock** TextBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Quest_Image_Box.TB_Quest_Image_Box_C.GetTxtBlock");
		
		UTB_Quest_Image_Box_C_GetTxtBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextBlock != nullptr)
			*TextBlock = params.TextBlock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Quest_Image_Box.TB_Quest_Image_Box_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTB_Quest_Image_Box_C::SetName(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Quest_Image_Box.TB_Quest_Image_Box_C.SetName");
		
		UTB_Quest_Image_Box_C_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Quest_Image_Box.TB_Quest_Image_Box_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTB_Quest_Image_Box_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Quest_Image_Box.TB_Quest_Image_Box_C.PreConstruct");
		
		UTB_Quest_Image_Box_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TB_Quest_Image_Box.TB_Quest_Image_Box_C.ExecuteUbergraph_TB_Quest_Image_Box
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTB_Quest_Image_Box_C::ExecuteUbergraph_TB_Quest_Image_Box(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_Quest_Image_Box.TB_Quest_Image_Box_C.ExecuteUbergraph_TB_Quest_Image_Box");
		
		UTB_Quest_Image_Box_C_ExecuteUbergraph_TB_Quest_Image_Box_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTB_Quest_Image_Box_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTB_Quest_Image_Box_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TB_Quest_Image_Box.TB_Quest_Image_Box_C");
		return ptr;
	}

}


