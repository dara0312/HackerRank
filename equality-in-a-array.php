<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp, "%d", $n);
$a = explode(" ",  fgets($_fp));
$r = []; for ($i = 0; $i < 101; $i++) $r[$i] = 0;
for ($i = 0; $i < $n; $i++) {
    $r[$a[$i]]++;
}
$vmax = 0; $sum = 0;
for($i = 0; $i < count($r); $i++) {
    $vmax = max($vmax, $r[$i]);
    $sum += $r[$i];
}
echo $sum - $vmax;
?>
