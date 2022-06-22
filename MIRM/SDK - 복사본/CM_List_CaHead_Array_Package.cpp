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
	 * 		Name   -> Function CM_List_CaHead_Array.CM_List_CaHead_Array_C.GetHeadTextBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Idx                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMirTextBlock*                               TextBlock                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_List_CaHead_Array_C::GetHeadTextBlock(int32_t Idx, class UMirTextBlock** TextBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_List_CaHead_Array.CM_List_CaHead_Array_C.GetHeadTextBlock");
		
		UCM_List_CaHead_Array_C_GetHeadTextBlock_Params params {};
		params.Idx = Idx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextBlock != nullptr)
			*TextBlock = params.TextBlock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_List_CaHead_Array.CM_List_CaHead_Array_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_List_CaHead_Array_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_List_CaHead_Array.CM_List_CaHead_Array_C.PreConstruct");
		
		UCM_List_CaHead_Array_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_List_CaHead_Array.CM_List_CaHead_Array_C.Construct
	 * 		Flags  -> ()
	 */
	void UCM_List_CaHead_Array_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_List_CaHead_Array.CM_List_CaHead_Array_C.Construct");
		
		UCM_List_CaHead_Array_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_List_CaHead_Array.CM_List_CaHead_Array_C.ExecuteUbergraph_CM_List_CaHead_Array
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_List_CaHead_Array_C::ExecuteUbergraph_CM_List_CaHead_Array(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_List_CaHead_Array.CM_List_CaHead_Array_C.ExecuteUbergraph_CM_List_CaHead_Array");
		
		UCM_List_CaHead_Array_C_ExecuteUbergraph_CM_List_CaHead_Array_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_List_CaHead_Array_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_List_CaHead_Array_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_List_CaHead_Array.CM_List_CaHead_Array_C");
		return ptr;
	}

}


