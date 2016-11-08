<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp, "%d %d", $n, $k);
$c = fgets($_fp);
$arr = explode(" ",$c);
array_walk($arr,'intval');
$k--; $pos = 1; $nr = 0;
for ($i = $k-1; $i <= $n+$k; $i+=$k*2+1) {
    $ok = 0;
    for ($j=$i;$j>=$i-$k;$j--){
        if ($arr[$j] == 1) {
            $i=$j;
            $nr++;
            $ok =1;
            break;
        }
    }
    if ($ok == 0) {
        for ($j=$i-$k;$j>=$i-2*$k;$j--) {
            if($arr[$j]==1) {
                $i=$j;
                $nr++;
                $ok = 1;
                break;
            }
        }
        if ($ok==0) {
            echo -1;
            return 0;
        }
    }
}

if ($i-$k<=$n) {
    $ok = 0;
    for ($j=$i;$j>=$i-$k;$j--) {
        if ($arr[$j] ==1) $ok =1;
    }
    if ($ok) echo $nr;
    else echo -1;
} else echo $nr;
?>
