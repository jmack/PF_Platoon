class CfgPatches
{
  class BB_Gear_Uniforms_NASRBDU
  {
    addonRootClass = "BB_Gear_Uniforms";
    author = "wlan0";
    units[] = { };
    weapons[] = { };
    requiredVersion = 1;
    requiredAddons[] = { };
  };
};

/* Metadata */
class XtdGearModels
{
  class CfgWeapons
  {
    class BB_Gear_Uniforms_NASRBDU_Metaitem
    {
      label = "M87 BDU";
      options[] = {
        "bodytype",
        "pattern",
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
      class pattern
      {
        label = "Pattern";
        values[] = {
          "woodland",
        };
        class woodland
        {
          label = "Woodland";
        };
      };
    };
  };
};

/* Arsenal Defs */
class CfgWeapons
{
  class Uniform_Base;
  class ItemInfo;

  // Masc
  // Woodland
  class BB_Gear_Uniforms_NASRBDU_Masc_Woodland: Uniform_Base
  {
    class XtdGearInfo
    {
      model = "BB_Gear_Uniforms_NASRBDU_Metaitem";
      bodytype = "masc";
      pattern = "woodland";
    };

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "M87 BDU";
    modelSides[] = {0, 1, 2, 3};

    class ItemInfo: ItemInfo
    {
      uniformClass = "BB_Gear_Uniforms_NASRBDU_Masc_Woodland";
      uniformType = "Neopren";
    };
  };

  // Femme
  // Woodland
  class BB_Gear_Uniforms_NASRBDU_Femme_Woodland: Uniform_Base
  {
    class XtdGearInfo
    {
      model = "BB_Gear_Uniforms_NASRBDU_Metaitem";
      bodytype = "femme";
      pattern = "woodland";
    };

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "M87 BDU";
    modelSides[] = {0, 1, 2, 3};

    class ItemInfo: ItemInfo
    {
      uniformClass = "BB_Gear_Uniforms_NASRBDU_Femme_Woodland";
      uniformType = "Neopren";
    };
  };
  // Femme Rolled Woodland
};

/* Uniform Defs */
class CfgVehicles
{
  // Masc
  class O_Officer_F;
  // Woodland
  class BB_Gear_Uniforms_NASRBDU_Masc_Woodland: O_Officer_F
  {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "M87 BDU";
    uniformClass = "BB_Gear_Uniforms_NASRBDU_Masc_Woodland";
    modelSides[] = {0, 1, 2, 3};

    hiddenSelections[] = {
      "camo",
    };
    hiddenSelectionsTextures[] = {
      "\BB_Gear\Uniforms\NASR_BDU\data\patterns\woodland.paa",
    };
    hiddenSelectionsMaterials[] = {
      "\BB_Gear\Uniforms\NASR_BDU\data\nasr_bdu.rvmat",
    };
  };

  // Femme
  class WO_Officer_F;
  // Woodland
  class BB_Gear_Uniforms_NASRBDU_Femme_Woodland: WO_Officer_F
  {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "M87 BDU";
    uniformClass = "BB_Gear_Uniforms_NASRBDU_Femme_Woodland";
    modelSides[] = {0, 1, 2, 3};

    hiddenSelections[] = {
      "camo",
    };
    hiddenSelectionsTextures[] = {
      "\BB_Gear\Uniforms\NASR_BDU\data\patterns\woodland.paa",
    };
    hiddenSelectionsMaterials[] = {
      "\BB_Gear\Uniforms\NASR_BDU\data\nasr_bdu.rvmat",
    };
    class eventhandlers
    {
      init = "";
    }
  };
};
