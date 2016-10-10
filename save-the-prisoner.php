<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp,"%d",$t);
for ($i = 0; $i < $t; $i++) {
    fscanf($_fp,"%d %d %d",$n,$m,$s);
    $res = ($s-1+$m)%$n;
    echo ($res != 0 ? $res : $n) . "\n";
}
?>
