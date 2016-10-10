<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$t);
$total = 0; $v = 3;
while ($total < $t) {
    $total += $v;
    $v *= 2;
}
$v/=2;
echo ($total - $v + ($v-$t)+1)."\n";
?>
