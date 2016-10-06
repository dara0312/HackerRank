<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%s",$S); $cnt=0;
for ($i = 0; $i < strlen($S);$i++) {
    if ($i%3==0) if ($S[$i]!='S') $cnt++;
    if ($i%3==1) if($S[$i]!='O') $cnt++;
    if ($i%3==2) if($S[$i]!='S') $cnt++;
}
echo $cnt;
?>
