<?php

function prime($n) {
    $b = $n;
    for ($i=2;;$i++) {
        if ($i*$i > $b) return $b;
        if ($n%$i == 0) return max($i, prime($n/$i));
    }
}

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$t);
for($a0 = 0; $a0 < $t; $a0++){
    fscanf($handle,"%ld",$n);
    echo prime($n)."\n";
}

?>
