<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d %d",$s,$t);
fscanf($handle,"%d %d",$a,$b);
fscanf($handle,"%d %d",$m,$n);
$apple_temp = fgets($handle);
$apple = explode(" ",$apple_temp);
array_walk($apple,'intval');
$orange_temp = fgets($handle);
$orange = explode(" ",$orange_temp);
array_walk($orange,'intval');
$fa = 0; $fo = 0;
for ($i = 0; $i < count($apple); $i++) {
    $ap = ($a+$apple[$i]);
    if ($ap >= $s && $ap <= $t) {
        $fa++;
    }
}
echo $fa."\n";
for ($i = 0; $i < count($orange); $i++) {
    $or = ($b+$orange[$i]);
    if ($or >= $s && $or <= $t) {
        $fo++;
    }
}
echo $fo."\n";
?>
