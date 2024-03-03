. ./vars.ps1

# Preprocessor
# Node.js check (for tic-tac generation)
$oldPreference = $ErrorActionPreference
try {if(Get-Command node) {
  node .\PF_Gear\tictacs\tictac-converter.js
}}
catch {Write-Host "[WARN] nodejs not found. skipping tictac generation" -ForegroundColor yellow}
finally {$ErrorActionPreference = $oldPreference}

# Build
if ($args.count -gt 0) {
	$dirs = $args[0];
} else {
	$dirs = "PF_*";
}

Get-ChildItem . -Directory $dirs | Foreach-Object {
	$fn = $_.FullName;
	$signArg = "-sign=" + $privKey;
	$whitelistArg = "-include=" + $( Get-Location ) + "\addonBuilderWhitelist.txt";
	
	& $addonBuilder $fn $destination $signArg $whitelistArg -binarizeFullLogs -binarizeAllTextures -clear;
}
