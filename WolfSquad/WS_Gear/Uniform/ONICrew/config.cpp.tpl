/**
 * <% warning %>
 */
class CfgPatches
{
  class WS_Gear_Uniform_ONICrew
  {
    author = "wlan0";
    addonRootClass = "WS_Gear_Uniforms";
  };
};

/* Metaitem */
class XtdGearModels
{
  class CfgWeapons
  {
    class WS_Gear_Uniform_ONICrew_Metaitem
    {
<% metaitem %>    };
  };
};

/* Arsenal Defs */
class CfgWeapons
{
  class Uniform_Base;
  class UniformItem;
  class ItemInfo;

  // Base Class: All others inherit from this
  class WS_Gear_Uniform_ONICrew_Base: Uniform_Base
  {
    scope = 1;
    scopeCurator = 1;
    scopeArsenal = 1;
    dlc = "WS";
    author = "wlan0";
    displayName = "[WS] ONI Crew Uniform";
    picture = "WS_Images\Common\oni.paa";

    class ItemInfo: UniformItem
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Black";
      containerClass = "Supply30";
      mass = 10;
    };
  };

  // Actual classes
<% cfgWeapons %>
};

/* Uniform Defs */
class CfgVehicles
{
  class B_Soldier_base_F;

  // Base classes. All others inherit from these.
  class WS_Gear_Uniform_ONICrew_Base_masc: B_Soldier_base_F
  {
    scope = 1;
    scopeArsenal = 1;
    scopeCurator = 1;
    model = "\A3\Characters_F_Exp\Gendarmerie\B_GEN_Commander_F.p3d";

    hiddenSelections[] =
    {
      "camo",
    };
    hiddenSelectionsTextures[] = { };
  };
  class WS_Gear_Uniform_ONICrew_Base_femme: B_Soldier_base_F
  {
    scope = 1;
    scopeArsenal = 1;
    scopeCurator = 1;
    model = "TCGM_Girls\model\TCGM_f_Soldier.p3d";
    
    hiddenSelections[]=
    {
      "camo",
      "camo1",
    };
    hiddenSelectionsTextures[] = { };
  };

  // Actual classes
<% cfgVehicles %>};
