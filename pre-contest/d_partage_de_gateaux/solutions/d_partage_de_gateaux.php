<?php

fscanf(STDIN, "%d %d %d", $G, $A, $P);

for($i = 0; $i < $A; $i++){
	fscanf(STDIN, "%d %d", $Pi, $Gi);
	$nbPartsRestant[] = $Pi;
	$amis[] = array();

	$input = trim(fgets(STDIN));
	$numbers = explode(" ", $input);
	foreach ($numbers as $number) {
		$amis[$i][] = intval($number) - 1;
	}
}

$nbPartsRestantes = array_fill(0, $G, $P);
$nbPartsTotalRestant = $G * $P;

function backtrack($nbPartsTotalRestant, $indexAmi, $nbAmisTotal){
	if($indexAmi == $nbAmisTotal)
		return true;

	$res = false;
	global $amis, $nbPartsRestantes, $nbPartsRestant;
	foreach ($amis[$indexAmi] as $numGateau) {
		$nbPartsRestantes[$numGateau] -= $nbPartsRestant[$indexAmi];
		$nbPartsTotalRestant -= $nbPartsRestant[$indexAmi];
		if($nbPartsRestantes[$numGateau] >= 0 && $nbPartsTotalRestant >= ($nbAmisTotal - $indexAmi - 1)){
			$res = backtrack($nbPartsTotalRestant, $indexAmi + 1, $nbAmisTotal);
			if($res == true){
				break;
			}
		}
		$nbPartsRestantes[$numGateau] += $nbPartsRestant[$indexAmi];
		$nbPartsTotalRestant += $nbPartsRestant[$indexAmi];
	}
	return $res;
}

if(backtrack($nbPartsTotalRestant, 0, $A) == true)
	echo("OUI\n");
else
	echo("NON\n");


?>
