<?php

$handle = fopen ("php://stdin","r");
$h_temp = fgets($handle);
$h = explode(" ",$h_temp);
array_walk($h,'intval');
fscanf($handle,"%s",$word); $heigh=0;
for ($i = 0; $i < strlen($word); $i++) {
    $heigh = max($h[ord($word[$i])-ord('a')], $heigh);
}
echo strlen($word)*$heigh;
?>
