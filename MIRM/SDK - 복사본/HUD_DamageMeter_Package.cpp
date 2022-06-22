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
	 * 		Name   -> Function HUD_DamageMeter.HUD_DamageMeter_C.GetDamageMeterElem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UHUD_DamageMeter_Element_C*                  UserElem                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DamageMeter_C::GetDamageMeterElem(int32_t Value, class UHUD_DamageMeter_Element_C** UserElem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageMeter.HUD_DamageMeter_C.GetDamageMeterElem");
		
		UHUD_DamageMeter_C_GetDamageMeterElem_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UserElem != nullptr)
			*UserElem = params.UserElem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageMeter.HUD_DamageMeter_C.MeterElemnetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DamageMeter_C::MeterElemnetVisible(int32_t Num, ESlateVisibility visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageMeter.HUD_DamageMeter_C.MeterElemnetVisible");
		
		UHUD_DamageMeter_C_MeterElemnetVisible_Params params {};
		params.Num = Num;
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageMeter.HUD_DamageMeter_C.MetergyCalc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CharName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              deal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_METERGY_USER_TYPE                                usertype                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DamageMeter_C::MetergyCalc(const class FString& CharName, float deal, E_METERGY_USER_TYPE usertype)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageMeter.HUD_DamageMeter_C.MetergyCalc");
		
		UHUD_DamageMeter_C_MetergyCalc_Params params {};
		params.CharName = CharName;
		params.deal = deal;
		params.usertype = usertype;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageMeter.HUD_DamageMeter_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_DamageMeter_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageMeter.HUD_DamageMeter_C.Construct");
		
		UHUD_DamageMeter_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageMeter.HUD_DamageMeter_C.ExecuteUbergraph_HUD_DamageMeter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DamageMeter_C::ExecuteUbergraph_HUD_DamageMeter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageMeter.HUD_DamageMeter_C.ExecuteUbergraph_HUD_DamageMeter");
		
		UHUD_DamageMeter_C_ExecuteUbergraph_HUD_DamageMeter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_DamageMeter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_DamageMeter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_DamageMeter.HUD_DamageMeter_C");
		return ptr;
	}

}


