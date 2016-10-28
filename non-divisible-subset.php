<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp, "%d %d", $n, $k);
$a = explode(' ', fgets($_fp));
$c = [];
for ($i = 0; $i < $k; $i++) { $c[$i] = 0; }
for ($i = 0; $i < $n; $i++) { $c[$a[$i]%$k] += 1; }
$res = 0;
if ($k % 2 == 0) { $c[$k/2] = min(1, $c[$k/2]); }
for ($i = 1; $i < $k/2+1; ++$i) { $res += max($c[$i], $c[$k-$i]); }
$res += min(1, $c[0]);
echo $res;
?>
