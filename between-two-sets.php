<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d %d",$n,$m);
$a_temp = fgets($handle);
$a = explode(" ",$a_temp);
array_walk($a,'intval');
$b_temp = fgets($handle);
$b = explode(" ",$b_temp);
array_walk($b,'intval');
$bMin=(int)min($b); $aMax=(int)max($a); $cnt=0;
for ($i = $aMax; $i <= $bMin; $i++) {
    $is = true;
    for ($j = 0; $j < $n; $j++){ if ($i%$a[$j]!=0) { $is = false; break; } }
    for ($j = 0; $j < $m; $j++){ if ($b[$j]%$i!=0) { $is = false; break; } }
    if ($is == true) $cnt++;
}
echo $cnt."\n";
?>
