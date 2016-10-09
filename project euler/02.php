<?php

/*function fibonacci($length)
{
   $total = 0; $fin = 0;
   for( $l = array(1,1), $i = 2, $x = 0; $i < $length; $i++ ) {
        $l[] = $l[$x++] + $l[$x];
    }
    for ($i = 1; $i < $length; $i++) {
        if ($l[$i] % 2 == 0) {
            $total += $l[$i];
            if ($total <= $length) { $fin = $total; }
        }
    }
    echo $fin . "\n";
}

function fibonacci($l) {
  $x = 2; $y = 1; $sum = 2; $n = 0; $t = 0;
  while ($n < $l ) {
    $n = $x + $y;
    $y = $x; $x = $n;
    if (!($n % 2)) {
      $sum += $n;
      if ($sum <= $l) $t = $sum;
    }
  }
  echo $t."\n";
}*/
function fibonacci($l) {
  $a = 1; $b = 2; $sum = 2;
  while (true) {
    $c = 3 * $b + 2 * $a;
    if ($c>=$l) break;
    $sum += $c;
    $a = 2*$b + $a;
    $b = $c;
  }
  echo $sum."\n";
}

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$t);
for($a0 = 0; $a0 < $t; $a0++){
    fscanf($handle,"%ld",$n);
    fibonacci($n);
}

?>
