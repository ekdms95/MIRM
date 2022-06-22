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
	 * 		Name   -> Function CM_Guild_Mark_Name_Tag.CM_Guild_Mark_Name_Tag_C.GuildName_Txt_Return
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirTextBlock*                               CM_Guild_Name_txt                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Guild_Mark_Name_Tag_C::GuildName_Txt_Return(class UMirTextBlock** CM_Guild_Name_txt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Guild_Mark_Name_Tag.CM_Guild_Mark_Name_Tag_C.GuildName_Txt_Return");
		
		UCM_Guild_Mark_Name_Tag_C_GuildName_Txt_Return_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CM_Guild_Name_txt != nullptr)
			*CM_Guild_Name_txt = params.CM_Guild_Name_txt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Guild_Mark_Name_Tag.CM_Guild_Mark_Name_Tag_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Guild_Mark_Name_Tag_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Guild_Mark_Name_Tag.CM_Guild_Mark_Name_Tag_C.PreConstruct");
		
		UCM_Guild_Mark_Name_Tag_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Guild_Mark_Name_Tag.CM_Guild_Mark_Name_Tag_C.ExecuteUbergraph_CM_Guild_Mark_Name_Tag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Guild_Mark_Name_Tag_C::ExecuteUbergraph_CM_Guild_Mark_Name_Tag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Guild_Mark_Name_Tag.CM_Guild_Mark_Name_Tag_C.ExecuteUbergraph_CM_Guild_Mark_Name_Tag");
		
		UCM_Guild_Mark_Name_Tag_C_ExecuteUbergraph_CM_Guild_Mark_Name_Tag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Guild_Mark_Name_Tag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Guild_Mark_Name_Tag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Guild_Mark_Name_Tag.CM_Guild_Mark_Name_Tag_C");
		return ptr;
	}

}


