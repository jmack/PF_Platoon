class CfgPatches
{
  class PF_Armor_Helmets_CH252D_Dukova
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

  class PF_Armor_Helmets_Dukova : PF_Armor_Helmets_CH252D_Wizard
  {
    displayName = "[PF] CH252D (Dukova)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\dukova\helmets\CH252D\_textures\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_standard.paa",
    };
  };
  class PF_Armor_Helmets_Dukova_dp : PF_Armor_Helmets_CH252D_Wizard_dp
  {
    displayName = "[PF] CH252D Depolarized (Dukova)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\dukova\helmets\CH252D\_textures\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
    };
  };
};
