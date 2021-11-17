// OVRFunctionsBP plugin by InnerLoop LLC 2021

#pragma once

#include "CoreGlobals.h"
#include "CoreMinimal.h"
#include "EngineGlobals.h"
#include "Engine/Engine.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UObject/ObjectMacros.h"

#include <../Plugins/Runtime/Oculus/OculusVR/Source/OculusHMD/Private/OculusHMD.h>
#include <../Plugins/Runtime/Oculus/OculusVR/Source/OculusHMD/Public/OculusHMDTypes.h>
#include <../Plugins/Runtime/Oculus/OculusVR/Source/OculusHMD/Public/OculusFunctionLibrary.h>

#include "Modules/ModuleManager.h"

class FOVRFunctionsBPModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
