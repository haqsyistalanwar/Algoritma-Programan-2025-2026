<?php
$a = readline("Masukan angka pertama");
$b = readline("Masukan angka kedua");

if ($a > $b)
    echo "$a lebih besar dari $b\n";
elseif($a < $b)
    echo "$a lebih kecil dari $b\n";
else
    echo "Kedua sama besar\n"

echo "Apakah keduanya sama?";
echo ($a == $b) ? "true\n" : "false\n"
?>