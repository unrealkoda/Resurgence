class CfgPatches
{
    class EpochRevival_Core
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data"};
    };
};

class CfgVehicles
{
    class SurvivorBase;
    class PlayerBase : SurvivorBase
    {
        // Hunger drain per second
        energyUsagePerSecond = 0.05;
        
        // Thirst drain per second
        waterUsagePerSecond = 0.08;
        
        // Blood regeneration rate
        bloodRegenRate = 0.4;
        
        // Maximum blood volume
        bloodMax = 5000;
        
        // Health regeneration
        healthRegenRate = 0.4;
        
        // Shock recovery conscious
        shockRefillSpeedConscious = 4.0;
        
        // Shock recovery unconscious
        shockRefillSpeedUnconscious = 0.8;
    };
};