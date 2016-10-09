<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp, "%d", $n);
$tmp = fgets($_fp);
$ar = explode(" ", $tmp);
array_walk($ar, 'intval');
$hash = array();
for ($i = 0; $i < count($ar); $i++) {
    $hash[$ar[$i]-1] = $i + 1;
}
for ($i = 0; $i < count($ar); $i++) {
    echo $hash[$i]."\n";
}
?>
