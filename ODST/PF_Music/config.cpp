class CfgPatches
{
  class PF_Music
  {
    name = "PF_Music";
    author = "oriunder";
    requiredVersion = 1.00;
    requiredAddons[] = {};
    units[] = {};
    weapons[] = {};
    worlds[] = {};
  };
};
class CfgMusic
{
  #include "tracklist.hpp"
};
class CfgMusicClasses
{
  class PF_Music_Tracks
  {
    displayName = "PF_Music";
  };
};
