<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d %d %d %d",$x1,$v1,$x2,$v2);
    if ($v1 <= $v2) { echo "NO"; }
    else { echo (($x2 - $x1) % ($v1 - $v2) == 0 ? "YES" : "NO"); }
?>
