<?php

fscanf(STDIN, "%d %d", $L, $C);

$maxByColumn = array_fill(0, $C, 0);

for ($row = 0; $row < $L; $row++) { 
	$input = trim(fgets(STDIN));
	$numbers = explode(" ", $input);
	for ($index = 0; $index < $C; $index++) { 
		$maxByColumn[$index] = max($maxByColumn[$index], intval($numbers[$index]));
	}
}

fscanf(STDIN, "%d", $H);

$hostess = array();

for ($i = 0; $i < $H; $i++) { 
	fscanf(STDIN, "%d", $val);
	$hostess[] = $val;
}

rsort($hostess);
rsort($maxByColumn);

for ($i = 0; $i < $C; $i++) { 
	if($hostess[$i] < $maxByColumn[$i]){
		echo "NON";
		exit;
	}
}

echo "OUI";

?>
