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
	 * 		Name   -> Function MirStoryDungeonHudWindow_BP.MirStoryDungeonHudWindow_BP_C.OnSetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AMirStoryDungeonHudWindow_BP_C::OnSetActive(bool IsActive, const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirStoryDungeonHudWindow_BP.MirStoryDungeonHudWindow_BP_C.OnSetActive");
		
		AMirStoryDungeonHudWindow_BP_C_OnSetActive_Params params {};
		params.IsActive = IsActive;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirStoryDungeonHudWindow_BP.MirStoryDungeonHudWindow_BP_C.OnCharacterZoomState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isZoom                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMirStoryDungeonHudWindow_BP_C::OnCharacterZoomState(bool isZoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirStoryDungeonHudWindow_BP.MirStoryDungeonHudWindow_BP_C.OnCharacterZoomState");
		
		AMirStoryDungeonHudWindow_BP_C_OnCharacterZoomState_Params params {};
		params.isZoom = isZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirStoryDungeonHudWindow_BP.MirStoryDungeonHudWindow_BP_C.OnShowKeyMappingGuidePage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               updateBindingText                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMirStoryDungeonHudWindow_BP_C::OnShowKeyMappingGuidePage(bool isShow, bool updateBindingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirStoryDungeonHudWindow_BP.MirStoryDungeonHudWindow_BP_C.OnShowKeyMappingGuidePage");
		
		AMirStoryDungeonHudWindow_BP_C_OnShowKeyMappingGuidePage_Params params {};
		params.isShow = isShow;
		params.updateBindingText = updateBindingText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirStoryDungeonHudWindow_BP.MirStoryDungeonHudWindow_BP_C.ExecuteUbergraph_MirStoryDungeonHudWindow_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMirStoryDungeonHudWindow_BP_C::ExecuteUbergraph_MirStoryDungeonHudWindow_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirStoryDungeonHudWindow_BP.MirStoryDungeonHudWindow_BP_C.ExecuteUbergraph_MirStoryDungeonHudWindow_BP");
		
		AMirStoryDungeonHudWindow_BP_C_ExecuteUbergraph_MirStoryDungeonHudWindow_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AMirStoryDungeonHudWindow_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMirStoryDungeonHudWindow_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MirStoryDungeonHudWindow_BP.MirStoryDungeonHudWindow_BP_C");
		return ptr;
	}

}


