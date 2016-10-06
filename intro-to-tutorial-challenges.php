<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp, "%d", $V);
fscanf($_fp, "%d", $n);
$tmp = fgets($_fp);
$ar = explode(" ", $tmp);
array_walk($ar, 'intval');
echo array_search($V, $ar)
?>
