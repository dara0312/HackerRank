<?php

function CloudRevisited($c, $n, $k) {
    $pos = 0; $cnt = 0;
    while ($cnt == 0 || $pos != 0) {
        $pos += $k;
        $pos %= $n;
        if ($c[$pos] == 0) $cnt += 1;
        else $cnt += 3;
    }
    return 100 - $cnt;
}

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d %d",$n,$k);
$c_temp = fgets($handle);
$c = explode(" ",$c_temp);
array_walk($c,'intval');
echo CloudRevisited($c, $n, $k);
?>
