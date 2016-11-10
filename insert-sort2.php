<?php
function  insertionSort( $ar) {
    $nb = count($ar);
    for ($i = 1; $i <= $nb - 1;  $i++) {
        $j = $i;
        while ($j > 0 && $ar[$j] < $ar[$j-1]) {
            $tmp = $ar[$j];
            $ar[$j] = $ar[$j-1];
            $ar[$j-1] = $tmp;
            $j--;
        }
        for ($k = 0; $k < $nb; $k++) echo $ar[$k]." ";
        echo "\n";
    }
}

$fp = fopen("php://stdin", "r");
fscanf($fp, "%d", $m);
$temp = fgets($fp);
$arr = explode(' ',$temp);

for($i = 0; $i < $m; $i++)
{
    $arr[$i] = (int) $arr[$i];
}
insertionSort($arr);

?>
