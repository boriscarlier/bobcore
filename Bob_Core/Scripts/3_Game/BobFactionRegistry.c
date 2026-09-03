class BobFactionRegistry
{
    private static ref array<ref BobFactionConfig> m_Factions;

    static void Init()
    {
        Print("[Bob_Core] FactionRegistry Init ENTER");

        m_Factions = new array<ref BobFactionConfig>;

        ref BobFactionConfig tara = new BobFactionConfig();

        tara.Id = "FACTION_TARA";
        tara.DisplayName = "Tara";
		tara.ExpansionFactionName = "Tara";
        tara.ReputationMin = -1000;
        tara.ReputationMax = 5000;

        tara.GradeThresholds.Insert(0);
        tara.GradeThresholds.Insert(1000);
        tara.GradeThresholds.Insert(2000);
        tara.GradeThresholds.Insert(3000);
        tara.GradeThresholds.Insert(4000);

        m_Factions.Insert(tara);
		
		ref BobFactionConfig aegis = new BobFactionConfig();

	aegis.Id = "FACTION_AEGIS";
	aegis.DisplayName = "Aegis";
	aegis.ExpansionFactionName = "Aegis";
	aegis.ReputationMin = -1000;
	aegis.ReputationMax = 5000;

	aegis.GradeThresholds.Insert(0);
	aegis.GradeThresholds.Insert(1000);
	aegis.GradeThresholds.Insert(2000);
	aegis.GradeThresholds.Insert(3000);
	aegis.GradeThresholds.Insert(4000);

	m_Factions.Insert(aegis);
	
	ref BobFactionConfig helix = new BobFactionConfig();

	helix.Id = "FACTION_HELIX";
	helix.DisplayName = "Helix";
	helix.ExpansionFactionName = "Helix";
	helix.ReputationMin = -1000;
	helix.ReputationMax = 5000;

	helix.GradeThresholds.Insert(0);
	helix.GradeThresholds.Insert(1000);
	helix.GradeThresholds.Insert(2000);
	helix.GradeThresholds.Insert(3000);
	helix.GradeThresholds.Insert(4000);

	m_Factions.Insert(helix);
	
	ref BobFactionConfig veyronis = new BobFactionConfig();

	veyronis.Id = "FACTION_VEYRONIS";
	veyronis.DisplayName = "Veyronis";
	veyronis.ExpansionFactionName = "Veyronis";
	veyronis.ReputationMin = -1000;
	veyronis.ReputationMax = 5000;

	veyronis.GradeThresholds.Insert(0);
	veyronis.GradeThresholds.Insert(1000);
	veyronis.GradeThresholds.Insert(2000);
	veyronis.GradeThresholds.Insert(3000);
	veyronis.GradeThresholds.Insert(4000);

	m_Factions.Insert(veyronis);
	
	ref BobFactionConfig blackMarket = new BobFactionConfig();

	blackMarket.Id = "FACTION_BLACKMARKET";
	blackMarket.DisplayName = "Black Market";
	blackMarket.ExpansionFactionName = "BlackMarket";
	blackMarket.ReputationMin = -1000;
	blackMarket.ReputationMax = 5000;

	blackMarket.GradeThresholds.Insert(0);
	blackMarket.GradeThresholds.Insert(1000);
	blackMarket.GradeThresholds.Insert(2000);
	blackMarket.GradeThresholds.Insert(3000);
	blackMarket.GradeThresholds.Insert(4000);

	m_Factions.Insert(blackMarket);

        Print("[Bob_Core] FactionRegistry count: " + m_Factions.Count().ToString());
    }

    static array<ref BobFactionConfig> GetAll()
{
    return m_Factions;
}

	static BobFactionConfig GetById(string factionId)
{
    foreach (BobFactionConfig faction : m_Factions)
    {
        if (faction.Id == factionId)
        {
            return faction;
        }
    }
    return null;
}

static string GetExpansionFactionName(string factionId)
{
    BobFactionConfig faction = GetById(factionId);

    if (!faction)
    {
        return "";
    }

    return faction.ExpansionFactionName;
}
static int GetExpansionFactionTypeID(string factionId)
{
    string factionName = GetExpansionFactionName(factionId);

    if (factionName == "")
    {
        return -1;
    }

    eAIFaction faction = eAIFaction.Create(factionName);

    if (!faction)
    {
        return -1;
    }

    return faction.GetTypeID();
}
}