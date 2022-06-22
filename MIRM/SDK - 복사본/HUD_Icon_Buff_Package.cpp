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
	 * 		Name   -> Function HUD_Icon_Buff.HUD_Icon_Buff_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Icon_Buff_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Icon_Buff.HUD_Icon_Buff_C.PreConstruct");
		
		UHUD_Icon_Buff_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Icon_Buff.HUD_Icon_Buff_C.OnDisableBuffIcon
	 * 		Flags  -> ()
	 */
	void UHUD_Icon_Buff_C::OnDisableBuffIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Icon_Buff.HUD_Icon_Buff_C.OnDisableBuffIcon");
		
		UHUD_Icon_Buff_C_OnDisableBuffIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Icon_Buff.HUD_Icon_Buff_C.RemoveBuffIcon
	 * 		Flags  -> ()
	 */
	void UHUD_Icon_Buff_C::RemoveBuffIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Icon_Buff.HUD_Icon_Buff_C.RemoveBuffIcon");
		
		UHUD_Icon_Buff_C_RemoveBuffIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Icon_Buff.HUD_Icon_Buff_C.OnCreatedBuffIcon
	 * 		Flags  -> ()
	 */
	void UHUD_Icon_Buff_C::OnCreatedBuffIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Icon_Buff.HUD_Icon_Buff_C.OnCreatedBuffIcon");
		
		UHUD_Icon_Buff_C_OnCreatedBuffIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Icon_Buff.HUD_Icon_Buff_C.OnSetBuffIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Remaintime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrRemaintime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Icon_Buff_C::OnSetBuffIcon(float Remaintime, float CurrRemaintime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Icon_Buff.HUD_Icon_Buff_C.OnSetBuffIcon");
		
		UHUD_Icon_Buff_C_OnSetBuffIcon_Params params {};
		params.Remaintime = Remaintime;
		params.CurrRemaintime = CurrRemaintime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Icon_Buff.HUD_Icon_Buff_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Icon_Buff_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Icon_Buff.HUD_Icon_Buff_C.Tick");
		
		UHUD_Icon_Buff_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Icon_Buff.HUD_Icon_Buff_C.ExecuteUbergraph_HUD_Icon_Buff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Icon_Buff_C::ExecuteUbergraph_HUD_Icon_Buff(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Icon_Buff.HUD_Icon_Buff_C.ExecuteUbergraph_HUD_Icon_Buff");
		
		UHUD_Icon_Buff_C_ExecuteUbergraph_HUD_Icon_Buff_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Icon_Buff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Icon_Buff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Icon_Buff.HUD_Icon_Buff_C");
		return ptr;
	}

}


