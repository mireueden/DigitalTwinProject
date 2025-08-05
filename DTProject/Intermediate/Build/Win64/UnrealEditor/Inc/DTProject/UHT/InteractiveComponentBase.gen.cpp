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
DTPROJECT_API UClass* Z_Construct_UClass_UObjectData_NoRegister();
DTPROJECT_API UClass* Z_Construct_UClass_UObjectDataAsset_NoRegister();
DTPROJECT_API UEnum* Z_Construct_UEnum_DTProject_EObjectType();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DTProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInteractiveComponentBase Function GetActorName **************************
struct Z_Construct_UFunction_UInteractiveComponentBase_GetActorName_Statics
{
	struct InteractiveComponentBase_eventGetActorName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inspectable" },
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInteractiveComponentBase_GetActorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveComponentBase_eventGetActorName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveComponentBase_GetActorName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveComponentBase_GetActorName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetActorName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveComponentBase_GetActorName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveComponentBase, nullptr, "GetActorName", Z_Construct_UFunction_UInteractiveComponentBase_GetActorName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetActorName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveComponentBase_GetActorName_Statics::InteractiveComponentBase_eventGetActorName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetActorName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveComponentBase_GetActorName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInteractiveComponentBase_GetActorName_Statics::InteractiveComponentBase_eventGetActorName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveComponentBase_GetActorName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveComponentBase_GetActorName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractiveComponentBase::execGetActorName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetActorName();
	P_NATIVE_END;
}
// ********** End Class UInteractiveComponentBase Function GetActorName ****************************

// ********** Begin Class UInteractiveComponentBase Function GetActorType **************************
struct Z_Construct_UFunction_UInteractiveComponentBase_GetActorType_Statics
{
	struct InteractiveComponentBase_eventGetActorType_Parms
	{
		EObjectType ReturnValue;
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInteractiveComponentBase_GetActorType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInteractiveComponentBase_GetActorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveComponentBase_eventGetActorType_Parms, ReturnValue), Z_Construct_UEnum_DTProject_EObjectType, METADATA_PARAMS(0, nullptr) }; // 876934479
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveComponentBase_GetActorType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveComponentBase_GetActorType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveComponentBase_GetActorType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetActorType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveComponentBase_GetActorType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveComponentBase, nullptr, "GetActorType", Z_Construct_UFunction_UInteractiveComponentBase_GetActorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetActorType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveComponentBase_GetActorType_Statics::InteractiveComponentBase_eventGetActorType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetActorType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveComponentBase_GetActorType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInteractiveComponentBase_GetActorType_Statics::InteractiveComponentBase_eventGetActorType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveComponentBase_GetActorType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveComponentBase_GetActorType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractiveComponentBase::execGetActorType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EObjectType*)Z_Param__Result=P_THIS->GetActorType();
	P_NATIVE_END;
}
// ********** End Class UInteractiveComponentBase Function GetActorType ****************************

// ********** Begin Class UInteractiveComponentBase Function GetComponentInfo **********************
struct Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics
{
	struct InteractiveComponentBase_eventGetComponentInfo_Parms
	{
		FString ReturnValue;
	};
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveComponentBase, nullptr, "GetComponentInfo", Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::InteractiveComponentBase_eventGetComponentInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo_Statics::InteractiveComponentBase_eventGetComponentInfo_Parms) < MAX_uint16);
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
	*(FString*)Z_Param__Result=P_THIS->GetComponentInfo();
	P_NATIVE_END;
}
// ********** End Class UInteractiveComponentBase Function GetComponentInfo ************************

// ********** Begin Class UInteractiveComponentBase Function GetObjectDescription ******************
struct Z_Construct_UFunction_UInteractiveComponentBase_GetObjectDescription_Statics
{
	struct InteractiveComponentBase_eventGetObjectDescription_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inspectable" },
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInteractiveComponentBase_GetObjectDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveComponentBase_eventGetObjectDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveComponentBase_GetObjectDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveComponentBase_GetObjectDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetObjectDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveComponentBase_GetObjectDescription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractiveComponentBase, nullptr, "GetObjectDescription", Z_Construct_UFunction_UInteractiveComponentBase_GetObjectDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetObjectDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveComponentBase_GetObjectDescription_Statics::InteractiveComponentBase_eventGetObjectDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponentBase_GetObjectDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveComponentBase_GetObjectDescription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInteractiveComponentBase_GetObjectDescription_Statics::InteractiveComponentBase_eventGetObjectDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractiveComponentBase_GetObjectDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveComponentBase_GetObjectDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractiveComponentBase::execGetObjectDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetObjectDescription();
	P_NATIVE_END;
}
// ********** End Class UInteractiveComponentBase Function GetObjectDescription ********************

// ********** Begin Class UInteractiveComponentBase Function IsWorking *****************************
struct Z_Construct_UFunction_UInteractiveComponentBase_IsWorking_Statics
{
	struct InteractiveComponentBase_eventIsWorking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = \"TurnOff\"))\n//void ReceiveTurnOff();\n" },
#endif
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = \"TurnOff\"))\nvoid ReceiveTurnOff();" },
#endif
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

// ********** Begin Class UInteractiveComponentBase ************************************************
void UInteractiveComponentBase::StaticRegisterNativesUInteractiveComponentBase()
{
	UClass* Class = UInteractiveComponentBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActorName", &UInteractiveComponentBase::execGetActorName },
		{ "GetActorType", &UInteractiveComponentBase::execGetActorType },
		{ "GetComponentInfo", &UInteractiveComponentBase::execGetComponentInfo },
		{ "GetObjectDescription", &UInteractiveComponentBase::execGetObjectDescription },
		{ "IsWorking", &UInteractiveComponentBase::execIsWorking },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectDataAsset_MetaData[] = {
		{ "Category", "InteractiveComponentBase" },
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectData_MetaData[] = {
		{ "Category", "InteractiveComponentBase" },
		{ "ModuleRelativePath", "Actor/InteractiveComponentBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWorking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectDataAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractiveComponentBase_GetActorName, "GetActorName" }, // 697144629
		{ &Z_Construct_UFunction_UInteractiveComponentBase_GetActorType, "GetActorType" }, // 928821131
		{ &Z_Construct_UFunction_UInteractiveComponentBase_GetComponentInfo, "GetComponentInfo" }, // 1694429385
		{ &Z_Construct_UFunction_UInteractiveComponentBase_GetObjectDescription, "GetObjectDescription" }, // 1784493555
		{ &Z_Construct_UFunction_UInteractiveComponentBase_IsWorking, "IsWorking" }, // 3467653103
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveComponentBase_Statics::NewProp_ObjectDataAsset = { "ObjectDataAsset", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveComponentBase, ObjectDataAsset), Z_Construct_UClass_UObjectDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectDataAsset_MetaData), NewProp_ObjectDataAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveComponentBase_Statics::NewProp_ObjectData = { "ObjectData", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveComponentBase, ObjectData), Z_Construct_UClass_UObjectData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectData_MetaData), NewProp_ObjectData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveComponentBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveComponentBase_Statics::NewProp_bWorking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveComponentBase_Statics::NewProp_ObjectDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveComponentBase_Statics::NewProp_ObjectData,
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
struct Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h__Script_DTProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveComponentBase, UInteractiveComponentBase::StaticClass, TEXT("UInteractiveComponentBase"), &Z_Registration_Info_UClass_UInteractiveComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveComponentBase), 160849277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h__Script_DTProject_1540855596(TEXT("/Script/DTProject"),
	Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h__Script_DTProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h__Script_DTProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
