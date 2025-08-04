// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTProject/Actor/InteractiveComponentBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractiveComponentBase() {}

// ********** Begin Cross Module References ********************************************************
DTPROJECT_API UClass* Z_Construct_UClass_UInteractiveComponentBase();
DTPROJECT_API UClass* Z_Construct_UClass_UInteractiveComponentBase_NoRegister();
DTPROJECT_API UEnum* Z_Construct_UEnum_DTProject_EObjectEnum();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DTProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInteractiveComponentBase Function BeginFocus ****************************
static FName NAME_UInteractiveComponentBase_BeginFocus = FName(TEXT("BeginFocus"));
void UInteractiveComponentBase::BeginFocus()
{
	UFunction* Func = FindFunctionChecked(NAME_UInteractiveComponentBase_BeginFocus);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		BeginFocus_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractiveComponentBase_BeginFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveComponentBase_BeginFocus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveComponentBase, nullptr, "BeginFocus", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_BeginFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveComponentBase_BeginFocus_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInteractiveComponentBase_BeginFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveComponentBase_BeginFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractiveComponentBase::execBeginFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginFocus_Implementation();
	P_NATIVE_END;
}
// ********** End Class UInteractiveComponentBase Function BeginFocus ******************************

// ********** Begin Class UInteractiveComponentBase Function EndFocus ******************************
static FName NAME_UInteractiveComponentBase_EndFocus = FName(TEXT("EndFocus"));
void UInteractiveComponentBase::EndFocus()
{
	UFunction* Func = FindFunctionChecked(NAME_UInteractiveComponentBase_EndFocus);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		EndFocus_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractiveComponentBase_EndFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveComponentBase_EndFocus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveComponentBase, nullptr, "EndFocus", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_EndFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveComponentBase_EndFocus_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInteractiveComponentBase_EndFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveComponentBase_EndFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractiveComponentBase::execEndFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndFocus_Implementation();
	P_NATIVE_END;
}
// ********** End Class UInteractiveComponentBase Function EndFocus ********************************

// ********** Begin Class UInteractiveComponentBase Function GetComponentInfo **********************
struct InteractiveComponentBase_eventGetComponentInfo_Parms
{
	FString ReturnValue;
};
static FName NAME_UInteractiveComponentBase_GetComponentInfo = FName(TEXT("GetComponentInfo"));
FString UInteractiveComponentBase::GetComponentInfo()
{
	UFunction* Func = FindFunctionChecked(NAME_UInteractiveComponentBase_GetComponentInfo);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InteractiveComponentBase_eventGetComponentInfo_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetComponentInfo_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveComponentBase_eventGetComponentInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveComponentBase, nullptr, "GetComponentInfo", Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::PropPointers), sizeof(InteractiveComponentBase_eventGetComponentInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InteractiveComponentBase_eventGetComponentInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractiveComponentBase::execGetComponentInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetComponentInfo_Implementation();
	P_NATIVE_END;
}
// ********** End Class UInteractiveComponentBase Function GetComponentInfo ************************

// ********** Begin Class UInteractiveComponentBase Function GetObjectType *************************
struct Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType_Statics
{
	struct InteractiveComponentBase_eventGetObjectType_Parms
	{
		EObjectEnum ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveComponentBase_eventGetObjectType_Parms, ReturnValue), Z_Construct_UEnum_DTProject_EObjectEnum, METADATA_PARAMS(0, nullptr) }; // 1590035634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveComponentBase, nullptr, "GetObjectType", Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType_Statics::InteractiveComponentBase_eventGetObjectType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType_Statics::InteractiveComponentBase_eventGetObjectType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractiveComponentBase::execGetObjectType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EObjectEnum*)Z_Param__Result=P_THIS->GetObjectType();
	P_NATIVE_END;
}
// ********** End Class UInteractiveComponentBase Function GetObjectType ***************************

// ********** Begin Class UInteractiveComponentBase Function IsWorking *****************************
struct Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics
{
	struct InteractiveComponentBase_eventIsWorking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractiveComponentBase_eventIsWorking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveComponentBase_eventIsWorking_Parms), &Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveComponentBase, nullptr, "IsWorking", Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics::InteractiveComponentBase_eventIsWorking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics::InteractiveComponentBase_eventIsWorking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveComponentBase_IsWorking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractiveComponentBase::execIsWorking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWorking();
	P_NATIVE_END;
}
// ********** End Class UInteractiveComponentBase Function IsWorking *******************************

// ********** Begin Class UInteractiveComponentBase Function ReceiveTurnOff ************************
static FName NAME_UInteractiveComponentBase_ReceiveTurnOff = FName(TEXT("ReceiveTurnOff"));
void UInteractiveComponentBase::ReceiveTurnOff()
{
	UFunction* Func = FindFunctionChecked(NAME_UInteractiveComponentBase_ReceiveTurnOff);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UInteractiveComponentBase_ReceiveTurnOff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "TurnOff" },
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveComponentBase_ReceiveTurnOff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveComponentBase, nullptr, "ReceiveTurnOff", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_ReceiveTurnOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveComponentBase_ReceiveTurnOff_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInteractiveComponentBase_ReceiveTurnOff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveComponentBase_ReceiveTurnOff_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UInteractiveComponentBase Function ReceiveTurnOff **************************

