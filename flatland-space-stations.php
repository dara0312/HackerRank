<?php

function fs($l, $r) {
    $res = 0;
    if ($r - $l == 1) return 0;
    for ($i = $l+1; $i < $r; $i++) {
        $res = max($res, min($i-$l, $r-$i));
    }
    return $res;
}

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d %d",$n,$m);
$c_temp = fgets($handle);
$c = explode(" ",$c_temp);
array_walk($c,'intval');
sort($c);
$l = $r = 0;
$res = $c[0];
for ($i = 1; $i < $m; $i++) {
    $l = $c[$i-1];
    $r = $c[$i];
    $res = max($res, fs($l, $r));
}
echo max($res, $n-$c[$m-1]-1);
?>
