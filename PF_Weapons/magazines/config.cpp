class CfgPatches
{
  class PF_Weapons_Magazines
  {
    author = "OriUnder, 1st MEU, OPTRE";
    addonRootClass = "PF_Weapons";
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "OPTRE_Weapons",
    };
    ammo[] =
    {
      "OPTRE_65_Creedmoor",
      "OPTRE_65_Tracer_Y",
      "OPTRE_65_Tracer_R",
    };
  };
};

class CfgAmmo
{
  class B_93x64_Ball;
  class OPTRE_65_Creedmoor : B_93x64_Ball
  {
    cartridge = "FxCartridge_65";
  };
  class OPTRE_65_Tracer_Y : OPTRE_65_Creedmoor
  {
    cartridge = "FxCartridge_65";
    model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
  };
  class OPTRE_65_Tracer_R : OPTRE_65_Creedmoor
  {
    cartridge = "FxCartridge_65";
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
  };
};


class CfgMagazines
{
  class Commando_20Rnd_65_Mag;
  class PF_15Rnd_65_Creedmoor_DMR_Mag : Commando_20Rnd_65_Mag
  {
    dlc = "OPTRE";
    model = "\OPTRE_Weapons\Commando\Commando_Mag.p3d";
    displayname = "15Rnd 6.5 Creedmoor Magazine";
    displaynameshort = "6.5 Creedmoor";
    ammo = "OPTRE_65_Creedmoor";
    count = 15;
    initspeed = 900;
    picture = "\OPTRE_weapons\ar\icons\magazine.paa";
    descriptionshort = "15 Round Magazine<br>6.5 Creedmoor";
    mass = 12;
    tracersEvery = 0;
    lastRoundsTracer = 15;
  };
  class PF_15Rnd_65_TracerY_Mag : PF_15Rnd_65_Creedmoor_DMR_Mag
  {
    dlc = "OPTRE";
    model = "\OPTRE_Weapons\Commando\Commando_Mag.p3d";
    displayname = "15Rnd 6.5 Magazine (Tracers Yellow)";
    displaynameshort = "6.5 Creed Tracer";
    ammo = "OPTRE_65_Tracer_Y";
    count = 15;
    initspeed = 900;
    picture = "\OPTRE_weapons\ar\icons\magazine.paa";
    descriptionshort = "15 Round Magazine<br>6.5 Tracer Yellow";
    mass = 12;
    tracersEvery = 1;
    lastRoundsTracer = 15;
  };
  class PF_15Rnd_65_TracerR_Mag : PF_15Rnd_65_Creedmoor_DMR_Mag
  {
    dlc = "OPTRE";
    model = "\OPTRE_Weapons\Commando\Commando_Mag.p3d";
    displayname = "15Rnd 6.5 Magazine (Tracers Red)";
    displaynameshort = "6.5 Creed Tracer";
    ammo = "OPTRE_65_Tracer_R";
    count = 15;
    initspeed = 900;
    picture = "\OPTRE_weapons\ar\icons\magazine.paa";
    descriptionshort = "15 Round Magazine<br>6.5 Tracer Red";
    mass = 12;
    tracersEvery = 1;
    lastRoundsTracer = 15;
  };
};