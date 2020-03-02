<?php

fscanf(STDIN, "%d", $prix2nde);
fscanf(STDIN, "%d", $prix1ere);
fscanf(STDIN, "%d", $nbBillets2nde);
fscanf(STDIN, "%d", $nbBillets1ere);

echo ($prix2nde * $nbBillets2nde) + ($prix1ere * $nbBillets1ere)  . "\n";
?>
