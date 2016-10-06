<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp,"%d %d",$n,$k);
$c_temp = fgets($_fp);
$c = explode(" ",$c_temp);
array_walk($c,'intval'); $total = 0;
fscanf($_fp, "%d", $b_charged);
for ($i = 0; $i < $n; $i++) if ( $i != $k) $total += $c[$i];
$b_actual = $total / 2;
echo ($b_charged-$b_actual) == 0 ? "Bon Appetit" : ($b_charged - $b_actual);
?>
