// OVRFunctionsBP plugin by InnerLoop LLC 2021

#include "OVRFunctionsBPFunctionLibrary.h"

UOVRFunctionsBPFunctionLibrary::UOVRFunctionsBPFunctionLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
}

float UOVRFunctionsBPFunctionLibrary::GetASWVelocityScale()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusHMD::FOculusHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		float ASWVelocityScale = 0.0f;
		return OVRP_SUCCESS(FOculusHMDModule::GetPluginWrapper().GetASWVelocityScale(&ASWVelocityScale));
	}
#endif
	return 0.0f;
}

float UOVRFunctionsBPFunctionLibrary::GetASWDepthScale()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusHMD::FOculusHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		float ASWDepthScale = 0.0f;
		return OVRP_SUCCESS(FOculusHMDModule::GetPluginWrapper().GetASWDepthScale(&ASWDepthScale));
	}
#endif
	return 0.0f;
}

bool UOVRFunctionsBPFunctionLibrary::GetASWAdaptiveMode()
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusHMD::FOculusHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		ovrpBool ASWAdaptiveMode;
		return OVRP_SUCCESS(FOculusHMDModule::GetPluginWrapper().GetASWAdaptiveMode(&ASWAdaptiveMode));
	}
#endif
	return false;
}

void UOVRFunctionsBPFunctionLibrary::SetASWAdaptiveMode(bool ASWAdaptiveMode)
{
#if OCULUS_HMD_SUPPORTED_PLATFORMS
	OculusHMD::FOculusHMD* OculusHMD = GetOculusHMD();
	if (OculusHMD != nullptr)
	{
		FOculusHMDModule::GetPluginWrapper().SetBoundaryVisible2(ASWAdaptiveMode);
	}
#endif
}