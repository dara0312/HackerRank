<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$t);
for($a0 = 0; $a0 < $t; $a0++){
    fscanf($handle,"%d",$n);
    for ($i=$n;;$i++) {
        for ($j=2;$j<=$n;$j++) {
            if ($i%$j!=0) break;
        }
        if ($j == $n+1) {
            echo $i . "\n";
            break;
        }
    }
}

?>
