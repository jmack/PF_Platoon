# Create addons folder if it doesn't exist
$addonsDirPath = "" + $( Get-Location ) + "\dist\addons";
if (!(Test-Path -PathType container $addonsDirPath)) {
	New-Item -ItemType Directory -Path $addonsDirPath
}

. ../vars.ps1

# Build
if ($args.count -gt 0) {
	$dirs = $args[0];
} else {
	$dirs = "NASR_*";
}

Get-ChildItem . -Directory $dirs | Foreach-Object {
	$fn = $_.FullName;
	$signArg = "-sign=" + $privKey;
	$whitelistArg = "-include=" + $( Get-Location ) + "\..\addonBuilderWhitelist.txt";
	
	& $addonBuilder $fn $destination $signArg $whitelistArg -binarizeFullLogs -binarizeAllTextures -clear;
}
