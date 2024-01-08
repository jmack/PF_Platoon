class CfgPatches
{
  class PF_Armor_Helmets_CH252D_ONeill
  {
    author = "wlan0";
    addonRootClass = "PF_Armor";
    requiredVersion = 0.1;
    requiredAddons[] = {};
    units[] = {};
    weapons[] = {};
  };
};

class CfgWeapons
{
  class PF_Armor_Helmets_CH252D_Pathfinder;
  class PF_Armor_Helmets_CH252D_Pathfinder_dp;

  class PF_Armor_Helmets_ONeill : PF_Armor_Helmets_CH252D_Pathfinder
  {
    displayName = "[PF] CH252D (O'Neill)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\oneill\helmets\CH252D\_textures\black.paa",
      "PF_Armor\oneill\helmets\CH252D\_textures\visr_gold.paa",
    };
  };
  class PF_Armor_Helmets_ONeill_dp : PF_Armor_Helmets_CH252D_Pathfinder_dp
  {
    displayName = "[PF] CH252D Depolarized (O'Neill)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\oneill\helmets\CH252D\_textures\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
    };
  };
};
