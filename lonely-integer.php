<?php
function lonelyinteger( $a) {
$ar = array_count_values($a);
foreach ($ar as $k => $v) {
    if ($v == 1) return $k;
}
return 1;
}

$__fp = fopen("php://stdin", "r");

fscanf($__fp, "%d", $_a_cnt);
$_a = fgets($__fp);
$_a = explode(' ',$_a);
$res = lonelyinteger($_a);
echo $res;

?>
