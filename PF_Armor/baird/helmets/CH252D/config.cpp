class CfgPatches
{
  class PF_Armor_Helmets_CH252D_Baird
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

  class PF_Armor_Helmets_Baird : PF_Armor_Helmets_CH252D_Wizard
  {
    displayName = "[PF] CH252D (Baird)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\baird\helmets\CH252D\_textures\black.paa",
      "PF_Armor\baird\helmets\CH252D\_textures\visr_green.paa",
    };
  };
  class PF_Armor_Helmets_Baird_dp : PF_Armor_Helmets_CH252D_Wizard_dp
  {
    displayName = "[PF] CH252D Depolarized (Baird)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\baird\helmets\CH252D\_textures\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
    };
  };
};
