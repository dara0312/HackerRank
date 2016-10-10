<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$n);
for($a0 = 0; $a0 < $n; $a0++){
    fscanf($handle,"%s",$s);
    $hash = array(); $total = 0;
    for ($i = 0; $i < strlen($s); $i++) {
        if (!array_key_exists($s[$i], $hash)) {
            $total++;
            $hash[$s[$i]] = true;
        }
    }
    echo $total."\n";
}

?>
