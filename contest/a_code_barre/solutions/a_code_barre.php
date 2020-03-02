<?php

fscanf(STDIN, "%s", $barCode);

$chars = str_split($barCode);

$cpt = 0;
foreach ($chars as $char) {
	if($char == "-")
		$cpt++;
	else if ($cpt != 0) { //$char == "."
		echo "$cpt\n" ;
		$cpt = 0;
	}
}
if ($cpt != 0)
    echo($cpt);

?>
