// OVRFunctionsBP plugin by InnerLoop LLC 2021

using System.IO;
using UnrealBuildTool;

public class OVRFunctionsBP : ModuleRules
{
	public OVRFunctionsBP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;			
		
		PublicIncludePaths.AddRange(
			new string[] {
                // ... add public include paths required here ...
            }
			);


		PrivateIncludePaths.AddRange(
			new string[] {
				//"MyPlugin/Private",
                // ... add other private include paths required here ...
            }
			);


		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"OculusHMD",
				"OculusInput",
				"OVRPlugin"
                // ... add other public dependencies that you statically link with here ...
            }
			);


		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"OculusHMD",
				"OculusInput",
				"OVRPlugin"
		// ... add private dependencies that you statically link with here ...	
			}
			);


		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
                // ... add any modules that your module loads dynamically here ...
            }
			);
	}
}
