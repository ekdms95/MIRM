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
	 * 		Name   -> Function CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C.OnReg
	 * 		Flags  -> ()
	 */
	void UCM_Horizon_Goods_Value_Set_C::OnReg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C.OnReg");
		
		UCM_Horizon_Goods_Value_Set_C_OnReg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C.GetValueTextBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirTextBlock*                               NewParam                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Horizon_Goods_Value_Set_C::GetValueTextBlock(class UMirTextBlock** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C.GetValueTextBlock");
		
		UCM_Horizon_Goods_Value_Set_C_GetValueTextBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Horizon_Goods_Value_Set_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C.PreConstruct");
		
		UCM_Horizon_Goods_Value_Set_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C.Reg
	 * 		Flags  -> ()
	 */
	void UCM_Horizon_Goods_Value_Set_C::Reg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C.Reg");
		
		UCM_Horizon_Goods_Value_Set_C_Reg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C.ExecuteUbergraph_CM_Horizon_Goods_Value_Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Horizon_Goods_Value_Set_C::ExecuteUbergraph_CM_Horizon_Goods_Value_Set(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C.ExecuteUbergraph_CM_Horizon_Goods_Value_Set");
		
		UCM_Horizon_Goods_Value_Set_C_ExecuteUbergraph_CM_Horizon_Goods_Value_Set_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Horizon_Goods_Value_Set_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Horizon_Goods_Value_Set_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C");
		return ptr;
	}

}


