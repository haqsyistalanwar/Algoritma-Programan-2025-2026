<?php
// membuat fungsi 
function perkenalan($nama, $salam)
{
    echo $salam . ", ";
    echo "Perkenalkan, nama saya " . $nama . "<br/>";
    echo "Senang berkenalan dengan anda<br/>";
}

// memanggil fungsi yang sudah dibuat 
perkenalan("Muhammad", "Hi");
echo "<hr>";
$saya = "Muhammad Aqyist";
$saya = "Muhammad Abdul Haqsyist Al Anwar";
$ucapanSalam = "Selamat pagi";
// memanggilnya lagi 
perkenalan($saya, $ucapanSalam);
?>
