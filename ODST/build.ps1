# Create addons folder if it doesn't exist
$addonsDirPath = "" + $( Get-Location ) + "\dist\addons";
if (!(Test-Path -PathType container $addonsDirPath)) {
	New-Item -ItemType Directory -Path $addonsDirPath
}

. ../vars.ps1

# Preprocessor
# Node.js check (for tic-tac generation)
if (Get-Command node -errorAction SilentlyContinue) {
	node .\PF_Gear\tictacs\tictac-converter.js
} else {
	Write-Host "[WARN] Node not installed in this environment. Skipping tic-tac generation" -ForegroundColor Yellow
}

# Build
if ($args.count -gt 0) {
	$dirs = $args[0];
} else {
	$dirs = "PF_*";
}

Get-ChildItem . -Directory $dirs | Foreach-Object {
	$fn = $_.FullName;
	$signArg = "-sign=" + $privKey;
	$whitelistArg = "-include=" + $( Get-Location ) + "\..\addonBuilderWhitelist.txt";
	
	& $addonBuilder $fn $destination $signArg $whitelistArg -binarizeFullLogs -binarizeAllTextures -clear;
}
