/**
 * WARNING: THIS FILE HAS BEEN AUTOMATICALLY GENERATED. DO NOT EDIT IT DIRECTLY OR YOU WILL
 * LOSE YOUR CHANGES THE NEXT TIME THE FILE IS GENERATED.
 * If you need to make changes, edit the .generator-payload.ts file that should be alongside
 * this config.cpp.
 */

class CfgPatches {
  class <% faction_class %> {
    addonRootClass = "<% root_class %>";
    author = "<% author %>";
    requiredVersion = 1.0;
    requiredAddons[] =
    {<% required_addons %>
    };
    weapons[] = { };
    units[] =
    {<% exported_units %>
    };
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
{<% cfg_vehicles_backpacks %><% cfg_vehicles_base_soldiers %><% cfg_vehicles_soldiers %><% cfg_vehicles_vehicles %>
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
