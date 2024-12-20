// AUTOGENERATED FILE. Edit config.cpp.tpl or tictacs.json instead. This file will be overwritten by the build script.

class CfgPatches
{
  class PF_Gear_TicTacs
  {
    author = "wlan0";
    addonRootClass = "PF_Gear";
    requiredVersion = 0.1;
    units[] =
    {
      "Module_OPTRE_PelicanSupplyDrop",
      "1st_MEU_patch_vehicles_supplypods", // to override 1stMEU and make sure our tictacs don't get overwritten
      "PF_TicTac_Empty",
      "PF_TicTac_Medical",
      "PF_TicTac_Autorifle",
      "PF_TicTac_Combat_Engineer",
      "PF_TicTac_Marksman",
      "PF_TicTac_Rifleman",
      "PF_TicTac_Sidearms",
      "PF_TicTac_AntiTank",
      "PF_TicTac_Grenadier",
      "PF_TicTac_Sniper",
      "PF_TicTac_Static_M247H",
      "PF_TicTac_Mk6_Mortar",
      "PF_TicTac_Mk6_Mortar_Ammo",
    };
    weapons[] = { };
  };
};

class CfgVehicles
{
  class OPTRE_Ammo_SupplyPod_Empty;
  class PF_TicTac_Empty : OPTRE_Ammo_SupplyPod_Empty
  {
    scope = 1;
    dlc = "PF_Plt";
    author = "wlan0";
    displayName = "[PF] Supply Pod (Empty)";
    maximumLoad = 1000000;
    hiddenSelections[] =
    {
      "camo",
    };
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\tictacs\_textures\pods\empty.paa",
    };
    editorPreview = "PF_Gear\tictacs\_textures\previews\empty.jpg";

