<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$n);
$c_temp = fgets($handle);
$c = explode(" ",$c_temp);
array_walk($c,'intval');
$res = 0;
for ($i = 0; $i < ($n-1);) {
    if ($c[$i+2] == 1) {
        $res++; $i++;
    } else { $res++; $i+=2; }
}
echo $res."\n";
?>
