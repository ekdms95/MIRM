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
	 * 		Name   -> Function TB_QuestName.TB_QuestName_C.GetTextBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirTextBlock*                               TextBlock                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTB_QuestName_C::GetTextBlock(class UMirTextBlock** TextBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TB_QuestName.TB_QuestName_C.GetTextBlock");
		
		UTB_QuestName_C_GetTextBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextBlock != nullptr)
			*TextBlock = params.TextBlock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTB_QuestName_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTB_QuestName_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TB_QuestName.TB_QuestName_C");
		return ptr;
	}

}


