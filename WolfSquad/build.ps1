# Create addons folder if it doesn't exist
$addonsDirPath = "" + $( Get-Location ) + "\dist\addons";
if (!(Test-Path -PathType container $addonsDirPath)) {
	New-Item -ItemType Directory -Path $addonsDirPath
}

. ../vars.ps1

# Find all image files, check if they've been edited (via git), and if not, change their extension to avoid binarization
$allPngs = @();
$modifiedPngs = @();

if ($null -ne (git ls-files "WS_*/*/*.png")) {
	$allPngs = (git ls-files "WS_*/*/*.png").Split([Environment]::NewLine);
}
if ($null -ne (git ls-files -mo "WS_*/*/*.png")) {
	$modifiedPngs = (git ls-files -mo "WS_*/*/*.png").Split([Environment]::NewLine);
}

foreach ($item in $allPngs) {
	if ($item -notin $modifiedPngs) {
		$strSplit = $item.Split("/");
		$name = $strSplit[$strSplit.Count - 1];
		Rename-Item -Path "$item" -NewName "$name.excluded";
	}
}

# Build
if ($args.count -gt 0) {
	$dirs = $args[0];
} else {
	$dirs = "WS_*";
}

Get-ChildItem . -Directory $dirs | Foreach-Object {
	$fn = $_.FullName;
	$signArg = "-sign=" + $privKey;
	$whitelistArg = "-include=" + $( Get-Location ) + "\..\addonBuilderWhitelist.txt";
	
	& $addonBuilder $fn $destination $signArg $whitelistArg -binarizeFullLogs -binarizeAllTextures -clear;
}

# Change back all images we named .excluded above to just .png
$excludedPngs = @();
if ($null -ne (git ls-files -mo "WS_*/*/*.excluded")) {
	$excludedPngs = (git ls-files -mo "WS_*/*/*.excluded").Split([Environment]::NewLine);
}
foreach ($item in $excludedPngs) {
	$strSplit = $item.Split("/");
	$name = $strSplit[$strSplit.Count - 1].Replace(".excluded", "");
	Rename-Item -Path "$item" -NewName "$name";
}
