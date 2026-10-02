class CfgPatches {
  class <% faction_class %> {
    units[] = { <% exported_units %> };
    weapons[] = { };
    requiredVersion = 1.0;
    requiredAddons[] = { <% required_addons %> };
    author = "<% author %>",
    addonRootClass = "<% root_class %>";
  };
};

class CfgFactionClasses
{
  class <% faction_class %>
  {
    displayName = "<% faction_name %>";
    priority = <% priority %>;
    side = <% faction_side_number %>;
  };
};

class CfgEditorCategories
{
  class <% faction_class %>
  {
    displayName = "<% faction_name %>";
  };
};

class CfgWeapons
{

};

class CfgVehicles
{
  // Backpacks
  // Base Soldiers
  // Soldiers
  // Vehicles
};

class CfgGroups
{
  class <% faction_side_name %>
  {
    class <% faction_class %>
    {
      name = "<% faction_name %>";
    };
  };
};
