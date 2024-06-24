## Pathfinder Platoon Modpacks
This is the repository for the various modpacks for Pathfinder Platoon in Arma 3

### Initial Setup

1. Install Arma 3 Tools via steam
    - If you cannot see Arma 3 Tools in steam, make sure you have "Tools" selected as visible in your library.
1. Generate a new private/public keypair using Arma 3 Tools > DSUtils
    - Select the 'N' next to Private Key on the right hand side. Make sure to save the Destination Path for later.
1. Copy `vars.ps1.example`, rename it to `vars.ps1`, and edit it to match your system.
1. Navigate into the directory for whichever modpack you will be working with.
1. Run `.\build.ps1`. This will generate the addons inside the `dist\addons` folder
1. Open the Arma 3 Launcher. Go to the Mods tab, select "Local Mod", and select the `dist\addons` folder. This should add the development version of whichever mod you built.
    - Note: Do not load a local version AND a steam version of a modpack at the same time.