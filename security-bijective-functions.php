<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp, "%d", $n);
$tmp = fgets($_fp);
$ar = explode(" ", $tmp);
array_walk($ar, 'intval');
$hash  = array();
foreach ($ar as $value){
    if (!array_key_exists($value, $hash)){
        $hash[$value] = true;
    }
}
echo count($hash) == $n ? "YES" : "NO";
?>
