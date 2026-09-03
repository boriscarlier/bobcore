[eAIRegisterFaction(eAIFactionAegis)]
class eAIFactionAegis : eAIFaction
{
    override bool IsFriendly(notnull eAIFaction other)
    {
        if (other.IsInherited(eAIFactionAegis))
        {
            return true;
        }

        return false;
    }
};
[eAIRegisterFaction(eAIFactionHelix)]
class eAIFactionHelix : eAIFaction
{
    override bool IsFriendly(notnull eAIFaction other)
    {
        if (other.IsInherited(eAIFactionHelix))
        {
            return true;
        }

        return false;
    }
};
[eAIRegisterFaction(eAIFactionVeyronis)]
class eAIFactionVeyronis : eAIFaction
{
    override bool IsFriendly(notnull eAIFaction other)
    {
        if (other.IsInherited(eAIFactionVeyronis))
        {
            return true;
        }

        return false;
    }
};
[eAIRegisterFaction(eAIFactionBlackMarket)]
class eAIFactionBlackMarket : eAIFaction
{
    override bool IsFriendly(notnull eAIFaction other)
    {
        if (other.IsInherited(eAIFactionBlackMarket))
        {
            return true;
        }

        return false;
    }
};