<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%s",$s);
fscanf($handle,"%ld",$n); $cnt = 0;
for ($i = 0;$i<strlen($s);$i++) if ($s[$i] == 'a') $cnt++;
$p = floor($n / strlen($s));
$p *= $cnt;
if ($n%strlen($s)) {
    $r = $n % strlen($s);
    for ($i = 0; $i < $r; $i++) if ($s[$i] == 'a') $p++;
}
echo $p;
?>
