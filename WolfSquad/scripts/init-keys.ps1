param(
  [string]$KeyPath = $env:WS_SIGNING_KEY
)

if (-not $KeyPath) {
  Write-Error "Provide key path as argument or set WS_SIGNING_KEY environment variable."
  Write-Error "Usage: .\scripts\init-keys.ps1 'C:\path\to\WolfSquad.biprivatekey'"
  exit 1
}

if (-not (Test-Path $KeyPath)) {
  Write-Error "Key file not found: $KeyPath"
  exit 1
}

$targetDir = ".\WolfSquad\.hemtt\keys"
$targetLink = "$targetDir\WolfSquad.biprivatekey"

if (!(Test-Path $targetDir)) {
  New-Item -ItemType Directory -Path $targetDir -Force | Out-Null
}

if (Test-Path $targetLink) {
  Write-Host "Key already linked at $targetLink"
  exit 0
}

New-Item -ItemType HardLink -Path $targetLink -Target (Resolve-Path $KeyPath) | Out-Null
Write-Host "Hard link created: $targetLink -> $KeyPath"