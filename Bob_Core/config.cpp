class CfgPatches
{
    class Bob_Core
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
	{
		"DZ_Data",
		"DayZExpansion_AI_Scripts",
		"DayZExpansion_Hardline_Scripts"
	};
    };
};

class CfgMods
{
    class Bob_Core
    {
        dir = "Bob_Core";
        name = "Bob Core";
        type = "mod";

        dependencies[] =
        {
            "Game",
            "Mission"
        };

        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] = {"Bob_Core/Scripts/3_Game"};
            };

            class missionScriptModule
            {
                value = "";
                files[] = {"Bob_Core/Scripts/5_Mission"};
            };
        };
    };
};