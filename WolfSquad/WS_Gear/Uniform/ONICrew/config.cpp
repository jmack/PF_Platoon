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
      label = "ONI Crew Uniform";
      options[] = {
        "bodytype",
        "type",
        "rank",
      };
      class bodytype
      {
        label = "Body Type";
        alwaysSelectable = 1;
        values[] =
        {
          "masc",
          "femme",
        };
        class masc
        {
          label = "Masc";
        };
        class femme
        {
          label = "Femme";
        };
      };
      class type
      {
        label = "Type";
        alwaysSelectable = 1;
        values[] =
        {
          "crew",
          "engineering",
          "medical",
          "vehicle",
        };
        class crew
        {
          label = "Crew";
        };
        class engineering
        {
          label = "Engineering";
        };
        class medical
        {
          label = "Medical";
        };
        class vehicle
        {
          label = "Vehicle";
        };
      };
      class rank
      {
        label = "Rank";
        alwaysSelectable = 0;
        values[] =
        {
          "none",
          "cdr",
          "lcdr",
          "lt",
          "ltjg",
          "ens",
          "hnsc",
          "cpo",
          "hmc",
          "po1",
          "hm1",
          "po2",
          "hm2",
          "po3",
          "hm3",
          "cn",
          "hn",
          "ca",
          "ha",
          "cr",
          "hr",
        };
        class none
        {
          label = "None";
        };
        class cdr
        {
          label = "CDR";
          description = "O-5 : Commander";
        };
        class lcdr
        {
          label = "LCDR";
          description = "O-4 : Lieutenant Commander";
        };
        class lt
        {
          label = "LT";
          description = "O-3 : Lieutenant";
        };
        class ltjg
        {
          label = "LTJG";
          description = "O-2 : Lieutenant Junior Grade";
        };
        class ens
        {
          label = "ENS";
          description = "O-1 : Ensign";
        };
        class hnsc
        {
          label = "HNSC";
          description = "E-8 : Senior Chief Hospital Corpsman";
        };
        class cpo
        {
          label = "CPO";
          description = "E-7 : Chief Petty Officer";
        };
        class hmc
        {
          label = "HMC";
          description = "E-7 : Chief Hospital Corpsman";
        }
        class po1
        {
          label = "PO1";
          description = "E-6 : Petty Officer First Class";
        };
        class hm1
        {
          label = "HM1";
          description = "E-6 : Hospital Corpsman First Class";
        };
        class po2
        {
          label = "PO2";
          description = "E-5 : Petty Officer Second Class";
        };
        class hm2
        {
          label = "HM2";
          description = "E-5 : Hospital Corpsman Second Class";
        };
        class po3
        {
          label = "PO3";
          description = "E-4 : Petty Officer Third Class";
        };
        class hm3
        {
          label = "HM3";
          description = "E-4 : Hospital Corpsman Third Class";
        };
        class cn
        {
          label = "CN";
          description = "E-3 : Crewman";
        };
        class hn
        {
          label = "HN";
          description = "E-3 : Hospitalman";
        };
        class ca
        {
          label = "CA";
          description = "E-2 : Crewman Apprentice";
        };
        class ha
        {
          label = "HA";
          description = "E-2 : Hospitalman Apprentice";
        };
        class cr
        {
          label = "CR";
          description = "E-1 : Crewman Recruit";
        };
        class hr
        {
          label = "HR";
          description = "E-1 : Hospitalman Recruit";
        };
      };
    };
  };
};

/* Arsenal Defs */
class CfgWeapons
{
  class Uniform_Base;
  class UniformItem;
  class ItemInfo;

