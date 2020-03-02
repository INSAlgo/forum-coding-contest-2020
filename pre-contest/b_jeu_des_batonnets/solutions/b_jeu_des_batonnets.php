<?php

fscanf(STDIN, "%d %d", $nb, $b);
fscanf(STDIN, "%d", $j);

if (($j == 0 &&  (floor(($nb - $b)/($b + 1)) - floor(($nb - 1)/($b + 1)) < 0 || ($nb - $b) % ($b + 1) == 0)) || ($j==1 && (floor(($nb - $b)/($b + 1)) - floor(($nb - 1)/($b + 1)) == 0 && ($nb - $b) % ($b + 1) != 0)))
	echo("OUI");
else
	echo("NON");

?>
