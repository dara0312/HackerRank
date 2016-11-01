<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp, "%d", $T);

function cmp($a, $b) {
    if ($a == $b) return 0;
    return ($a < $b) ? -1 : 1;
}

for($i = 0; $i < $T; $i++) {
    fscanf($_fp, "%d", $N);
    $H = explode(" ", fgets($_fp));
    array_walk($H, "intval");
    usort($H, "cmp");
    for ($i=1;$i<$N;$i++) {
        $H[$i] += $H[$i-1];
    }
    $res = $H[$N-1];
    for($i=1;$i<$N;$i++) {
        $res = max($res, ($i+1)*($H[$N-1]-$H[$i-1]));
    }
    echo $res."\n";
}
?>
