class CfgPatches
{
  class NASR_Props_Flags
  {
    units[] =
    {
      "NASR_Props_Flags_NASR",
      "NASR_Props_Flags_Fash_Argentina",
      "NASR_Props_Flags_Red_Argentina",
      "NASR_Props_Flags_Fash_Spain",
    };
    weapons[] = { };
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "A3_Structures_F",
      "A3_Structures_F_Mil_Flags"
    };
    version = "1.0";
    name = "NASR Flag Props";
    author = "wlan0";
    addonRootClass = "NASR_Props";
  };
};

class CfgVehicles
{
  class Flag_White_F;
  class NASR_Props_Flags_NASR : Flag_White_F
  {
    author = "wlan0";
    scope = 2;
    scopeCurator = 2;
    displayName = "Flag (N.A.S.R.)";

    class DefaultEventhandlers;
    class EventHandlers : DefaultEventhandlers
    {
      init = "(_this select 0) setFlagTexture 'NASR_Factions\BLUFOR\NASR\data\flag.paa'";
    };
  };

  class NASR_Props_Flags_Fash_Argentina : Flag_White_F
  {
    author = "wlan0";
    scope = 2;
    scopeCurator = 2;
    displayName = "Flag (Fascist Argentina)";

    class DefaultEventhandlers;
    class EventHandlers : DefaultEventhandlers
    {
      init = "(_this select 0) setFlagTexture 'NASR_Factions\OPFOR\Argentina\data\flag.paa'";
    };
  };

  class NASR_Props_Flags_Red_Argentina : Flag_White_F
  {
    author = "wlan0";
    scope = 2;
    scopeCurator = 2;
    displayName = "Flag (Red Argentina)";

    class DefaultEventhandlers;
    class EventHandlers : DefaultEventhandlers
    {
      init = "(_this select 0) setFlagTexture 'NASR_Factions\BLUFOR\PRA\_data\flag.paa'";
    };
  };

  
  class NASR_Props_Flags_Fash_Spain : Flag_White_F
  {
    author = "wlan0";
    scope = 2;
    scopeCurator = 2;
    displayName = "Flag (Fascist Spain)";

    class DefaultEventhandlers;
    class EventHandlers : DefaultEventhandlers
    {
      init = "(_this select 0) setFlagTexture 'NASR_Factions\OPFOR\Spain\data\flag.paa'";
    };
  };
};
