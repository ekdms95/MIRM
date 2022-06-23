/**
 * Name: MIRM
 * Version: 0623-2
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
	 * 		Name   -> Function CM_Equip_Icon.CM_Equip_Icon_C.OnReleasEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ITEM_MAINTYPE                                    MainType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Equip_Icon_C::OnReleasEvent(E_ITEM_MAINTYPE MainType, int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Equip_Icon.CM_Equip_Icon_C.OnReleasEvent");
		
		UCM_Equip_Icon_C_OnReleasEvent_Params params {};
		params.MainType = MainType;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Equip_Icon.CM_Equip_Icon_C.OnSelectEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ITEM_MAINTYPE                                    MainType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Equip_Icon_C::OnSelectEvent(E_ITEM_MAINTYPE MainType, int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Equip_Icon.CM_Equip_Icon_C.OnSelectEvent");
		
		UCM_Equip_Icon_C_OnSelectEvent_Params params {};
		params.MainType = MainType;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Equip_Icon.CM_Equip_Icon_C.OnEquipEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ITEM_MAINTYPE                                    MainType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Equip_Icon_C::OnEquipEvent(E_ITEM_MAINTYPE MainType, int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Equip_Icon.CM_Equip_Icon_C.OnEquipEvent");
		
		UCM_Equip_Icon_C_OnEquipEvent_Params params {};
		params.MainType = MainType;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Equip_Icon.CM_Equip_Icon_C.OnProtectedAni
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_INVENTORY_EQUIP_ANIM                             AnimType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Equip_Icon_C::OnProtectedAni(E_INVENTORY_EQUIP_ANIM AnimType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Equip_Icon.CM_Equip_Icon_C.OnProtectedAni");
		
		UCM_Equip_Icon_C_OnProtectedAni_Params params {};
		params.AnimType = AnimType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Equip_Icon.CM_Equip_Icon_C.BndEvt__MirButton_135_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Equip_Icon_C::BndEvt__MirButton_135_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Equip_Icon.CM_Equip_Icon_C.BndEvt__MirButton_135_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCM_Equip_Icon_C_BndEvt__MirButton_135_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Equip_Icon.CM_Equip_Icon_C.OnDurabilityValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              durability                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Equip_Icon_C::OnDurabilityValue(float durability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Equip_Icon.CM_Equip_Icon_C.OnDurabilityValue");
		
		UCM_Equip_Icon_C_OnDurabilityValue_Params params {};
		params.durability = durability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Equip_Icon.CM_Equip_Icon_C.OnSetItemEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SetItemCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Equip_Icon_C::OnSetItemEffect(bool isShow, int32_t SetItemCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Equip_Icon.CM_Equip_Icon_C.OnSetItemEffect");
		
		UCM_Equip_Icon_C_OnSetItemEffect_Params params {};
		params.isShow = isShow;
		params.SetItemCount = SetItemCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Equip_Icon.CM_Equip_Icon_C.OnSetIconEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_ITEM_MAINTYPE                                    ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_GRADE                                            grade                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int64_t                                            count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Equip_Icon_C::OnSetIconEvent(int32_t ItemIndex, E_ITEM_MAINTYPE ItemType, E_GRADE grade, int64_t count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Equip_Icon.CM_Equip_Icon_C.OnSetIconEvent");
		
		UCM_Equip_Icon_C_OnSetIconEvent_Params params {};
		params.ItemIndex = ItemIndex;
		params.ItemType = ItemType;
		params.grade = grade;
		params.count = count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Equip_Icon.CM_Equip_Icon_C.Equip_Ani_Finished
	 * 		Flags  -> ()
	 */
	void UCM_Equip_Icon_C::Equip_Ani_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Equip_Icon.CM_Equip_Icon_C.Equip_Ani_Finished");
		
		UCM_Equip_Icon_C_Equip_Ani_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Equip_Icon.CM_Equip_Icon_C.BndEvt__MirCheckBox_0_K2Node_ComponentBoundEvent_0_OnMirCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Equip_Icon_C::BndEvt__MirCheckBox_0_K2Node_ComponentBoundEvent_0_OnMirCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Equip_Icon.CM_Equip_Icon_C.BndEvt__MirCheckBox_0_K2Node_ComponentBoundEvent_0_OnMirCheckBoxComponentStateChanged__DelegateSignature");
		
		UCM_Equip_Icon_C_BndEvt__MirCheckBox_0_K2Node_ComponentBoundEvent_0_OnMirCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Equip_Icon.CM_Equip_Icon_C.OnSelectedItemType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ITEM_MAINTYPE                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Equip_Icon_C::OnSelectedItemType(E_ITEM_MAINTYPE Type, int32_t ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Equip_Icon.CM_Equip_Icon_C.OnSelectedItemType");
		
		UCM_Equip_Icon_C_OnSelectedItemType_Params params {};
		params.Type = Type;
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Equip_Icon.CM_Equip_Icon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Equip_Icon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Equip_Icon.CM_Equip_Icon_C.PreConstruct");
		
		UCM_Equip_Icon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Equip_Icon.CM_Equip_Icon_C.OnEquipItemType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ITEM_MAINTYPE                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Equip_Icon_C::OnEquipItemType(E_ITEM_MAINTYPE Type, int32_t ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Equip_Icon.CM_Equip_Icon_C.OnEquipItemType");
		
		UCM_Equip_Icon_C_OnEquipItemType_Params params {};
		params.Type = Type;
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Equip_Icon.CM_Equip_Icon_C.OnReleaseItemType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ITEM_MAINTYPE                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Equip_Icon_C::OnReleaseItemType(E_ITEM_MAINTYPE Type, int32_t ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Equip_Icon.CM_Equip_Icon_C.OnReleaseItemType");
		
		UCM_Equip_Icon_C_OnReleaseItemType_Params params {};
		params.Type = Type;
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Equip_Icon.CM_Equip_Icon_C.ExecuteUbergraph_CM_Equip_Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Equip_Icon_C::ExecuteUbergraph_CM_Equip_Icon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Equip_Icon.CM_Equip_Icon_C.ExecuteUbergraph_CM_Equip_Icon");
		
		UCM_Equip_Icon_C_ExecuteUbergraph_CM_Equip_Icon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Equip_Icon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Equip_Icon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Equip_Icon.CM_Equip_Icon_C");
		return ptr;
	}

}


