class CfgPatches
{
    class Resurgence_Core
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
        energyUsagePerSecond = 0.05;
        waterUsagePerSecond = 0.08;
        bloodRegenRate = 0.4;
        bloodMax = 5000;
        healthRegenRate = 0.4;
        shockRefillSpeedConscious = 4.0;
        shockRefillSpeedUnconscious = 0.8;
    };
};