// ********** Begin Class UInteractiveComponentBase Function ReceiveTurnOn *************************
static FName NAME_UInteractiveComponentBase_ReceiveTurnOn = FName(TEXT("ReceiveTurnOn"));
void UInteractiveComponentBase::ReceiveTurnOn()
{
	UFunction* Func = FindFunctionChecked(NAME_UInteractiveComponentBase_ReceiveTurnOn);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UInteractiveComponentBase_ReceiveTurnOn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "TurnOn" },
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveComponentBase_ReceiveTurnOn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveComponentBase, nullptr, "ReceiveTurnOn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_ReceiveTurnOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveComponentBase_ReceiveTurnOn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInteractiveComponentBase_ReceiveTurnOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveComponentBase_ReceiveTurnOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UInteractiveComponentBase Function ReceiveTurnOn ***************************

// ********** Begin Class UInteractiveComponentBase Function TurnOff *******************************
struct Z_Construct_UFunction_UInteractiveComponentBase_TurnOff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveComponentBase_TurnOff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveComponentBase, nullptr, "TurnOff", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_TurnOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveComponentBase_TurnOff_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInteractiveComponentBase_TurnOff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveComponentBase_TurnOff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractiveComponentBase::execTurnOff)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TurnOff();
	P_NATIVE_END;
}
// ********** End Class UInteractiveComponentBase Function TurnOff *********************************

// ********** Begin Class UInteractiveComponentBase Function TurnOn ********************************
struct Z_Construct_UFunction_UInteractiveComponentBase_TurnOn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveComponentBase_TurnOn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveComponentBase, nullptr, "TurnOn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_TurnOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveComponentBase_TurnOn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInteractiveComponentBase_TurnOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveComponentBase_TurnOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractiveComponentBase::execTurnOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TurnOn();
	P_NATIVE_END;
}
// ********** End Class UInteractiveComponentBase Function TurnOn **********************************

// ********** Begin Class UInteractiveComponentBase ************************************************
void UInteractiveComponentBase::StaticRegisterNativesUInteractiveComponentBase()
{
	UClass* Class = UInteractiveComponentBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginFocus", &UInteractiveComponentBase::execBeginFocus },
		{ "EndFocus", &UInteractiveComponentBase::execEndFocus },
		{ "GetComponentInfo", &UInteractiveComponentBase::execGetComponentInfo },
		{ "GetObjectType", &UInteractiveComponentBase::execGetObjectType },
		{ "IsWorking", &UInteractiveComponentBase::execIsWorking },
		{ "TurnOff", &UInteractiveComponentBase::execTurnOff },
		{ "TurnOn", &UInteractiveComponentBase::execTurnOn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractiveComponentBase;
UClass* UInteractiveComponentBase::GetPrivateStaticClass()
{
	using TClass = UInteractiveComponentBase;
	if (!Z_Registration_Info_UClass_UInteractiveComponentBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractiveComponentBase"),
			Z_Registration_Info_UClass_UInteractiveComponentBase.InnerSingleton,
			StaticRegisterNativesUInteractiveComponentBase,
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
	return Z_Registration_Info_UClass_UInteractiveComponentBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UInteractiveComponentBase_NoRegister()
{
	return UInteractiveComponentBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInteractiveComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Actor/InteractiveComponentBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWorking_MetaData[] = {
		{ "Category", "InteractiveComponentBase" },
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWorking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractiveComponentBase_BeginFocus, "BeginFocus" }, // 100225859
		{ &Z_Construct_UFunction_UInteractiveComponentBase_EndFocus, "EndFocus" }, // 3582199818
		{ &Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo, "GetComponentInfo" }, // 3581339687
		{ &Z_Construct_UFunction_UInteractiveComponentBase_GetObjectType, "GetObjectType" }, // 1476129187
		{ &Z_Construct_UFunction_UInteractiveComponentBase_IsWorking, "IsWorking" }, // 1419961315
		{ &Z_Construct_UFunction_UInteractiveComponentBase_ReceiveTurnOff, "ReceiveTurnOff" }, // 3321564986
		{ &Z_Construct_UFunction_UInteractiveComponentBase_ReceiveTurnOn, "ReceiveTurnOn" }, // 2040098439
		{ &Z_Construct_UFunction_UInteractiveComponentBase_TurnOff, "TurnOff" }, // 30151287
		{ &Z_Construct_UFunction_UInteractiveComponentBase_TurnOn, "TurnOn" }, // 2498462220
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UInteractiveComponentBase_Statics::NewProp_bWorking_SetBit(void* Obj)
{
	((UInteractiveComponentBase*)Obj)->bWorking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractiveComponentBase_Statics::NewProp_bWorking = { "bWorking", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractiveComponentBase), &Z_Construct_UClass_UInteractiveComponentBase_Statics::NewProp_bWorking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWorking_MetaData), NewProp_bWorking_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveComponentBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveComponentBase_Statics::NewProp_bWorking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveComponentBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractiveComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DTProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveComponentBase_Statics::ClassParams = {
	&UInteractiveComponentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteractiveComponentBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveComponentBase_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveComponentBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveComponentBase()
{
	if (!Z_Registration_Info_UClass_UInteractiveComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveComponentBase.OuterSingleton, Z_Construct_UClass_UInteractiveComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveComponentBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveComponentBase);
UInteractiveComponentBase::~UInteractiveComponentBase() {}
// ********** End Class UInteractiveComponentBase **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h__Script_DTProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveComponentBase, UInteractiveComponentBase::StaticClass, TEXT("UInteractiveComponentBase"), &Z_Registration_Info_UClass_UInteractiveComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveComponentBase), 4294912661U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h__Script_DTProject_184775206(TEXT("/Script/DTProject"),
	Z_CompiledInDeferFile_FID_workspace_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h__Script_DTProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h__Script_DTProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
