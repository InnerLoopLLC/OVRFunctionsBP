// OVRFunctionsBP plugin by InnerLoop LLC 2021

#pragma once

#include "OVRFunctionsBP.h"
#include "OVRFunctionsBPFunctionLibrary.generated.h"

UCLASS()
class OVRFUNCTIONSBP_API UOVRFunctionsBPFunctionLibrary : public UOculusFunctionLibrary //UBlueprintFunctionLibrary 
{
	GENERATED_UCLASS_BODY()

public:
	
	/* Get Async SpaceWarp Velocity Scale */
	UFUNCTION(BlueprintPure, Category = "OVR Functions BP|Async Space Warp")
		static float GetASWVelocityScale();
	
	/*  Get Async SpaceWarp Depth Scale */
	UFUNCTION(BlueprintPure, Category = "OVR Functions BP|Async Space Warp")
		static float GetASWDepthScale();

	/* Get Async SpaceWarp Adaptive Mode */
	UFUNCTION(BlueprintPure, Category = "OVR Functions BP|Async Space Warp")
		static bool GetASWAdaptiveMode();

	/* Set Async SpaceWarp Adaptive Mode */
	UFUNCTION(BlueprintCallable, Category = "OVR Functions BP|Async Space Warp")
		static void SetASWAdaptiveMode(bool ASWAdaptiveMode);
};
