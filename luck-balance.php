<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp, "%d %d", $n, $k);
$res = 0; $imp = array();
for ($i = 0; $i < $n; $i++) {
    fscanf($_fp, "%d %d", $l, $t);
    if ($t == 0) $res += $l;
    else array_push($imp, $l);
}
rsort($imp);
for ($i = 0; $i < count($imp); $i++) {
    if ($i < $k) $res += $imp[$i];
    else $res -= $imp[$i];
}
echo $res."\n";
?>
