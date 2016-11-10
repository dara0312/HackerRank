<?php
function printar($ar) {
    foreach ($ar as $a) echo $a." ";
    echo "\n";
}

function  insertionSort( $ar) {
    $last = $ar[count($ar) - 1];
    $i = count($ar)-2;
    while ($i + 1 > 0 && $last <= $ar[$i]) {
        $ar[$i+1] = $ar[$i--];
        printar($ar);
    }
    $ar[$i+1] = $last;
    printar($ar);
}
$fp = fopen("php://stdin", "r");
fscanf($fp, "%d", $m);
$ar = array();
$s=fgets($fp);
$ar = explode(" ", $s);
for($i=0;$i < count($ar);$ar[$i++]+=0);
insertionSort($ar);
?>
