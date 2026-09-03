class BobCoreConfigManager
{
    private static ref BobCoreConfig m_Config;

    static const string CONFIG_DIR = "$profile:Bob_Core";
    static const string CONFIG_FILE = "$profile:Bob_Core\\BobCoreConfig.json";

    static BobCoreConfig GetConfig()
    {
        return m_Config;
    }

    static void Load()
    {
        if (!FileExist(CONFIG_DIR))
        {
            MakeDirectory(CONFIG_DIR);
        }

        m_Config = new BobCoreConfig();

        if (FileExist(CONFIG_FILE))
        {
            JsonFileLoader<BobCoreConfig>.JsonLoadFile(CONFIG_FILE, m_Config);
            Print("[Bob_Core] BobCoreConfig loaded.");
        }
        else
        {
            Save();
            Print("[Bob_Core] BobCoreConfig created with default values.");
        }
    }

    static void Save()
    {
        if (!m_Config)
        {
            m_Config = new BobCoreConfig();
        }

        JsonFileLoader<BobCoreConfig>.JsonSaveFile(CONFIG_FILE, m_Config);
    }
}