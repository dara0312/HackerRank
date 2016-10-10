<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp, "%d %d", $n, $d);
$tmp = fgets($_fp);
$ar = explode(" ", $tmp);
array_walk($ar, 'intval');
$total = 0;
for ($i = 0; $i < count($ar); $i++) {
    if ( in_array($ar[$i]+$d, $ar) && in_array($ar[$i]+2*$d, $ar) ) {
        $total++;
    }
}
echo $total."\n";
?>
