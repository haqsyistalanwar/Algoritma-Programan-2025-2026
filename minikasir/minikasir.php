<?php

// Input dari user
$nama = readline("Masukkan nama barang: ");
$harga = floatval(readline("Masukkan harga barang: "));
$jumlah = intval(readline("Masukkan jumlah beli: "));

$total = $harga * $jumlah;

// Logika diskon sama seperti Python
if ($total > 24900) {
    $diskon = $total * 0.9;  // sesuai kode Python kamu
} else {
    $diskon = 8;
}

$total_bayar = $total - $diskon;

// Output struk
echo "\n===== STRUK PEMBELIAN =====\n";
echo "Nama Barang   : $nama\n";
echo "Harga Satuan  : $harga\n";
echo "Jumlah Beli   : $jumlah\n";
echo "Total Harga   : $total\n";
echo "Diskon        : $diskon\n";
echo "Total Bayar   : $total_bayar\n";
echo "===============================\n";

?>

