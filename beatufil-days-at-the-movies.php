<?php
function reverse($n) {
    /*  1er solution

    $rev = 0;
    while ($n > 0) {
        $rev = $rev * 10;
        $rev = $rev + $n % 10;
        $n = (int)($n/10);
    }
    return $rev;*/
    /* 2nd solution with strrev function php */
    return (int) strrev("{$n}");
}

$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp, "%d %d %d", $i, $j, $k); $cnt = 0;
for ($a = $i; $a <= $j; $a++) if ( abs($a - reverse($a)) % $k == 0) $cnt++;
echo $cnt;
?>
