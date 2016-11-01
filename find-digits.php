<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$t);
for($a0 = 0; $a0 < $t; $a0++){
    fscanf($handle,"%d",$n);
    $arr = str_split($n);
    $cnt = 0;
    for ($i = 0; $i < count($arr); $i++) {
        if ($arr[$i] != '0' && intval($n) % intval($arr[$i]) == 0) {
            $cnt += 1;
        }
    }
    echo $cnt."\n";
}

?>
