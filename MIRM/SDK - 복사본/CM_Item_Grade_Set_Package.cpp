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
	 * 		Name   -> Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Reflection Grade Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_GRADE                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Item_Grade_Set_C::Reflection_Grade_Set(E_GRADE Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Reflection Grade Set");
		
		UCM_Item_Grade_Set_C_Reflection_Grade_Set_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Avatar_Grade_Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_GRADE                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Item_Grade_Set_C::Avatar_Grade_Set(E_GRADE Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Avatar_Grade_Set");
		
		UCM_Item_Grade_Set_C_Avatar_Grade_Set_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Stone_Set_Grade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_GRADE                                            Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Item_Grade_Set_C::Stone_Set_Grade(E_GRADE Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Stone_Set_Grade");
		
		UCM_Item_Grade_Set_C_Stone_Set_Grade_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Item_Set_Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_ITEM_MAINTYPE                                    Type_Switch                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_GRADE                                            Grade_Switch                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Item_Grade_Set_C::Item_Set_Type(int32_t ItemIndex, E_ITEM_MAINTYPE Type_Switch, E_GRADE Grade_Switch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Item_Set_Type");
		
		UCM_Item_Grade_Set_C_Item_Set_Type_Params params {};
		params.ItemIndex = ItemIndex;
		params.Type_Switch = Type_Switch;
		params.Grade_Switch = Grade_Switch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Item_Set_Grade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_GRADE                                            grade                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Item_Grade_Set_C::Item_Set_Grade(E_GRADE grade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Item_Set_Grade");
		
		UCM_Item_Grade_Set_C_Item_Set_Grade_Params params {};
		params.grade = grade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Grade_Front_Fx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     FrontFx_img                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               is_On                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Item_Grade_Set_C::Grade_Front_Fx(class UObject* FrontFx_img, bool is_On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Grade_Front_Fx");
		
		UCM_Item_Grade_Set_C_Grade_Front_Fx_Params params {};
		params.FrontFx_img = FrontFx_img;
		params.is_On = is_On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Grade_Rear_Fx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     RearFx_img                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               is_On                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Item_Grade_Set_C::Grade_Rear_Fx(class UObject* RearFx_img, bool is_On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Grade_Rear_Fx");
		
		UCM_Item_Grade_Set_C_Grade_Rear_Fx_Params params {};
		params.RearFx_img = RearFx_img;
		params.is_On = is_On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Grade_Bg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Item_Grade_Set_C::Grade_Bg(class UObject* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Grade_Bg");
		
		UCM_Item_Grade_Set_C_Grade_Bg_Params params {};
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Equip_Set_Grade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_GRADE                                            grade                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SetItemCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Item_Grade_Set_C::Equip_Set_Grade(E_GRADE grade, int32_t SetItemCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.Equip_Set_Grade");
		
		UCM_Item_Grade_Set_C_Equip_Set_Grade_Params params {};
		params.grade = grade;
		params.SetItemCount = SetItemCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.SetSummonStone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_SUMMONS_COLOR_TYPE                               Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Item_Grade_Set_C::SetSummonStone(int32_t Cost, E_SUMMONS_COLOR_TYPE Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.SetSummonStone");
		
		UCM_Item_Grade_Set_C_SetSummonStone_Params params {};
		params.Cost = Cost;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Item_Grade_Set_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.PreConstruct");
		
		UCM_Item_Grade_Set_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.ExecuteUbergraph_CM_Item_Grade_Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Item_Grade_Set_C::ExecuteUbergraph_CM_Item_Grade_Set(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Item_Grade_Set.CM_Item_Grade_Set_C.ExecuteUbergraph_CM_Item_Grade_Set");
		
		UCM_Item_Grade_Set_C_ExecuteUbergraph_CM_Item_Grade_Set_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Item_Grade_Set_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Item_Grade_Set_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Item_Grade_Set.CM_Item_Grade_Set_C");
		return ptr;
	}

}


