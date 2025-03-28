#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyIDPluginBPLibrary.generated.h"

UCLASS()
class UMyIDPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "MyIDPlugin sample test testing"), Category = "MyIDPluginTesting")
	static float MyIDPluginSampleFunction(float Param);

	static FString UserName;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetUserName", Keywords = "TestPlugs"), Category = "TestPlug")
	static void SetUserName(const FString& NewName);
	
	UFUNCTION(BlueprintPure, meta = (DisplayName = "GetUserName", Keywords = "TestPlugs"), Category = "TestPlug")
	static FString GetUserName();
};
