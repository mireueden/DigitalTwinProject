// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTProject/Actor/InteractiveActorInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractiveActorInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DTPROJECT_API UClass* Z_Construct_UClass_UInteractiveActorInterface();
DTPROJECT_API UClass* Z_Construct_UClass_UInteractiveActorInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_DTProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UInteractiveActorInterface Function BeginFocus ***********************
void IInteractiveActorInterface::BeginFocus()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BeginFocus instead.");
}
static FName NAME_UInteractiveActorInterface_BeginFocus = FName(TEXT("BeginFocus"));
void IInteractiveActorInterface::Execute_BeginFocus(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorInterface_BeginFocus);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInteractiveActorInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorInterface::StaticClass())))
	{
		I->BeginFocus_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractiveActorInterface_BeginFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/InteractiveActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorInterface_BeginFocus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveActorInterface, nullptr, "BeginFocus", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorInterface_BeginFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorInterface_BeginFocus_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInteractiveActorInterface_BeginFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorInterface_BeginFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorInterface::execBeginFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginFocus_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UInteractiveActorInterface Function BeginFocus *************************

// ********** Begin Interface UInteractiveActorInterface Function EndFocus *************************
void IInteractiveActorInterface::EndFocus()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EndFocus instead.");
}
static FName NAME_UInteractiveActorInterface_EndFocus = FName(TEXT("EndFocus"));
void IInteractiveActorInterface::Execute_EndFocus(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorInterface_EndFocus);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInteractiveActorInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorInterface::StaticClass())))
	{
		I->EndFocus_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractiveActorInterface_EndFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/InteractiveActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorInterface_EndFocus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveActorInterface, nullptr, "EndFocus", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorInterface_EndFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorInterface_EndFocus_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInteractiveActorInterface_EndFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorInterface_EndFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorInterface::execEndFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndFocus_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UInteractiveActorInterface Function EndFocus ***************************

// ********** Begin Interface UInteractiveActorInterface Function TurnOff **************************
void IInteractiveActorInterface::TurnOff()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TurnOff instead.");
}
static FName NAME_UInteractiveActorInterface_TurnOff = FName(TEXT("TurnOff"));
void IInteractiveActorInterface::Execute_TurnOff(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorInterface_TurnOff);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInteractiveActorInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorInterface::StaticClass())))
	{
		I->TurnOff_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractiveActorInterface_TurnOff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/InteractiveActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorInterface_TurnOff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveActorInterface, nullptr, "TurnOff", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorInterface_TurnOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorInterface_TurnOff_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInteractiveActorInterface_TurnOff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorInterface_TurnOff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorInterface::execTurnOff)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TurnOff_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UInteractiveActorInterface Function TurnOff ****************************

// ********** Begin Interface UInteractiveActorInterface Function TurnOn ***************************
void IInteractiveActorInterface::TurnOn()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TurnOn instead.");
}
static FName NAME_UInteractiveActorInterface_TurnOn = FName(TEXT("TurnOn"));
void IInteractiveActorInterface::Execute_TurnOn(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractiveActorInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInteractiveActorInterface_TurnOn);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInteractiveActorInterface*)(O->GetNativeInterfaceAddress(UInteractiveActorInterface::StaticClass())))
	{
		I->TurnOn_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractiveActorInterface_TurnOn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/InteractiveActorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveActorInterface_TurnOn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveActorInterface, nullptr, "TurnOn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveActorInterface_TurnOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveActorInterface_TurnOn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInteractiveActorInterface_TurnOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveActorInterface_TurnOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractiveActorInterface::execTurnOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TurnOn_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UInteractiveActorInterface Function TurnOn *****************************

// ********** Begin Interface UInteractiveActorInterface *******************************************
void UInteractiveActorInterface::StaticRegisterNativesUInteractiveActorInterface()
{
	UClass* Class = UInteractiveActorInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginFocus", &IInteractiveActorInterface::execBeginFocus },
		{ "EndFocus", &IInteractiveActorInterface::execEndFocus },
		{ "TurnOff", &IInteractiveActorInterface::execTurnOff },
		{ "TurnOn", &IInteractiveActorInterface::execTurnOn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractiveActorInterface;
UClass* UInteractiveActorInterface::GetPrivateStaticClass()
{
	using TClass = UInteractiveActorInterface;
	if (!Z_Registration_Info_UClass_UInteractiveActorInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractiveActorInterface"),
			Z_Registration_Info_UClass_UInteractiveActorInterface.InnerSingleton,
			StaticRegisterNativesUInteractiveActorInterface,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UInteractiveActorInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UInteractiveActorInterface_NoRegister()
{
	return UInteractiveActorInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInteractiveActorInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Actor/InteractiveActorInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractiveActorInterface_BeginFocus, "BeginFocus" }, // 1862030563
		{ &Z_Construct_UFunction_UInteractiveActorInterface_EndFocus, "EndFocus" }, // 4083359023
		{ &Z_Construct_UFunction_UInteractiveActorInterface_TurnOff, "TurnOff" }, // 3998221025
		{ &Z_Construct_UFunction_UInteractiveActorInterface_TurnOn, "TurnOn" }, // 3538892010
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractiveActorInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractiveActorInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DTProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveActorInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveActorInterface_Statics::ClassParams = {
	&UInteractiveActorInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveActorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveActorInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveActorInterface()
{
	if (!Z_Registration_Info_UClass_UInteractiveActorInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveActorInterface.OuterSingleton, Z_Construct_UClass_UInteractiveActorInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveActorInterface.OuterSingleton;
}
UInteractiveActorInterface::UInteractiveActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveActorInterface);
// ********** End Interface UInteractiveActorInterface *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h__Script_DTProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveActorInterface, UInteractiveActorInterface::StaticClass, TEXT("UInteractiveActorInterface"), &Z_Registration_Info_UClass_UInteractiveActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveActorInterface), 2652353700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h__Script_DTProject_3668713772(TEXT("/Script/DTProject"),
	Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h__Script_DTProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h__Script_DTProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
