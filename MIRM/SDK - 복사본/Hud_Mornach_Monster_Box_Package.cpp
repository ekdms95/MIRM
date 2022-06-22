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
	 * 		Name   -> Function Hud_Mornach_Monster_Box.Hud_Mornach_Monster_Box_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Mornach_Monster_Box_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mornach_Monster_Box.Hud_Mornach_Monster_Box_C.PreConstruct");
		
		UHud_Mornach_Monster_Box_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mornach_Monster_Box.Hud_Mornach_Monster_Box_C.Construct
	 * 		Flags  -> ()
	 */
	void UHud_Mornach_Monster_Box_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mornach_Monster_Box.Hud_Mornach_Monster_Box_C.Construct");
		
		UHud_Mornach_Monster_Box_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mornach_Monster_Box.Hud_Mornach_Monster_Box_C.OnInitailizeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHud_Mornach_Monster_Box_C::OnInitailizeWidget(const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mornach_Monster_Box.Hud_Mornach_Monster_Box_C.OnInitailizeWidget");
		
		UHud_Mornach_Monster_Box_C_OnInitailizeWidget_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mornach_Monster_Box.Hud_Mornach_Monster_Box_C.ExecuteUbergraph_Hud_Mornach_Monster_Box
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Mornach_Monster_Box_C::ExecuteUbergraph_Hud_Mornach_Monster_Box(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mornach_Monster_Box.Hud_Mornach_Monster_Box_C.ExecuteUbergraph_Hud_Mornach_Monster_Box");
		
		UHud_Mornach_Monster_Box_C_ExecuteUbergraph_Hud_Mornach_Monster_Box_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mornach_Monster_Box.Hud_Mornach_Monster_Box_C.ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Mornach_Monster_Box_C::ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mornach_Monster_Box.Hud_Mornach_Monster_Box_C.ClickDispatcher__DelegateSignature");
		
		UHud_Mornach_Monster_Box_C_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_Mornach_Monster_Box_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_Mornach_Monster_Box_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_Mornach_Monster_Box.Hud_Mornach_Monster_Box_C");
		return ptr;
	}

}


