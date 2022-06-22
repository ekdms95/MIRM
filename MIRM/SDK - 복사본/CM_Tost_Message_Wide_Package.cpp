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
	 * 		Name   -> Function CM_Tost_Message_Wide.CM_Tost_Message_Wide_C.Set Toast Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSub                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      FirstText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SecondText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SubText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCM_Tost_Message_Wide_C::Set_Toast_Text(bool IsSub, const class FString& FirstText, const class FString& SecondText, const class FString& SubText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tost_Message_Wide.CM_Tost_Message_Wide_C.Set Toast Text");
		
		UCM_Tost_Message_Wide_C_Set_Toast_Text_Params params {};
		params.IsSub = IsSub;
		params.FirstText = FirstText;
		params.SecondText = SecondText;
		params.SubText = SubText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tost_Message_Wide.CM_Tost_Message_Wide_C.Construct
	 * 		Flags  -> ()
	 */
	void UCM_Tost_Message_Wide_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tost_Message_Wide.CM_Tost_Message_Wide_C.Construct");
		
		UCM_Tost_Message_Wide_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tost_Message_Wide.CM_Tost_Message_Wide_C.ExecuteUbergraph_CM_Tost_Message_Wide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Tost_Message_Wide_C::ExecuteUbergraph_CM_Tost_Message_Wide(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tost_Message_Wide.CM_Tost_Message_Wide_C.ExecuteUbergraph_CM_Tost_Message_Wide");
		
		UCM_Tost_Message_Wide_C_ExecuteUbergraph_CM_Tost_Message_Wide_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Tost_Message_Wide_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Tost_Message_Wide_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Tost_Message_Wide.CM_Tost_Message_Wide_C");
		return ptr;
	}

}


