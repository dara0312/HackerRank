<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp, "%d", $T);
for ($i = 0; $i < $T; $i++) {
    fscanf($_fp, "%d", $s);
    echo ($s ^ 0xFFFFFFFF)."\n";
}
?>
