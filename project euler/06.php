<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$t);
for($a0 = 0; $a0 < $t; $a0++){
    fscanf($handle,"%d",$n);
    $res2 = (($n*($n+1))/2);
    $res2 = $res2 * $res2;
    $res = ((2*$n+1)*($n+1)*$n)/6;
    echo ($res2-$res) . "\n";
}

?>
