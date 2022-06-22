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
	 * 		Name   -> Function UIParticleSystem.ParticleSystemWidget.SetReactivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActivateAndReset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UParticleSystemWidget::SetReactivate(bool bActivateAndReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIParticleSystem.ParticleSystemWidget.SetReactivate");
		
		UParticleSystemWidget_SetReactivate_Params params {};
		params.bActivateAndReset = bActivateAndReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIParticleSystem.ParticleSystemWidget.ActivateParticles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UParticleSystemWidget::ActivateParticles(bool bActive, bool bReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIParticleSystem.ParticleSystemWidget.ActivateParticles");
		
		UParticleSystemWidget_ActivateParticles_Params params {};
		params.bActive = bActive;
		params.bReset = bReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UParticleSystemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleSystemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UIParticleSystem.ParticleSystemWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUIParticleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIParticleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UIParticleSystem.UIParticleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AUIParticleActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUIParticleActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UIParticleSystem.UIParticleActor");
		return ptr;
	}

}


