#pragma once

/**
 * Name: MIRM
 * Version: 0623
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URenderToTextureFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void Set_Canvas_Material_Scale_and_Position(const struct FVector2D& Size, const struct FVector2D& position, float Scale, class UObject* __WorldContext, struct FVector2D* Screen_Position, struct FVector2D* Screen_Size);
		void Array_to_HLSL_Int_Array(EIntTypes Type, class FString* Variable_Name, TArray<int32_t>* _int_, TArray<struct FVector2D>* int2, TArray<struct FVector>* int3, TArray<struct FLinearColor>* int4, class UObject* __WorldContext, class FString* String);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
