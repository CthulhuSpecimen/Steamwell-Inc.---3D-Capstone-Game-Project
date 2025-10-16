// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SteamwellEditorTarget : TargetRules
{
	public SteamwellEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;
		ExtraModuleNames.Add("Steamwell");
        // Game editor
        ExtraModuleNames.AddRange(
            new string[]
            {
                "SteamwellEditor"
            });
    }
}
