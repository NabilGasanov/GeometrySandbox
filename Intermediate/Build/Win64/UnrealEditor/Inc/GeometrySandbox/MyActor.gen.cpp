// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandbox/Public/MyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}
// Cross Module References
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AMyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GeometrySandbox();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMyActor::StaticRegisterNativesAMyActor()
	{
	}
	UClass* Z_Construct_UClass_AMyActor_NoRegister()
	{
		return AMyActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequincy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequincy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponsNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponsNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KillsNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KillsNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[];
#endif
		static void NewProp_IsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasWeapon_MetaData[];
#endif
		static void NewProp_HasWeapon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "MyActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, Amplitude), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_Frequincy_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_Frequincy = { "Frequincy", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, Frequincy), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_Frequincy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_Frequincy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_WeaponsNum_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_WeaponsNum = { "WeaponsNum", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, WeaponsNum), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_WeaponsNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_WeaponsNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_KillsNum_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_KillsNum = { "KillsNum", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, KillsNum), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_KillsNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_KillsNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor, Health), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_IsDead_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	void Z_Construct_UClass_AMyActor_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((AMyActor*)Obj)->IsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_IsDead = { "IsDead", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyActor), &Z_Construct_UClass_AMyActor_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_IsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_IsDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_HasWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	void Z_Construct_UClass_AMyActor_Statics::NewProp_HasWeapon_SetBit(void* Obj)
	{
		((AMyActor*)Obj)->HasWeapon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_HasWeapon = { "HasWeapon", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyActor), &Z_Construct_UClass_AMyActor_Statics::NewProp_HasWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_HasWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_HasWeapon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_BaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_Frequincy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_WeaponsNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_KillsNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_IsDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_HasWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
		&AMyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActor, 895799650);
	template<> GEOMETRYSANDBOX_API UClass* StaticClass<AMyActor>()
	{
		return AMyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActor(Z_Construct_UClass_AMyActor, &AMyActor::StaticClass, TEXT("/Script/GeometrySandbox"), TEXT("AMyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