    class TransportItems { };
    class TransportMagazines { };
    class TransportWeapons { };
  };

  class PF_TicTac_Medical : PF_TicTac_Empty
  {
    scope = 2;
    displayName = "[PF] Supply Pod (Medical)";
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\tictacs\_textures\pods\medical.paa",
    };
    editorPreview = "PF_Gear\tictacs\_textures\previews\medical.jpg";
    class TransportItems
    {
      class _xx_ACE_adenosine { name = "ACE_adenosine"; count = 16; };
      class _xx_ACE_morphine { name = "ACE_morphine"; count = 16; };
      class _xx_ACE_epinephrine { name = "ACE_epinephrine"; count = 16; };
      class _xx_MEU_Medigel_Light { name = "MEU_Medigel_Light"; count = 150; };
      class _xx_ACE_elasticBandage { name = "ACE_elasticBandage"; count = 20; };
      class _xx_OPTRE_Biofoam { name = "OPTRE_Biofoam"; count = 10; };
      class _xx_ACE_salineIV { name = "ACE_salineIV"; count = 5; };
      class _xx_ACE_salineIV_500 { name = "ACE_salineIV_500"; count = 10; };
      class _xx_ACE_salineIV_250 { name = "ACE_salineIV_250"; count = 20; };
      class _xx_ACE_tourniquet { name = "ACE_tourniquet"; count = 16; };
      class _xx_ACE_splint { name = "ACE_splint"; count = 10; };
      class _xx_adv_aceCPR_AED { name = "adv_aceCPR_AED"; count = 1; };
      class _xx_ACE_surgicalKit { name = "ACE_surgicalKit"; count = 2; };
    };
  };

  class PF_TicTac_Autorifle : PF_TicTac_Empty
  {
    scope = 2;
    displayName = "[PF] Supply Pod (Autorifle)";
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\tictacs\_textures\pods\autorifle.paa",
    };
    editorPreview = "PF_Gear\tictacs\_textures\previews\autorifle.jpg";
    class TransportItems
    {
      class _xx_MEU_REC_HOLO { name = "MEU_REC_HOLO"; count = 2; };
      class _xx_OPTRE_MA5Suppressor { name = "OPTRE_MA5Suppressor"; count = 2; };
      class _xx_bipod_01_F_blk { name = "bipod_01_F_blk"; count = 2; };
      class _xx_MEU_M12_Vis_Laser { name = "MEU_M12_Vis_Laser"; count = 2; };
    };
    class TransportMagazines
    {
      class _xx_MEU_400Rnd_762x51_AP_HV_Box { magazine = "MEU_400Rnd_762x51_AP_HV_Box"; count = 5; };
      class _xx_OPTRE_200Rnd_95x40_Box_JHP { magazine = "OPTRE_200Rnd_95x40_Box_JHP"; count = 10; };
    };
    class TransportWeapons
    {
      class _xx_MEU_XM247 { weapon = "MEU_XM247"; count = 1; };
      class _xx_MEU_M75 { weapon = "MEU_M75"; count = 1; };
    };
  };

  class PF_TicTac_Combat_Engineer : PF_TicTac_Empty
  {
    scope = 2;
    displayName = "[PF] Supply Pod (Combat Engineer)";
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\tictacs\_textures\pods\combatengineer.paa",
    };
    editorPreview = "PF_Gear\tictacs\_textures\previews\empty.jpg";
    class TransportMagazines
    {
      class _xx_C7_Remote_Mag { magazine = "C7_Remote_Mag"; count = 10; };
      class _xx_OPTRE_c7_remote_throwable_sticky_mag { magazine = "OPTRE_c7_remote_throwable_sticky_mag"; count = 5; };
      class _xx_MEU_Deployable_Bubbleshield_mag { magazine = "MEU_Deployable_Bubbleshield_mag"; count = 5; };
      class _xx_C12_Remote_Mag { magazine = "C12_Remote_Mag"; count = 2; };
      class _xx_M168_Remote_Mag { magazine = "M168_Remote_Mag"; count = 1; };
    };
  };

  class PF_TicTac_Marksman : PF_TicTac_Empty
  {
    scope = 2;
    displayName = "[PF] Supply Pod (Marksman)";
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\tictacs\_textures\pods\marksman.paa",
    };
    editorPreview = "PF_Gear\tictacs\_textures\previews\marksman.jpg";
    class TransportItems
    {
      class _xx_PF_Holo_DMR { name = "PF_Holo_DMR"; count = 4; };
      class _xx_OPTRE_MA5Suppressor { name = "OPTRE_MA5Suppressor"; count = 4; };
      class _xx_bipod_01_F_blk { name = "bipod_01_F_blk"; count = 4; };
      class _xx_MEU_M12_Vis_Laser { name = "MEU_M12_Vis_Laser"; count = 4; };
    };
    class TransportMagazines
    {
      class _xx_OPTRE_36Rnd_95x40_Mag_JHP { magazine = "OPTRE_36Rnd_95x40_Mag_JHP"; count = 40; };
      class _xx_PF_15Rnd_65_Creedmoor_DMR_Mag { magazine = "PF_15Rnd_65_Creedmoor_DMR_Mag"; count = 40; };
    };
    class TransportWeapons
    {
      class _xx_MEU_OPTRE_BR55HB { weapon = "MEU_OPTRE_BR55HB"; count = 2; };
      class _xx_MEU_OPTRE_M393_DMR { weapon = "MEU_OPTRE_M393_DMR"; count = 2; };
    };
  };

  class PF_TicTac_Rifleman : PF_TicTac_Empty
  {
    scope = 2;
    displayName = "[PF] Supply Pod (Rifleman)";
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\tictacs\_textures\pods\rifleman.paa",
    };
    editorPreview = "PF_Gear\tictacs\_textures\previews\rifleman.jpg";
    class TransportItems
    {
      class _xx_PF_Holo { name = "PF_Holo"; count = 4; };
      class _xx_OPTRE_MA5Suppressor { name = "OPTRE_MA5Suppressor"; count = 4; };
      class _xx_MEU_M12_Vis_Laser { name = "MEU_M12_Vis_Laser"; count = 4; };
    };
    class TransportMagazines
    {
      class _xx_OPTRE_32Rnd_762x51_Mag_JHP { magazine = "OPTRE_32Rnd_762x51_Mag_JHP"; count = 80; };
    };
    class TransportWeapons
    {
      class _xx_MEU_OPTRE_MA5C { weapon = "MEU_OPTRE_MA5C"; count = 4; };
    };
  };

  class PF_TicTac_Sidearms : PF_TicTac_Empty
  {
    scope = 2;
    displayName = "[PF] Supply Pod (Sidearms)";
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\tictacs\_textures\pods\pistol.paa",
    };
    editorPreview = "PF_Gear\tictacs\_textures\previews\pistol.jpg";
    class TransportItems
    {
      class _xx_19_UNSC_M7_optic { name = "19_UNSC_M7_optic"; count = 2; };
      class _xx_19_UNSC_M7_LAM { name = "19_UNSC_M7_LAM"; count = 2; };
      class _xx_19_UNSC_m7_Suppressor { name = "19_UNSC_m7_Suppressor"; count = 2; };
      class _xx_OPTRE_M6C_Laser { name = "OPTRE_M6C_Laser"; count = 2; };
      class _xx_OPTRE_M6C_compensator { name = "OPTRE_M6C_compensator"; count = 2; };
      class _xx_OPTRE_M6G_Scope { name = "OPTRE_M6G_Scope"; count = 4; };
      class _xx_OPTRE_M6G_Flashlight { name = "OPTRE_M6G_Flashlight"; count = 4; };
      class _xx_OPTRE_M6_silencer { name = "OPTRE_M6_silencer"; count = 4; };
    };
    class TransportMagazines
    {
      class _xx_60Rnd_5x23_m7_fmj { magazine = "60Rnd_5x23_m7_fmj"; count = 20; };
      class _xx_TCF_12Rnd_127x40_Mag_JHP { magazine = "TCF_12Rnd_127x40_Mag_JHP"; count = 42; };
      class _xx_TCF_12Rnd_127x40_Mag_NARQ { magazine = "TCF_12Rnd_127x40_Mag_NARQ"; count = 42; };
    };
    class TransportWeapons
    {
      class _xx_19_UNSC_M7_Side { weapon = "19_UNSC_M7_Side"; count = 2; };
      class _xx_TCF_M6D_Black { weapon = "TCF_M6D_Black"; count = 2; };
      class _xx_TCF_M6D { weapon = "TCF_M6D"; count = 4; };
    };
  };

  class PF_TicTac_AntiTank : PF_TicTac_Empty
  {
    scope = 2;
    displayName = "[PF] Supply Pod (AntiTank)";
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\tictacs\_textures\pods\antitank.paa",
    };
    editorPreview = "PF_Gear\tictacs\_textures\previews\antitank.jpg";
    class TransportMagazines
    {
      class _xx_OPTRE_M41_Twin_HEAT_Thermal { magazine = "OPTRE_M41_Twin_HEAT_Thermal"; count = 8; };
      class _xx_OPTRE_M41_Twin_HEAT_SACLOS { magazine = "OPTRE_M41_Twin_HEAT_SACLOS"; count = 4; };
      class _xx_OPTRE_M41_Twin_HEAT_SALH { magazine = "OPTRE_M41_Twin_HEAT_SALH"; count = 4; };
      class _xx_OPTRE_M41_Twin_HEAP { magazine = "OPTRE_M41_Twin_HEAP"; count = 4; };
    };
    class TransportWeapons
    {
      class _xx_MEU_M41_SSR { weapon = "MEU_M41_SSR"; count = 1; };
      class _xx_MEU_Hopper_v2_Loaded { weapon = "MEU_Hopper_v2_Loaded"; count = 4; };
    };
  };

  class PF_TicTac_Grenadier : PF_TicTac_Empty
  {
    scope = 2;
    displayName = "[PF] Supply Pod (Grenadier)";
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\tictacs\_textures\pods\grenadier.paa",
    };
    editorPreview = "PF_Gear\tictacs\_textures\previews\grenadier.jpg";
    class TransportItems
    {
      class _xx_MEU_REC_HOLO { name = "MEU_REC_HOLO"; count = 2; };
      class _xx_OPTRE_MA5Suppressor { name = "OPTRE_MA5Suppressor"; count = 2; };
      class _xx_MEU_M12_Vis_Laser { name = "MEU_M12_Vis_Laser"; count = 2; };
    };
    class TransportMagazines
    {
      class _xx_OPTRE_32Rnd_762x51_Mag_JHP { magazine = "OPTRE_32Rnd_762x51_Mag_JHP"; count = 30; };
      class _xx_1Rnd_HE_MEU_shell { magazine = "1Rnd_HE_MEU_shell"; count = 40; };
      class _xx_1Rnd_9Bang_MEU_shell { magazine = "1Rnd_9Bang_MEU_shell"; count = 10; };
      class _xx_1Rnd_HEDP_MEU_shell { magazine = "1Rnd_HEDP_MEU_shell"; count = 10; };
      class _xx_3Rnd_Airburst_MEU_shell { magazine = "3Rnd_Airburst_MEU_shell"; count = 6; };
      class _xx_ACE_40mm_Flare_white { magazine = "ACE_40mm_Flare_white"; count = 4; };
      class _xx_ACE_40mm_Flare_green { magazine = "ACE_40mm_Flare_green"; count = 4; };
      class _xx_ACE_40mm_Flare_red { magazine = "ACE_40mm_Flare_red"; count = 4; };
      class _xx_ACE_40mm_Flare_ir { magazine = "ACE_40mm_Flare_ir"; count = 4; };
      class _xx_1Rnd_SmokeBlue_Grenade_shell { magazine = "1Rnd_SmokeBlue_Grenade_shell"; count = 4; };
      class _xx_1Rnd_SmokeGreen_Grenade_shell { magazine = "1Rnd_SmokeGreen_Grenade_shell"; count = 4; };
      class _xx_1Rnd_SmokePurple_Grenade_shell { magazine = "1Rnd_SmokePurple_Grenade_shell"; count = 4; };
      class _xx_1Rnd_SmokeRed_Grenade_shell { magazine = "1Rnd_SmokeRed_Grenade_shell"; count = 4; };
      class _xx_1Rnd_Smoke_Grenade_shell { magazine = "1Rnd_Smoke_Grenade_shell"; count = 12; };
    };
    class TransportWeapons
    {
      class _xx_MEU_OPTRE_MA5CGL_Red { weapon = "MEU_OPTRE_MA5CGL_Red"; count = 2; };
    };
  };

  class PF_TicTac_Sniper : PF_TicTac_Empty
  {
    scope = 2;
    displayName = "[PF] Supply Pod (Sniper)";
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\tictacs\_textures\pods\sniper.paa",
    };
    editorPreview = "PF_Gear\tictacs\_textures\previews\sniper.jpg";
    class TransportItems
    {
      class _xx_OPTRE_SRS99C_Scope_v2 { name = "OPTRE_SRS99C_Scope_v2"; count = 1; };
      class _xx_OPTRE_MA37KSuppressor { name = "OPTRE_MA37KSuppressor"; count = 1; };
      class _xx_MEU_M12_Vis_Laser { name = "MEU_M12_Vis_Laser"; count = 1; };
    };
    class TransportMagazines
    {
      class _xx_OPTRE_4Rnd_145x114_Mag_NARQ { magazine = "OPTRE_4Rnd_145x114_Mag_NARQ"; count = 4; };
      class _xx_OPTRE_4Rnd_145x114_APFSDS_Mag { magazine = "OPTRE_4Rnd_145x114_APFSDS_Mag"; count = 26; };
      class _xx_OPTRE_4Rnd_145x114_HEDP_Mag { magazine = "OPTRE_4Rnd_145x114_HEDP_Mag"; count = 8; };
    };
    class TransportWeapons
    {
      class _xx_MEU_OPTRE_SRS99C { weapon = "MEU_OPTRE_SRS99C"; count = 1; };
    };
  };

  class PF_TicTac_Static_M247H : PF_TicTac_Empty
  {
    scope = 2;
    displayName = "[PF] Supply Pod (Static M247H)";
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\tictacs\_textures\pods\m247h.paa",
    };
    editorPreview = "PF_Gear\tictacs\_textures\previews\empty.jpg";
    class TransportMagazines
    {
      class _xx_OPTRE_csw_200Rnd_127x99 { magazine = "OPTRE_csw_200Rnd_127x99"; count = 20; };
    };
    class TransportWeapons
    {
      class _xx_OPTRE_CSW_M247H_Shield_Weapon { weapon = "OPTRE_CSW_M247H_Shield_Weapon"; count = 1; };
      class _xx_OPTRE_CSW_M247H_Carry_Tripod { weapon = "OPTRE_CSW_M247H_Carry_Tripod"; count = 1; };
    };
  };

  class PF_TicTac_Mk6_Mortar : PF_TicTac_Empty
  {
    scope = 2;
    displayName = "[PF] Supply Pod (Mk6 Mortar)";
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\tictacs\_textures\pods\mk6mortar.paa",
    };
    editorPreview = "PF_Gear\tictacs\_textures\previews\empty.jpg";
    class TransportWeapons
    {
      class _xx_ace_csw_staticMortarCarry { weapon = "ace_csw_staticMortarCarry"; count = 1; };
      class _xx_ace_csw_carryMortarBaseplate { weapon = "ace_csw_carryMortarBaseplate"; count = 1; };
    };
  };

  class PF_TicTac_Mk6_Mortar_Ammo : PF_TicTac_Empty
  {
    scope = 2;
    displayName = "[PF] Supply Pod (Mk6 Mortar Ammo)";
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\tictacs\_textures\pods\mk6mortarammo.paa",
    };
    editorPreview = "PF_Gear\tictacs\_textures\previews\empty.jpg";
    class TransportMagazines
    {
      class _xx_ACE_1Rnd_82mm_Mo_HE { magazine = "ACE_1Rnd_82mm_Mo_HE"; count = 30; };
      class _xx_ACE_1Rnd_82mm_Mo_Illum { magazine = "ACE_1Rnd_82mm_Mo_Illum"; count = 5; };
      class _xx_ACE_1Rnd_82mm_Mo_HE_LaserGuided { magazine = "ACE_1Rnd_82mm_Mo_HE_LaserGuided"; count = 10; };
      class _xx_ACE_1Rnd_82mm_Mo_Smoke { magazine = "ACE_1Rnd_82mm_Mo_Smoke"; count = 10; };
    };
  };

  class Module_F;
  class Module_OPTRE_PelicanSupplyDrop : Module_F
  {
    class Arguments
    {
      class box1
      {
        defaultValue = "PF_TicTac_Empty";
        class values
        {
          class pf_pod_none
          {
            name = "none";
            value = "none";
          };
          class pf_pod_random
          {
            name = "Random Supply Pod";
          };
          class pf_pod_medical
          {
            name = "[PF] Supply Pod (Medical)";
            value = "PF_TicTac_Medical";
          };
          class pf_pod_autorifle
          {
            name = "[PF] Supply Pod (Autorifle)";
            value = "PF_TicTac_Autorifle";
          };
          class pf_pod_combat_engineer
          {
            name = "[PF] Supply Pod (Combat Engineer)";
            value = "PF_TicTac_Combat_Engineer";
          };
          class pf_pod_marksman
          {
            name = "[PF] Supply Pod (Marksman)";
            value = "PF_TicTac_Marksman";
          };
          class pf_pod_rifleman
          {
            name = "[PF] Supply Pod (Rifleman)";
            value = "PF_TicTac_Rifleman";
          };
          class pf_pod_sidearms
          {
            name = "[PF] Supply Pod (Sidearms)";
            value = "PF_TicTac_Sidearms";
          };
          class pf_pod_antitank
          {
            name = "[PF] Supply Pod (AntiTank)";
            value = "PF_TicTac_AntiTank";
          };
          class pf_pod_grenadier
          {
            name = "[PF] Supply Pod (Grenadier)";
            value = "PF_TicTac_Grenadier";
          };
          class pf_pod_sniper
          {
            name = "[PF] Supply Pod (Sniper)";
            value = "PF_TicTac_Sniper";
          };
          class pf_pod_static_m247h
          {
            name = "[PF] Supply Pod (Static M247H)";
            value = "PF_TicTac_Static_M247H";
          };
          class pf_pod_mk6_mortar
          {
            name = "[PF] Supply Pod (Mk6 Mortar)";
            value = "PF_TicTac_Mk6_Mortar";
          };
          class pf_pod_mk6_mortar_ammo
          {
            name = "[PF] Supply Pod (Mk6 Mortar Ammo)";
            value = "PF_TicTac_Mk6_Mortar_Ammo";
          };
        };
      };
    };
  };
};
