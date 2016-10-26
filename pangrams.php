<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
$flag = 0; $alphabet = []; $cnt = 0;
$s = fgets($_fp);
for($i=0;$i<26;$i++){
    $alphabet[$i] = 0;
}
for($i=0;$i<strlen($s);$i++) {
    $num = (ord(strtolower($s[$i]))-97);
    if ($num < 0 || $num > 25) continue;
    if ($alphabet[$num] == 0) $cnt++;
    if ($cnt >= 26) {
        $flag = 1; break;
    } else {
        $alphabet[$num]++;
    }
}
echo $flag ? "pangram\n" : "not pangram\n";

?>
