<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp, "%d", $n);
$tmp = fgets($_fp);
$ar = explode(" ", $tmp);
array_walk($ar, 'intval');
$ok = true;
for ($i = 0; $i < count($ar); $i++) {
    if ($ar[$ar[$i]-1] != $i + 1) {
        $ok = false;
        break;
    }
}
echo $ok ? "YES" : "NO";
?>
