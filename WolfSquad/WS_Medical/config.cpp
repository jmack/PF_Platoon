class CfgPatches
{
  class WS_Medical
  {
    units[] = { };
    weapons[] =
    {
    };

    requiredVersion = 1;
    requiredAddons[] =
    {
      "ace_medical",
      "ace_medical_treatment",
      "OPTRE_Core",
      "OPTRE_ACE_Compat_Medical",
    };
    skipWhenMissingDependencies = 1;
  };
};

class CfgFunctions
{
  class WS
  {
    class Medical
    {
      file = "WS_Medical\_functions";
      class medicalBandageAndPain { };
      class medicalPain { };
      class medicalPainLocal { };
    };
  };
};
