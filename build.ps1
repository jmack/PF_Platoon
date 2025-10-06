param([String]$target="");

$targetDirPath = "$PSScriptRoot\${target}";
$buildFilePath = "${targetDirPath}build.ps1";

if (Test-Path -PathType leaf $buildFilePath) {
  Set-Location -Path $targetDirPath;
  & $buildFilePath;
  Set-Location -Path "..\";
} else {
  Write-Host "could not find a valid build file at ${buildFilePath}";
}