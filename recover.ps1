# Change back all images we named .excluded above to just .png
$excludedPngs = @();
if ($null -ne (git ls-files -mo "*/*.excluded")) {
	$excludedPngs = (git ls-files -mo "*/*.excluded").Split([Environment]::NewLine);
}
foreach ($item in $excludedPngs) {
	$strSplit = $item.Split("/");
	$name = $strSplit[$strSplit.Count - 1].Replace(".excluded", "");
	Rename-Item -Path "$item" -NewName "$name";
}
