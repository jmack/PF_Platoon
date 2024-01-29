## Pathfinder Platoon Quartermaster
This is the repository for the Pathfinder Platoon Quartermaster mod for Arma 3.

### Initial Setup

1. Install Arma 3 Tools via steam
    - If you cannot see Arma 3 Tools in steam, make sure you have "Tools" selected as visible in your library.
1. Generate a new private/public keypair using Arma 3 Tools > DSUtils
    - Select the 'N' next to Private Key on the right hand side. Make sure to save the Destination Path for later.
1. Copy `vars.ps1.example`, rename it to `vars.ps1`, and edit it to match your system.
1. Create an `addons` folder inside `dist`
1. Run `.\build.ps1`. This will generate the addons inside the `dist\addons` folder
1. Open the Arma 3 Launcher. Go to the Mods tab, select "Local Mod", and select the `dist\addons` folder. This should add the Pathfinder Platoon Quartermaster development mod.
    - Note: Do not load this mod AND the steam version of the mod at the same time.