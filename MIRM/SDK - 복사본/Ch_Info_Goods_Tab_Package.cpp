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
	 * 		Name   -> Function Ch_Info_Goods_Tab.Ch_Info_Goods_Tab_C.Construct
	 * 		Flags  -> ()
	 */
	void UCh_Info_Goods_Tab_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ch_Info_Goods_Tab.Ch_Info_Goods_Tab_C.Construct");
		
		UCh_Info_Goods_Tab_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ch_Info_Goods_Tab.Ch_Info_Goods_Tab_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UCh_Info_Goods_Tab_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ch_Info_Goods_Tab.Ch_Info_Goods_Tab_C.OnPreSet");
		
		UCh_Info_Goods_Tab_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ch_Info_Goods_Tab.Ch_Info_Goods_Tab_C.ExecuteUbergraph_Ch_Info_Goods_Tab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCh_Info_Goods_Tab_C::ExecuteUbergraph_Ch_Info_Goods_Tab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ch_Info_Goods_Tab.Ch_Info_Goods_Tab_C.ExecuteUbergraph_Ch_Info_Goods_Tab");
		
		UCh_Info_Goods_Tab_C_ExecuteUbergraph_Ch_Info_Goods_Tab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCh_Info_Goods_Tab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCh_Info_Goods_Tab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Ch_Info_Goods_Tab.Ch_Info_Goods_Tab_C");
		return ptr;
	}

}


