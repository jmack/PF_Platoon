class CfgPatches
{
  class PF_Rank_Insignia
  {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "etr_ranks_assets",
    };
  };
};

class etr_ranks_insignias
{
  class unsc_unicom
  {
    name = "UNSC - UNICOM";
    values[] =
    {
			"PF_Core\ranks\_textures\unicom\E-2 Private First Class.paa",
			"PF_Core\ranks\_textures\unicom\E-4 Corporal.paa",
			"PF_Core\ranks\_textures\unicom\E-5 Sergeant.paa",
			"\z\etr_ranks\addons\assets\data\us_army\O-2 First Lieutenant.paa",
			"\z\etr_ranks\addons\assets\data\us_army\O-3 Captain.paa",
			"\z\etr_ranks\addons\assets\data\us_army\O-4 Major.paa",
			"\z\etr_ranks\addons\assets\data\us_army\O-6 Colonel.paa"
    };
    class default_rank
    {
      name = "Default";
      icon = "";
      rank = -1;
    };
    class e1_private
    {
      name = "E-1 Private";
      icon = "PF_Core\ranks\_textures\blank.paa";
      rank = 0;
    };
    class e2_private_first_class
    {
      name = "E-2 Private First Class";
      icon = "PF_Core\ranks\_textures\unicom\E-2 Private First Class.paa";
      rank = -1;
    };
    class e3_lance_corporal
    {
      name = "E-3 Lance Corporal";
      icon = "PF_Core\ranks\_textures\unicom\E-3 Lance Corporal.paa";
      rank = -1;
    };
    class e4_corporal
    {
      name = "E-4 Corporal";
      icon = "PF_Core\ranks\_textures\unicom\E-4 Corporal.paa";
      rank = 1;
    };
    class e5_sergeant
    {
      name = "E-5 Sergeant";
      icon = "PF_Core\ranks\_textures\unicom\E-5 Sergeant.paa";
      rank = 2;
    };
    class e6_staff_sergeant
    {
      name = "E-6 Staff Sergeant";
      icon = "PF_Core\ranks\_textures\unicom\E-6 Staff Sergeant.paa";
      rank = -1;
    };
    class e7_gunnery_sergeant
    {
      name = "E-7 Gunnery Sergeant";
      icon = "PF_Core\ranks\_textures\unicom\E-7 Gunnery Sergeant.paa";
      rank = -1;
    };
    class e8_master_sergeant
    {
      name = "E-8 Master Sergeant";
      icon = "PF_Core\ranks\_textures\unicom\E-8 Master Sergeant.paa";
      rank = -1;
    };
    class e8_first_sergeant
    {
      name = "E-8 First Sergeant";
      icon = "PF_Core\ranks\_textures\unicom\E-8 First Sergeant.paa";
      rank = -1;
    };
    class e9_master_gunnery_sergeant
    {
      name = "E-9 Master Gunnery Sergeant";
      icon = "PF_Core\ranks\_textures\unicom\E-9 Master Gunnery Sergeant.paa";
      rank = -1;
    };
    class e9_sergeant_major
    {
      name = "E-9 Sergeant Major";
      icon = "PF_Core\ranks\_textures\unicom\E-9 Sergeant Major.paa";
      rank = -1;
    };
    // class w1_warrant_officer
    // {
    //   name = "";
    //   icon = "";
    //   rank = -1;
    // };
    // class w2_chief_warrant_officer
    // {
    //   name = "";
    //   icon = "";
    //   rank = -1;
    // };
    // class o0_cadet
    // {
    //   name = "";
    //   icon = "";
    //   rank = -1;
    // };
    // class o1_second_lieutenant
    // {
    //   name = "";
    //   icon = "";
    //   rank = -1;
    // };
    // class o2_first_lieutenant
    // {
    //   name = "";
    //   icon = "";
    //   rank = 3;
    // };
    // class o3_captain
    // {
    //   name = "";
    //   icon = "";
    //   rank = 4;
    // };
    // class o4_major
    // {
    //   name = "";
    //   icon = "";
    //   rank = 5;
    // };
    // class o5_lieutenant_colonel
    // {
    //   name = "";
    //   icon = "";
    //   rank = -1;
    // };
    // class o6_colonel
    // {
    //   name = "";
    //   icon = "";
    //   rank = 6;
    // };
    // class o7_brigadier_general
    // {
    //   name = "";
    //   icon = "";
    //   rank = -1;
    // };
    // class o8_major_general
    // {
    //   name = "";
    //   icon = "";
    //   rank = -1;
    // };
    // class o9_lieutenant_general
    // {
    //   name = "";
    //   icon = "";
    //   rank = -1;
    // };
    // class o10_general
    // {
    //   name = "";
    //   icon = "";
    //   rank = -1;
    // };
  };
};
