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
	 * 		Name   -> Function CM_ShortKey.CM_ShortKey_C.ShortKey_Return
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirTextBlock*                               CM_ShortKey_txt                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_ShortKey_C::ShortKey_Return(class UMirTextBlock** CM_ShortKey_txt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_ShortKey.CM_ShortKey_C.ShortKey_Return");
		
		UCM_ShortKey_C_ShortKey_Return_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CM_ShortKey_txt != nullptr)
			*CM_ShortKey_txt = params.CM_ShortKey_txt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_ShortKey_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_ShortKey_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_ShortKey.CM_ShortKey_C");
		return ptr;
	}

}


