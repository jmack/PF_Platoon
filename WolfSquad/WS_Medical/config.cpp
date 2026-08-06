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
      "OPTRE_Core", // Medigel, Biofoam
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
      class medicalPainLocal { };
    };
  };
};
