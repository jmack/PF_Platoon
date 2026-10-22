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



/**
 * MASC ----
 * reqs = A3_Characters_F_Exp
 * model = \A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d
 * inherit from = Uniform_Base;

class U_I_C_Soldier_Para_4_F: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_U_I_C_Soldier_Para_4_F0";
		picture="\A3\characters_f_exp\syndikat\data\ui\icon_U_I_C_Soldier_Para_4_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_1_co.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_C_Soldier_Para_4_F";
			containerClass="Supply40";
			mass=40;
		};
	};

 */

/**
 * FEMME ----
 * reqs = TCGM_Girls
 * model = 
 * inherit from = TCGM_F_SoldierParamilitary
 * 1 hidden selection texture

 CfgWeapons

	class TCGM_F_SoldierParamilitary: TCGM_F_Soldier2
	{
		author="TCGM";
		DLC="TCGM_Girls";
		displayName="$STR_TCGM_F_SoldierParamilitary";
		picture="\TCGM_Girls\textures\ui\TCGM_icon_f_SoldierParamilitary_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TCGM_F_SoldierParamilitary_I";
			containerClass="Supply40";
			mass=50;
		};
	};


 */
