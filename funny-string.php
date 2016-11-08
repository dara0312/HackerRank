<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp, "%d", $T);
for ($i = 0; $i < $T; $i++) {
    fscanf($_fp, "%s", $S);
    $res = 0;
    for ($j = 0; $j < strlen($S)/2; $j++)
        if (abs(ord($S[$j])-ord($S[$j+1])) - abs(ord($S[strlen($S)-$j-1])-ord($S[strlen($S)-$j-2]))) break;
    if ($j < strlen($S)/2) echo "Not ";
    echo "Funny\n";
}
?>
