// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SteamwellTarget : TargetRules
{
	public SteamwellTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;
		ExtraModuleNames.Add("Steamwell");
        if (Type == TargetType.Editor)
        {
            ExtraModuleNames.AddRange(
                new string[]
                {
                    "SteamwellEditor"
                });
        }
    }
}
