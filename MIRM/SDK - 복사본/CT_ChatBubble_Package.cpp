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
	 * 		Name   -> Function CT_ChatBubble.CT_ChatBubble_C.CheckMessageLen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UCT_ChatBubble_C::CheckMessageLen(const class FText& InText, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CT_ChatBubble.CT_ChatBubble_C.CheckMessageLen");
		
		UCT_ChatBubble_C_CheckMessageLen_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CT_ChatBubble.CT_ChatBubble_C.SetMessageBubble
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        inMessage                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               CutoffLongMessage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              newMaxOnTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCT_ChatBubble_C::SetMessageBubble(const class FText& inMessage, bool CutoffLongMessage, float newMaxOnTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CT_ChatBubble.CT_ChatBubble_C.SetMessageBubble");
		
		UCT_ChatBubble_C_SetMessageBubble_Params params {};
		params.inMessage = inMessage;
		params.CutoffLongMessage = CutoffLongMessage;
		params.newMaxOnTime = newMaxOnTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CT_ChatBubble.CT_ChatBubble_C.Construct
	 * 		Flags  -> ()
	 */
	void UCT_ChatBubble_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CT_ChatBubble.CT_ChatBubble_C.Construct");
		
		UCT_ChatBubble_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CT_ChatBubble.CT_ChatBubble_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCT_ChatBubble_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CT_ChatBubble.CT_ChatBubble_C.Tick");
		
		UCT_ChatBubble_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CT_ChatBubble.CT_ChatBubble_C.ExecuteUbergraph_CT_ChatBubble
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCT_ChatBubble_C::ExecuteUbergraph_CT_ChatBubble(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CT_ChatBubble.CT_ChatBubble_C.ExecuteUbergraph_CT_ChatBubble");
		
		UCT_ChatBubble_C_ExecuteUbergraph_CT_ChatBubble_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCT_ChatBubble_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCT_ChatBubble_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CT_ChatBubble.CT_ChatBubble_C");
		return ptr;
	}

}


