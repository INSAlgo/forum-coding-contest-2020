<?php

fscanf(STDIN, "%d", $n);
fscanf(STDIN, "%d %d", $h, $c);

$hCurr = 0;
$cCurr = 0;
$i = 0;

while ($hCurr <= $h && $cCurr <= $c && $i < $n){
   	fscanf(STDIN, "%c", $car);
    if ($car == 'H')
        $hCurr += 1;
    else if ($car == 'C')
        $cCurr += 1;
    $i += 1;
}
if ($hCurr > $h || $cCurr > $c)
    echo("NON");
else
    echo("OUI");
?>
