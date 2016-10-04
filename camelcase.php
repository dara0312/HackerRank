<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%s",$s); $total = 1;
for ($i = 0; $i < strlen($s); $i++)
    if ($s[$i] === strtoupper($s[$i])) $total++;
echo $total;
?>