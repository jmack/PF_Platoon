const ARMA_TOOLS_ROOT = 'C:\\Program Files (x86)\\Steam\\steamapps\\common\\Arma 3 Tools';

export default Object.freeze({
  armaToolsRoot: ARMA_TOOLS_ROOT,
  addonBuilder: `${ARMA_TOOLS_ROOT}\\AddonBuilder\\AddonBuilder.exe`,
  imageToPAA: `${ARMA_TOOLS_ROOT}\\ImageToPAA\\ImageToPAA.exe`,
  destination: `dist\\addons`,
  privKey: `${ARMA_TOOLS_ROOT}\\DSSignFile\\wlan0.biprivatekey`,
});
