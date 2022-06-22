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
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.ActiveHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::ActiveHUD(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.ActiveHUD");
		
		ABP_ObjectTriggerQuestObjectControl_C_ActiveHUD_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnExit
	 * 		Flags  -> ()
	 */
	bool ABP_ObjectTriggerQuestObjectControl_C::OnExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnExit");
		
		ABP_ObjectTriggerQuestObjectControl_C_OnExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnCheck
	 * 		Flags  -> ()
	 */
	bool ABP_ObjectTriggerQuestObjectControl_C::OnCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnCheck");
		
		ABP_ObjectTriggerQuestObjectControl_C_OnCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetObjectCollision
	 * 		Flags  -> ()
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::SetObjectCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetObjectCollision");
		
		ABP_ObjectTriggerQuestObjectControl_C_SetObjectCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.IsAlwaysPlacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAlwaysPlacement                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::IsAlwaysPlacement(bool* bAlwaysPlacement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.IsAlwaysPlacement");
		
		ABP_ObjectTriggerQuestObjectControl_C_IsAlwaysPlacement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAlwaysPlacement != nullptr)
			*bAlwaysPlacement = params.bAlwaysPlacement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetObjectData
	 * 		Flags  -> ()
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::SetObjectData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetObjectData");
		
		ABP_ObjectTriggerQuestObjectControl_C_SetObjectData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.UserConstructionScript");
		
		ABP_ObjectTriggerQuestObjectControl_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.ReceiveBeginPlay");
		
		ABP_ObjectTriggerQuestObjectControl_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.ActiveGizmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::ActiveGizmo(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.ActiveGizmo");
		
		ABP_ObjectTriggerQuestObjectControl_C_ActiveGizmo_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnSetActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::OnSetActor(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnSetActor");
		
		ABP_ObjectTriggerQuestObjectControl_C_OnSetActor_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetActive_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::SetActive_Blueprint(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetActive_Blueprint");
		
		ABP_ObjectTriggerQuestObjectControl_C_SetActive_Blueprint_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnSetEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::OnSetEffect(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnSetEffect");
		
		ABP_ObjectTriggerQuestObjectControl_C_OnSetEffect_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetNameTagText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::SetNameTagText(const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetNameTagText");
		
		ABP_ObjectTriggerQuestObjectControl_C_SetNameTagText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetNameTagIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      IconName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::SetNameTagIcon(const class FString& IconName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetNameTagIcon");
		
		ABP_ObjectTriggerQuestObjectControl_C_SetNameTagIcon_Params params {};
		params.IconName = IconName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetNameTagAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMirQuestProgressHUDAnimationType                  AnimationType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::SetNameTagAnimation(EMirQuestProgressHUDAnimationType AnimationType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetNameTagAnimation");
		
		ABP_ObjectTriggerQuestObjectControl_C_SetNameTagAnimation_Params params {};
		params.AnimationType = AnimationType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.ButtonClickEvent
	 * 		Flags  -> ()
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::ButtonClickEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.ButtonClickEvent");
		
		ABP_ObjectTriggerQuestObjectControl_C_ButtonClickEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnStartProgress
	 * 		Flags  -> ()
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::OnStartProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnStartProgress");
		
		ABP_ObjectTriggerQuestObjectControl_C_OnStartProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnCompleteProgress
	 * 		Flags  -> ()
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::OnCompleteProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnCompleteProgress");
		
		ABP_ObjectTriggerQuestObjectControl_C_OnCompleteProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnStopProgress
	 * 		Flags  -> ()
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::OnStopProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnStopProgress");
		
		ABP_ObjectTriggerQuestObjectControl_C_OnStopProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.ExecuteUbergraph_BP_ObjectTriggerQuestObjectControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ObjectTriggerQuestObjectControl_C::ExecuteUbergraph_BP_ObjectTriggerQuestObjectControl(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.ExecuteUbergraph_BP_ObjectTriggerQuestObjectControl");
		
		ABP_ObjectTriggerQuestObjectControl_C_ExecuteUbergraph_BP_ObjectTriggerQuestObjectControl_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ObjectTriggerQuestObjectControl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ObjectTriggerQuestObjectControl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C");
		return ptr;
	}

}


