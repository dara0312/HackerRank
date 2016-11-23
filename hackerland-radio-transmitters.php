<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d %d",$n,$k);
$x_temp = fgets($handle);
$x = explode(" ",$x_temp);
array_walk($x,'intval'); sort($x);
$pos = 0; $start = -1; $cnt = 0;
for ($i = 0; $i < $n; $i++) {
    if ($start < 0) {
        $start = $x[$i];
        $cnt++;
        $pos = $x[$i];
    }
    $range = $x[$i] - $start;
    $pos = ($range <= $k) ? $x[$i] : $pos;
    if ($x[$i] - $pos > $k) {
        $start = $x[$i];
        $pos = $x[$i];
        $cnt++;
    }
}
echo $cnt;
?>
