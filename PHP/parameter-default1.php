
<?php
// membuat fungsi 
function perkenalan($nama, $salam = "Assalamualaikum")
{
    echo $salam . ", ";
    echo "Perkenalkan, nama saya " . $nama . "<br/>";
    echo "Senang berkenalan dengan anda<br/>";
}
// memanggil fungsi yang sudah dibuat 
perkenalan("Muhammad Aqyist", "Hi");
perkenalan("Muhammad Haqsyist Al Anwar", "Hi");
echo "<hr>";
$saya = "Muhammad Aqyist";
$saya = "Muhammad Abdul Haqsyist Al Anwar";
$ucapanSalam = "Selamat pagi";
// memanggilnya lagi tanpa mengisi parameter salam 
perkenalan($saya)
?>