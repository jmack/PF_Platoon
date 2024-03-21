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

  class unsc_navcom
  {
    name = "UNSC - NAVCOM";
    values[] =
    {
			"PF_Core\ranks\_textures\navcom\E-2 Crewman Apprentice.paa",
			"PF_Core\ranks\_textures\navcom\E-4 Petty Officer Third Class.paa",
			"PF_Core\ranks\_textures\navcom\E-7 Chief Petty Officer.paa",
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
    class e1_crewman_recruit
    {
      name = "E-1 Crewman Recruit";
      icon = "PF_Core\ranks\_textures\blank.paa";
      rank = -1;
    };
    class e1_hospitalman_recruit
    {
      name = "E-1 Hospitalman Recruit";
      icon = "PF_Core\ranks\_textures\blank.paa";
      rank = -1;
    };
    class e2_crewman_apprentice
    {
      name = "E2 - Crewman Apprentice";
      icon = "PF_Core\ranks\_textures\navcom\E-2 Crewman Apprentice.paa";
      rank = 0;
    };
    class e2_hospitalman_apprentice
    {
      name = "E2 - Hospitalman Apprentice";
      icon = "PF_Core\ranks\_textures\navcom\E-2 Hospitalman Apprentice.paa";
      rank = 0;
    };
    class e3_crewman
    {
      name = "E3 - Crewman";
      icon = "PF_Core\ranks\_textures\navcom\E-3 Crewman.paa";
      rank = -1;
    };
    class e3_hospitalman
    {
      name = "E3 - Hospitalman";
      icon = "PF_Core\ranks\_textures\navcom\E-3 Hospitalman.paa";
      rank = -1;
    };
    class e4_petty_officer_third_class
    {
      name = "E4 - Petty Officer Third Class";
      icon = "PF_Core\ranks\_textures\navcom\E-4 Petty Officer Third Class.paa";
      rank = 1;
    };
    class e4_hospital_corpsman_third_class
    {
      name = "E4 - Hospital Corpsman Third Class";
      icon = "PF_Core\ranks\_textures\navcom\E-4 Hospital Corpsman Third Class.paa";
      rank = 1;
    };
    class e5_petty_officer_second_class
    {
      name = "E5 - Petty Officer Second Class";
      icon = "PF_Core\ranks\_textures\navcom\E-5 Petty Officer Second Class.paa";
      rank = -1;
    };
    class e5_hospital_corpsman_second_class
    {
      name = "E5 - Hospital Corpsman Second Class";
      icon = "PF_Core\ranks\_textures\navcom\E-5 Hospital Corpsman Second Class.paa";
      rank = -1;
    };
    class e6_petty_officer_first_class
    {
      name = "E6 - Petty Officer First Class";
      icon = "PF_Core\ranks\_textures\navcom\E-6 Petty Officer First Class.paa";
      rank = -1;
    };
    class e6_hospital_corpsman_first_class
    {
      name = "E6 - Hospital Corpsman First Class";
      icon = "PF_Core\ranks\_textures\navcom\E-6 Hospital Corpsman First Class.paa";
      rank = -1;
    };
    class e7_chief_petty_officer
    {
      name = "E7 - Chief Petty Officer";
      icon = "PF_Core\ranks\_textures\navcom\E-7 Chief Petty Officer.paa";
      rank = 2;
    };
    class e7_chief_hospital_corpsman
    {
      name = "E7 - Chief Hospital Corpsman";
      icon = "PF_Core\ranks\_textures\navcom\E-7 Chief Hospital Corpsman.paa";
      rank = 2;
    };
    class e8_senior_chief_petty_officer
    {
      name = "E8 - Senior Chief Petty Officer";
      icon = "PF_Core\ranks\_textures\navcom\E-8 Senior Chief Petty Officer.paa";
      rank = -1;
    };
    class e8_senior_chief_hospital_corpsman
    {
      name = "E8 - Senior Chief Hospital Corpsman";
      icon = "PF_Core\ranks\_textures\navcom\E-8 Senior Chief Hospital Corpsman.paa";
      rank = -1;
    };
    class e9_master_chief_petty_officer
    {
      name = "E9 - Master Chief Petty Officer";
      icon = "PF_Core\ranks\_textures\navcom\E-9 Master Chief Petty Officer.paa";
      rank = -1;
    };
    class e9_master_chief_hospital_corpsman
    {
      name = "E9 - Master Chief Hospital Corpsman";
      icon = "PF_Core\ranks\_textures\navcom\E-9 Master Chief Hospital Corpsman.paa";
      rank = -1;
    };
    class w1_warrant_officer
    {
      name = "W1 - Warrant Officer";
      icon = "PF_Core\ranks\_textures\W-1 Warrant Officer.paa";
      rank = -1;
    };
    class w2_chief_warrant_officer
    {
      name = "W2 - Chief Warrant Officer";
      icon = "PF_Core\ranks\_textures\W-2 Chief Warrant Officer.paa";
      rank = -1;
    };
    class o0_cadet
    {
      name = "O0 - Cadet";
      icon = "";
      rank = -1;
    };
    class o1_ensign
    {
      name = "O1 - Ensign";
      icon = "";
      rank = -1;
    };
    class o2_lieutenant_junior_grade
    {
      name = "O2 - Lieutenant Junior Grade";
      icon = "";
      rank = 3;
    };
    class o3_lieutenant
    {
      name = "O3 - Lieutenant";
      icon = "";
      rank = 4;
    };
    class o4_lieutenant_commander
    {
      name = "O4 - Lieutenant Commander";
      icon = "";
      rank = 5;
    };
    class o5_commander
    {
      name = "O5 - Commander";
      icon = "";
      rank = -1;
    };
    class o6_captain
    {
      name = "O6 - Captain";
      icon = "";
      rank = 6;
    };
    class o7_rear_admiral
    {
      name = "O7 - Rear Admiral";
      icon = "";
      rank = -1;
    };
    class o8_vice_admiral
    {
      name = "O8 - Vice Admiral";
      icon = "";
      rank = -1;
    };
    class o9_admiral
    {
      name = "O9 - Admiral";
      icon = "";
      rank = -1;
    };
    class o10_fleet_admiral
    {
      name = "O10 - Fleet Admiral";
      icon = "";
      rank = -1;
    };
  };
};
