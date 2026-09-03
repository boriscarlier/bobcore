class BobFactionConfig
{
    string Id;
    string DisplayName;
    string ExpansionFactionName;

    int ReputationMin;
    int ReputationMax;

    ref array<int> GradeThresholds;

    void BobFactionConfig()
    {
        GradeThresholds = new array<int>;
    }
}