  // Crew - Black
  class WS_Gear_Uniform_ONICrew_M_Black: Uniform_Base
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "crew";
      rank = "none";
    };

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
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

  class WS_Gear_Uniform_ONICrew_F_Black: Uniform_Base
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "crew";
      rank = "none";
    };

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    dlc = "WS";
    author = "wlan0";
    displayName = "[WS] ONI Crew Uniform";
    picture = "WS_Images\Common\oni.paa";

    class ItemInfo: UniformItem
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Black";
      containerClass = "Supply30";
      mass = 10;
    };
  };

  // Engineering - Red
  class WS_Gear_Uniform_ONICrew_M_Red: WS_Gear_Uniform_ONICrew_M_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "engineering";
      rank = "none";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Red";
    };
  };

  class WS_Gear_Uniform_ONICrew_F_Red: WS_Gear_Uniform_ONICrew_F_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "engineering";
      rank = "none";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Red";
    };
  };

  // Medical - White
  class WS_Gear_Uniform_ONICrew_M_White: WS_Gear_Uniform_ONICrew_M_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "medical";
      rank = "none";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_White";
    };
  };

  class WS_Gear_Uniform_ONICrew_F_White: WS_Gear_Uniform_ONICrew_F_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "medical";
      rank = "none";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_White";
    };
  };

  // Vehicle - Yellow
  class WS_Gear_Uniform_ONICrew_M_Yellow: WS_Gear_Uniform_ONICrew_M_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "vehicle";
      rank = "none";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Yellow";
    };
  };

  class WS_Gear_Uniform_ONICrew_F_Yellow: WS_Gear_Uniform_ONICrew_F_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "vehicle";
      rank = "none";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Yellow";
    };
  };

  /* Special */
  // Black, CDR
  class WS_Gear_Uniform_ONICrew_M_Black_CDR: WS_Gear_Uniform_ONICrew_M_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "crew";
      rank = "cdr";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_CDR";
    };
  };
  // Black, LCDR
  class WS_Gear_Uniform_ONICrew_M_Black_LCDR: WS_Gear_Uniform_ONICrew_M_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "crew";
      rank = "lcdr";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_LCDR";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_LCDR: WS_Gear_Uniform_ONICrew_F_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "crew";
      rank = "lcdr";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_LCDR";
    };
  };
  // Black, LT
  class WS_Gear_Uniform_ONICrew_M_Black_LT: WS_Gear_Uniform_ONICrew_M_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "crew";
      rank = "lt";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_LT";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_LT: WS_Gear_Uniform_ONICrew_F_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "crew";
      rank = "lt";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_LT";
    };
  };
  // Black, LTJG
  class WS_Gear_Uniform_ONICrew_M_Black_LTJG: WS_Gear_Uniform_ONICrew_M_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "crew";
      rank = "ltjg";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_LTJG";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_LTJG: WS_Gear_Uniform_ONICrew_F_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "crew";
      rank = "ltjg";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_LTJG";
    };
  };
  // Black, ENS
  class WS_Gear_Uniform_ONICrew_M_Black_ENS: WS_Gear_Uniform_ONICrew_M_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "crew";
      rank = "ens";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_ENS";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_ENS: WS_Gear_Uniform_ONICrew_F_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "crew";
      rank = "ens";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_ENS";
    };
  };
  // Black, CPO
  class WS_Gear_Uniform_ONICrew_M_Black_CPO: WS_Gear_Uniform_ONICrew_M_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "crew";
      rank = "cpo";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_CPO";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_CPO: WS_Gear_Uniform_ONICrew_F_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "crew";
      rank = "cpo";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_CPO";
    };
  };
  // Black, PO1
  class WS_Gear_Uniform_ONICrew_M_Black_PO1: WS_Gear_Uniform_ONICrew_M_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "crew";
      rank = "po1";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_PO1";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_PO1: WS_Gear_Uniform_ONICrew_F_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "crew";
      rank = "po1";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_PO1";
    };
  };
  // Black, PO2
  class WS_Gear_Uniform_ONICrew_M_Black_PO2: WS_Gear_Uniform_ONICrew_M_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "crew";
      rank = "po2";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_PO2";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_PO2: WS_Gear_Uniform_ONICrew_F_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "crew";
      rank = "po2";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_PO2";
    };
  };
  // Black, PO3
  class WS_Gear_Uniform_ONICrew_M_Black_PO3: WS_Gear_Uniform_ONICrew_M_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "crew";
      rank = "po3";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_PO3";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_PO3: WS_Gear_Uniform_ONICrew_F_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "crew";
      rank = "po3";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_PO3";
    };
  };
  // Black, CN
  class WS_Gear_Uniform_ONICrew_M_Black_CN: WS_Gear_Uniform_ONICrew_M_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "crew";
      rank = "cn";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_CN";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_CN: WS_Gear_Uniform_ONICrew_F_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "crew";
      rank = "cn";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_CN";
    };
  };
  // Black, CA
  class WS_Gear_Uniform_ONICrew_M_Black_CA: WS_Gear_Uniform_ONICrew_M_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "crew";
      rank = "ca";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_CA";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_CA: WS_Gear_Uniform_ONICrew_F_Black
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "crew";
      rank = "ca";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_CA";
    };
  };

  // Red, CPO
  class WS_Gear_Uniform_ONICrew_M_Red_CPO: WS_Gear_Uniform_ONICrew_M_Red
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "engineering";
      rank = "cpo";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Red_CPO";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Red_CPO: WS_Gear_Uniform_ONICrew_F_Red
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "engineering";
      rank = "cpo";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Red_CPO";
    };
  };
  // Red, PO2
  class WS_Gear_Uniform_ONICrew_M_Red_PO2: WS_Gear_Uniform_ONICrew_M_Red
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "engineering";
      rank = "po2";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Red_PO2";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Red_PO2: WS_Gear_Uniform_ONICrew_F_Red
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "engineering";
      rank = "po2";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Red_PO2";
    };
  };
  // Red, CN
  class WS_Gear_Uniform_ONICrew_M_Red_CN: WS_Gear_Uniform_ONICrew_M_Red
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "engineering";
      rank = "cn";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Red_CN";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Red_CN: WS_Gear_Uniform_ONICrew_F_Red
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "engineering";
      rank = "cn";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Red_CN";
    };
  };

  // White, LTJG
  class WS_Gear_Uniform_ONICrew_M_White_LTJG: WS_Gear_Uniform_ONICrew_M_White
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "medical";
      rank = "ltjg";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_White_LTJG";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_White_LTJG: WS_Gear_Uniform_ONICrew_F_White
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "medical";
      rank = "ltjg";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_White_LTJG";
    };
  };
  // White, HNSC
  class WS_Gear_Uniform_ONICrew_M_White_HNSC: WS_Gear_Uniform_ONICrew_M_White
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "medical";
      rank = "hnsc";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_White_HNSC";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_White_HNSC: WS_Gear_Uniform_ONICrew_F_White
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "medical";
      rank = "hnsc";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_White_HNSC";
    };
  };
  // White, HN
  class WS_Gear_Uniform_ONICrew_M_White_HN: WS_Gear_Uniform_ONICrew_M_White
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "medical";
      rank = "hn";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_White_HN";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_White_HN: WS_Gear_Uniform_ONICrew_F_White
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "medical";
      rank = "hn";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_White_HN";
    };
  };

  // Yellow, CPO
  class WS_Gear_Uniform_ONICrew_M_Yellow_CPO: WS_Gear_Uniform_ONICrew_M_Yellow
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "vehicle";
      rank = "cpo";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Yellow_CPO";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Yellow_CPO: WS_Gear_Uniform_ONICrew_F_Yellow
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "vehicle";
      rank = "cpo";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Yellow_CPO";
    };
  };
  // Yellow, PO3
  class WS_Gear_Uniform_ONICrew_M_Yellow_PO3: WS_Gear_Uniform_ONICrew_M_Yellow
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "vehicle";
      rank = "po3";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Yellow_PO3";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Yellow_PO3: WS_Gear_Uniform_ONICrew_F_Yellow
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "vehicle";
      rank = "po3";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Yellow_PO3";
    };
  };
  // Yellow, CN
  class WS_Gear_Uniform_ONICrew_M_Yellow_CN: WS_Gear_Uniform_ONICrew_M_Yellow
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "vehicle";
      rank = "cn";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Yellow_CN";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Yellow_CN: WS_Gear_Uniform_ONICrew_F_Yellow
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "vehicle";
      rank = "cn";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Yellow_CN";
    };
  };
  // Yellow, CA
  class WS_Gear_Uniform_ONICrew_M_Yellow_CA: WS_Gear_Uniform_ONICrew_M_Yellow
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "masc";
      type = "vehicle";
      rank = "ca";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_M_Yellow_CA";
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Yellow_CA: WS_Gear_Uniform_ONICrew_F_Yellow
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_ONICrew_Metaitem";
      bodytype = "femme";
      type = "vehicle";
      rank = "ca";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_ONICrew_F_Yellow_CA";
    };
  };
};

