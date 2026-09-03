[eAIRegisterFaction(eAIFactionTara)]
class eAIFactionTara : eAIFaction
{
    override bool IsFriendly(notnull eAIFaction other)
    {
        if (other.IsInherited(eAIFactionTara))
        {
            return true;
        }

        return false;
    }
};