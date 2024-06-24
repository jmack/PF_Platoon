class CfgPatches
{
  class A3_Weapons_F
  {
    author="$STR_A3_Bohemia_Interactive";
    name="Arma 3 Alpha - Weapons and Accessories";
    url="https://www.arma3.com";
    requiredAddons[]=
    {
      "A3_Anims_F_Config_Sdr",
      "A3_Data_F",
      "A3_Ui_F"
    };
    requiredVersion=0.1;
    weapons[]=
    {
      "MineDetector",
    };
  };
};

class DetectorCore;
class CfgWeapons
{
  class MineDetector : DetectorCore
  {
    _generalMacro="MineDetector";
    displayName="$STR_A3_cfgweapons_minedetector0";
    descriptionshort="$STR_A3_cfgweapons_minedetector1";
    detectRange=25;
  }
};
