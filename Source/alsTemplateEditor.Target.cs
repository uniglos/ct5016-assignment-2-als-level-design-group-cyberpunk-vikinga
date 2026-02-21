

using UnrealBuildTool;
using System.Collections.Generic;

public class alsTemplateEditorTarget : TargetRules
{
	public alsTemplateEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "alsTemplate" } );
	}
}
