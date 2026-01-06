class CfgPatches
{
  class WS_Props_Decals
  {
    author = "wlan0";
    addonRootClass = "WS_Props";
    requiredAddons[] = { };
  };
};

class CfgVehicles
{
  
  /**
  * Room Signs
  */
  class UserTexture1m_F;
  class WS_Props_WithMyLittleEye_Decals_Rooms_Airlock: UserTexture1m_F
  {
    author = "wlan0";
    DLC = "WS";

    displayName = "Decal - Rooms - Airlock";
    editorCategory = "WS_EditorCategory_WithMyLittleEye";
    editorSubcategory = "PF_EditorSubcategory_Decals";
    
    icon = "iconObject_1x1";
    editorPreview = "WS_Props\Decals\_textures\airlock.paa";

    hiddenSelectionsTextures[] = { "WS_Props\Decals\_textures\airlock.paa" };
    hiddenSelectionsMaterials[] = { "\a3\data_f\default_alpha.rvmat" };

    scope = 2;
    scopeCurator = 2;
    mapSize = 1;
    keepHorizontalPlacement = 0;
    destrType = "DestructNo";
    vehicleClass = "Signs";
  };

  class WS_Props_WithMyLittleEye_Decals_Rooms_Armory : WS_Props_WithMyLittleEye_Decals_Rooms_Airlock
  {
    displayName = "Decal - Rooms - Armory";
    editorPreview = "WS_Props\Decals\_textures\armory.paa";
    hiddenSelectionsTextures[] = { "WS_Props\Decals\_textures\armory.paa" };

    keepHorizontalPlacement = 1;
  };

  class WS_Props_WithMyLittleEye_Decals_Rooms_Bridge : WS_Props_WithMyLittleEye_Decals_Rooms_Airlock
  {
    displayName = "Decal - Rooms - Bridge";
    editorPreview = "WS_Props\Decals\_textures\bridge.paa";
    hiddenSelectionsTextures[] = { "WS_Props\Decals\_textures\bridge.paa" };
  };

  /**
   * Bridge Seats
   */
  class UserTexture_1x2_F;
  class WS_Props_WithMyLittleEye_Decals_BridgeSeats_Sensors: UserTexture_1x2_F
  {
    author = "wlan0";
    DLC = "WS";

    displayName = "Decal - Bridge - Sensor Operations";
    editorCategory = "WS_EditorCategory_WithMyLittleEye";
    editorSubcategory = "PF_EditorSubcategory_Decals";
    
    icon = "iconObject_1x2";
    editorPreview = "WS_Props\Decals\_textures\bridge_sensors.paa";

    hiddenSelectionsTextures[] = { "WS_Props\Decals\_textures\bridge_sensors.paa" };
    hiddenSelectionsMaterials[] = { "\a3\data_f\default_alpha.rvmat" };

    scope = 2;
    scopeCurator = 2;
    mapSize = 1;
    keepHorizontalPlacement = 0;
    destrType = "DestructNo";
    vehicleClass = "Signs";
  };

  class WS_Props_WithMyLittleEye_Decals_BridgeSeats_Tactical: WS_Props_WithMyLittleEye_Decals_BridgeSeats_Sensors
  {
    displayName = "Decal - Bridge - Tactical Operations";
    editorPreview = "WS_Props\Decals\_textures\bridge_tactical.paa";
    hiddenSelectionsTextures[] = { "WS_Props\Decals\_textures\bridge_tactical.paa" };
  };

  class WS_Props_WithMyLittleEye_Decals_BridgeSeats_Comms: WS_Props_WithMyLittleEye_Decals_BridgeSeats_Sensors
  {
    displayName = "Decal - Bridge - Communications";
    editorPreview = "WS_Props\Decals\_textures\bridge_comms.paa";
    hiddenSelectionsTextures[] = { "WS_Props\Decals\_textures\bridge_comms.paa" };
  };

  class WS_Props_WithMyLittleEye_Decals_BridgeSeats_Engineering: WS_Props_WithMyLittleEye_Decals_BridgeSeats_Sensors
  {
    displayName = "Decal - Bridge - Engineering";
    editorPreview = "WS_Props\Decals\_textures\bridge_engineering.paa";
    hiddenSelectionsTextures[] = { "WS_Props\Decals\_textures\bridge_engineering.paa" };
  };

  class WS_Props_WithMyLittleEye_Decals_BridgeSeats_Reactor: WS_Props_WithMyLittleEye_Decals_BridgeSeats_Sensors
  {
    displayName = "Decal - Bridge - Reactor Operations";
    editorPreview = "WS_Props\Decals\_textures\bridge_reactor.paa";
    hiddenSelectionsTextures[] = { "WS_Props\Decals\_textures\bridge_reactor.paa" };
  };

  class WS_Props_WithMyLittleEye_Decals_BridgeSeats_Data: WS_Props_WithMyLittleEye_Decals_BridgeSeats_Sensors
  {
    displayName = "Decal - Bridge - Data Warfare";
    editorPreview = "WS_Props\Decals\_textures\bridge_data.paa";
    hiddenSelectionsTextures[] = { "WS_Props\Decals\_textures\bridge_data.paa" };
  };

  class WS_Props_WithMyLittleEye_Decals_BridgeSeats_XO: WS_Props_WithMyLittleEye_Decals_BridgeSeats_Sensors
  {
    displayName = "Decal - Bridge - Executive Officer";
    editorPreview = "WS_Props\Decals\_textures\bridge_xo.paa";
    hiddenSelectionsTextures[] = { "WS_Props\Decals\_textures\bridge_xo.paa" };
  };

  class WS_Props_WithMyLittleEye_Decals_BridgeSeats_3IC: WS_Props_WithMyLittleEye_Decals_BridgeSeats_Sensors
  {
    displayName = "Decal - Bridge - 3IC";
    editorPreview = "WS_Props\Decals\_textures\bridge_3ic.paa";
    hiddenSelectionsTextures[] = { "WS_Props\Decals\_textures\bridge_3ic.paa" };
  };

  class WS_Props_WithMyLittleEye_Decals_BridgeSeats_Helm: WS_Props_WithMyLittleEye_Decals_BridgeSeats_Sensors
  {
    displayName = "Decal - Bridge - Helm";
    editorPreview = "WS_Props\Decals\_textures\bridge_helm.paa";
    hiddenSelectionsTextures[] = { "WS_Props\Decals\_textures\bridge_helm.paa" };
  };

  class WS_Props_WithMyLittleEye_Decals_BridgeSeats_Navigation: WS_Props_WithMyLittleEye_Decals_BridgeSeats_Sensors
  {
    displayName = "Decal - Bridge - Navigation";
    editorPreview = "WS_Props\Decals\_textures\bridge_nav.paa";
    hiddenSelectionsTextures[] = { "WS_Props\Decals\_textures\bridge_nav.paa" };
  };

  class WS_Props_WithMyLittleEye_Decals_BridgeSeats_Captain: WS_Props_WithMyLittleEye_Decals_BridgeSeats_Sensors
  {
    displayName = "Decal - Bridge - Captain";
    editorPreview = "WS_Props\Decals\_textures\bridge_captain.paa";
    hiddenSelectionsTextures[] = { "WS_Props\Decals\_textures\bridge_captain.paa" };
  };
};
