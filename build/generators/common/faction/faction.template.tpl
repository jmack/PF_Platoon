class CfgPatches {
  class <% faction_class %> {
    addonRootClass = "<% root_class %>";
    author = "<% author %>",
    requiredVersion = 1.0;
    requiredAddons[] = {<% required_addons %>};
    weapons[] = { };
    units[] = {<% exported_units %>};
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
{<% cfg_weapons %>};

class CfgVehicles
{<% cfg_vehicles_backpacks %><% cfg_vehicles_base_soldiers %><% cfg_vehicles_soldiers %><% cfg_vehicles_vehicles %>};

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
