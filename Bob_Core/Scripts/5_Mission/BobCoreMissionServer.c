modded class MissionServer
{
    override void OnInit()
    {
        super.OnInit();

        BobCoreConfigManager.Load();
        BobFactionRegistry.Init();
		
		Print("[Bob_Core] MissionServer initialized.");
    }
}