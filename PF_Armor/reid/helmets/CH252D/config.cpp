class CfgPatches
{
  class PF_Armor_Helmets_CH252D_Reid
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
  class PF_Armor_Helmets_CH252D_Wizard;
  class PF_Armor_Helmets_CH252D_Wizard_dp;

  class PF_Armor_Helmets_Reid : PF_Armor_Helmets_CH252D_Wizard
  {
    displayName = "[PF] CH252D (Reid)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\reid\helmets\CH252D\_textures\black.paa",
      "PF_Armor\reid\helmets\CH252D\_textures\visr_silver.paa",
    };
  };
  class PF_Armor_Helmets_Reid_dp : PF_Armor_Helmets_CH252D_Wizard_dp
  {
    displayName = "[PF] CH252D Depolarized (Reid)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\reid\helmets\CH252D\_textures\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
    };
  };
};
