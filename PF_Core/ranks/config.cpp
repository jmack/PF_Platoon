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
			"PF_Core\ranks\_textures\unicom\O-2 First Lieutenant.paa",
			"PF_Core\ranks\_textures\unicom\O-3 Captain.paa",
			"PF_Core\ranks\_textures\unicom\O-4 Major.paa",
			"PF_Core\ranks\_textures\unicom\O-6 Colonel.paa"
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
    class w1_warrant_officer
    {
      name = "W-1 Warrant Officer";
      icon = "PF_Core\ranks\_textures\W-1 Warrant Officer.paa";
      rank = -1;
    };
    class w2_chief_warrant_officer
    {
      name = "W-2 Chief Warrant Officer";
      icon = "PF_Core\ranks\_textures\W-2 Chief Warrant Officer.paa";
      rank = -1;
    };
    class o0_cadet
    {
      name = "O-0 Cadet";
      icon = "PF_Core\ranks\_textures\unicom\O-0 Cadet.paa";
      rank = -1;
    };
    class o1_second_lieutenant
    {
      name = "O-1 Second Lieutenant";
      icon = "PF_Core\ranks\_textures\unicom\O-1 Second Lieutenant.paa";
      rank = -1;
    };
    class o2_first_lieutenant
    {
      name = "O-2 First Lieutenant";
      icon = "PF_Core\ranks\_textures\unicom\O-2 First Lieutenant.paa";
      rank = 3;
    };
    class o3_captain
    {
      name = "O-3 Captain";
      icon = "PF_Core\ranks\_textures\unicom\O-3 Captain.paa";
      rank = 4;
    };
    class o4_major
    {
      name = "O-4 Major";
      icon = "PF_Core\ranks\_textures\unicom\O-4 Major.paa";
      rank = 5;
    };
    class o5_lieutenant_colonel
    {
      name = "O-5 Lieutenant Colonel";
      icon = "PF_Core\ranks\_textures\unicom\O-5 Lieutenant Colonel.paa";
      rank = -1;
    };
    class o6_colonel
    {
      name = "O-6 Colonel";
      icon = "PF_Core\ranks\_textures\unicom\O-6 Colonel.paa";
      rank = 6;
    };
    class o7_brigadier_general
    {
      name = "O-7 Brigadier General";
      icon = "PF_Core\ranks\_textures\unicom\O-7 Brigadier General.paa";
      rank = -1;
    };
    class o8_major_general
    {
      name = "O-8 Major General";
      icon = "PF_Core\ranks\_textures\unicom\O-8 Major General.paa";
      rank = -1;
    };
    class o9_lieutenant_general
    {
      name = "O-9 Lieutenant General";
      icon = "PF_Core\ranks\_textures\unicom\O-9 Lieutenant General.paa";
      rank = -1;
    };
    class o10_general
    {
      name = "O-10 General";
      icon = "PF_Core\ranks\_textures\unicom\O-10 General.paa";
      rank = -1;
    };
  };
};