/* Uniform Defs */
class CfgVehicles
{
  class B_Soldier_base_F;

  // Crew - Black
  class WS_Gear_Uniform_ONICrew_M_Black: B_Soldier_base_F
  {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Black";
    model = "\A3\Characters_F_Exp\Gendarmerie\B_GEN_Commander_F.p3d";
    
    hiddenSelections[]=
    {
      "camo",
      "insignia"
    };
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\base.paa"
    };
  };

  class WS_Gear_Uniform_ONICrew_F_Black: B_Soldier_base_F
  {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Black";
    model = "TCGM_Girls\model\TCGM_f_Soldier.p3d";
    
    hiddenSelections[]=
    {
      "camo",
      "camo1",
      "insignia"
    };
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\base.paa",
      "WS_Gear\Uniform\ONICrew\_textures\black\base.paa"
    };
  };

  // Engineering - Red
  class WS_Gear_Uniform_ONICrew_M_Red: WS_Gear_Uniform_ONICrew_M_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Red";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\red\base.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Red: WS_Gear_Uniform_ONICrew_F_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Red";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\red\base.paa",
      "WS_Gear\Uniform\ONICrew\_textures\red\base.paa"
    };
  };

  // Medical - White
  class WS_Gear_Uniform_ONICrew_M_White: WS_Gear_Uniform_ONICrew_M_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_White";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\white\base.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_White: WS_Gear_Uniform_ONICrew_F_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_White";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\white\base.paa",
      "WS_Gear\Uniform\ONICrew\_textures\white\base.paa"
    };
  };

  // Vehicle - Yellow
  class WS_Gear_Uniform_ONICrew_M_Yellow: WS_Gear_Uniform_ONICrew_M_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Yellow";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\yellow\base.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Yellow: WS_Gear_Uniform_ONICrew_F_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Yellow";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\yellow\base.paa",
      "WS_Gear\Uniform\ONICrew\_textures\yellow\base.paa"
    };
  };

  /* Special */
  // Black, CDR
  class WS_Gear_Uniform_ONICrew_M_Black_CDR: WS_Gear_Uniform_ONICrew_M_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_CDR";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\cdr.paa"
    };
  };
  // Black, LCDR
  class WS_Gear_Uniform_ONICrew_M_Black_LCDR: WS_Gear_Uniform_ONICrew_M_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_LCDR";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\lcdr.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_LCDR: WS_Gear_Uniform_ONICrew_F_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_LCDR";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\lcdr.paa",
      "WS_Gear\Uniform\ONICrew\_textures\black\lcdr.paa"
    };
  };
  // Black, LT
  class WS_Gear_Uniform_ONICrew_M_Black_LT: WS_Gear_Uniform_ONICrew_M_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_LT";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\lt.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_LT: WS_Gear_Uniform_ONICrew_F_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_LT";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\lt.paa",
      "WS_Gear\Uniform\ONICrew\_textures\black\lt.paa"
    };
  };
  // Black, LTJG
  class WS_Gear_Uniform_ONICrew_M_Black_LTJG: WS_Gear_Uniform_ONICrew_M_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_LTJG";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\ltjg.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_LTJG: WS_Gear_Uniform_ONICrew_F_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_LTJG";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\ltjg.paa",
      "WS_Gear\Uniform\ONICrew\_textures\black\ltjg.paa"
    };
  };
  // Black, ENS
  class WS_Gear_Uniform_ONICrew_M_Black_ENS: WS_Gear_Uniform_ONICrew_M_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_ENS";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\ens.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_ENS: WS_Gear_Uniform_ONICrew_F_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_ENS";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\ens.paa",
      "WS_Gear\Uniform\ONICrew\_textures\black\ens.paa"
    };
  };
  // Black, CPO
  class WS_Gear_Uniform_ONICrew_M_Black_CPO: WS_Gear_Uniform_ONICrew_M_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_CPO";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\cpo.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_CPO: WS_Gear_Uniform_ONICrew_F_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_CPO";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\cpo.paa",
      "WS_Gear\Uniform\ONICrew\_textures\black\cpo.paa"
    };
  };
  // Black, PO1
  class WS_Gear_Uniform_ONICrew_M_Black_PO1: WS_Gear_Uniform_ONICrew_M_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_PO1";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\po1.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_PO1: WS_Gear_Uniform_ONICrew_F_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_PO1";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\po1.paa",
      "WS_Gear\Uniform\ONICrew\_textures\black\po1.paa"
    };
  };
  // Black, PO2
  class WS_Gear_Uniform_ONICrew_M_Black_PO2: WS_Gear_Uniform_ONICrew_M_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_PO2";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\po2.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_PO2: WS_Gear_Uniform_ONICrew_F_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_PO2";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\po2.paa",
      "WS_Gear\Uniform\ONICrew\_textures\black\po2.paa"
    };
  };
  // Black, PO3
  class WS_Gear_Uniform_ONICrew_M_Black_PO3: WS_Gear_Uniform_ONICrew_M_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_PO3";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\po3.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_PO3: WS_Gear_Uniform_ONICrew_F_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_PO3";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\po3.paa",
      "WS_Gear\Uniform\ONICrew\_textures\black\po3.paa"
    };
  };
  // Black, CN
  class WS_Gear_Uniform_ONICrew_M_Black_CN: WS_Gear_Uniform_ONICrew_M_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_CN";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\cn.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_CN: WS_Gear_Uniform_ONICrew_F_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_CN";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\cn.paa",
      "WS_Gear\Uniform\ONICrew\_textures\black\cn.paa"
    };
  };
  // Black, CA
  class WS_Gear_Uniform_ONICrew_M_Black_CA: WS_Gear_Uniform_ONICrew_M_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Black_CA";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\ca.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Black_CA: WS_Gear_Uniform_ONICrew_F_Black
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Black_CA";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\black\ca.paa",
      "WS_Gear\Uniform\ONICrew\_textures\black\ca.paa"
    };
  };

  // Red, CPO
  class WS_Gear_Uniform_ONICrew_M_Red_CPO: WS_Gear_Uniform_ONICrew_M_Red
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Red_CPO";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\red\cpo.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Red_CPO: WS_Gear_Uniform_ONICrew_F_Red
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Red_CPO";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\red\cpo.paa",
      "WS_Gear\Uniform\ONICrew\_textures\red\cpo.paa"
    };
  };
  // Red, PO2
  class WS_Gear_Uniform_ONICrew_M_Red_PO2: WS_Gear_Uniform_ONICrew_M_Red
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Red_PO2";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\red\po2.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Red_PO2: WS_Gear_Uniform_ONICrew_F_Red
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Red_PO2";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\red\po2.paa",
      "WS_Gear\Uniform\ONICrew\_textures\red\po2.paa"
    };
  };
  // Red, CN
  class WS_Gear_Uniform_ONICrew_M_Red_CN: WS_Gear_Uniform_ONICrew_M_Red
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Red_CN";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\red\cn.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Red_CN: WS_Gear_Uniform_ONICrew_F_Red
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Red_CN";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\red\cn.paa",
      "WS_Gear\Uniform\ONICrew\_textures\red\cn.paa"
    };
  };

  // White, LTJG
  class WS_Gear_Uniform_ONICrew_M_White_LTJG: WS_Gear_Uniform_ONICrew_M_White
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_White_LTJG";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\white\ltjg.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_White_LTJG: WS_Gear_Uniform_ONICrew_F_White
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_White_LTJG";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\white\ltjg.paa",
      "WS_Gear\Uniform\ONICrew\_textures\white\ltjg.paa"
    };
  };
  // White, HNSC
  class WS_Gear_Uniform_ONICrew_M_White_HNSC: WS_Gear_Uniform_ONICrew_M_White
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_White_HNSC";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\white\hnsc.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_White_HNSC: WS_Gear_Uniform_ONICrew_F_White
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_White_HNSC";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\white\hnsc.paa",
      "WS_Gear\Uniform\ONICrew\_textures\white\hnsc.paa"
    };
  };
  // White, HN
  class WS_Gear_Uniform_ONICrew_M_White_HN: WS_Gear_Uniform_ONICrew_M_White
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_White_HN";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\white\hn.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_White_HN: WS_Gear_Uniform_ONICrew_F_White
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_White_HN";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\white\hn.paa",
      "WS_Gear\Uniform\ONICrew\_textures\white\hn.paa"
    };
  };

  // Yellow, CPO
  class WS_Gear_Uniform_ONICrew_M_Yellow_CPO: WS_Gear_Uniform_ONICrew_M_Yellow
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Yellow_CPO";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\yellow\cpo.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Yellow_CPO: WS_Gear_Uniform_ONICrew_F_Yellow
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Yellow_CPO";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\yellow\cpo.paa",
      "WS_Gear\Uniform\ONICrew\_textures\yellow\cpo.paa"
    };
  };
  // Yellow, PO3
  class WS_Gear_Uniform_ONICrew_M_Yellow_PO3: WS_Gear_Uniform_ONICrew_M_Yellow
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Yellow_PO3";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\yellow\po3.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Yellow_PO3: WS_Gear_Uniform_ONICrew_F_Yellow
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Yellow_PO3";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\yellow\po3.paa",
      "WS_Gear\Uniform\ONICrew\_textures\yellow\po3.paa"
    };
  };
  // Yellow, CN
  class WS_Gear_Uniform_ONICrew_M_Yellow_CN: WS_Gear_Uniform_ONICrew_M_Yellow
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Yellow_CN";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\yellow\cn.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Yellow_CN: WS_Gear_Uniform_ONICrew_F_Yellow
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Yellow_CN";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\yellow\cn.paa",
      "WS_Gear\Uniform\ONICrew\_textures\yellow\cn.paa"
    };
  };
  // Yellow, CA
  class WS_Gear_Uniform_ONICrew_M_Yellow_CA: WS_Gear_Uniform_ONICrew_M_Yellow
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_M_Yellow_CA";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\yellow\ca.paa"
    };
  };
  class WS_Gear_Uniform_ONICrew_F_Yellow_CA: WS_Gear_Uniform_ONICrew_F_Yellow
  {
    uniformClass = "WS_Gear_Uniform_ONICrew_F_Yellow_CA";
    hiddenSelectionsTextures[]=
    {
      "WS_Gear\Uniform\ONICrew\_textures\yellow\ca.paa",
      "WS_Gear\Uniform\ONICrew\_textures\yellow\ca.paa"
    };
  };
};
