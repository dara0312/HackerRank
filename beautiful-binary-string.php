<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$n);
fscanf($handle,"%s",$B);
$cnt = 0;
for ($i = 2; $i < $n; $i++) {
    if ($B[$i-2] == '0' && $B[$i-1] == '1' && $B[$i] == '0') {
        $B[$i] = 1;
        $cnt++;
    }
}
echo $cnt."\n";
?>
