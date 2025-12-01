<?php
$nama = "";
$valid = false;

while(!$valid){
    echo "Masukkan Nama: ";
    $nama = trim(fgets(STDIN));
    
    echo "Apakah nama sudah benar? (true/false): ";
    $cek = trim(fgets(STDIN));
    
    if(strtolower($cek) == "true"){
        $valid = true;
    } else {
        echo "Silahkan masukkan nama kembali!\n";
    }
}

echo "Masukkan NIM (angka saja): ";
$nim = trim(fgets(STDIN));
$saldo = (int)$nim;

echo "\n===== DATA AKUN =====\n";
echo "Nama: $nama\n";
echo "Saldo Awal: Rp " . number_format($saldo, 0, ",", ".") . "\n";

do {
    echo "\n===== MENU ATM =====\n";
    echo "1. Cek Saldo\n2. Tarik Tunai\n3. Setor Tunai\n4. Transfer\n5. Keluar\n";
    echo "Pilih menu: ";
    $pilih = trim(fgets(STDIN));

    switch($pilih){
        case 1:
            echo "Saldo Anda: Rp " . number_format($saldo, 0, ",", ".") . "\n";
            break;
        case 2:
            echo "Masukkan nominal tarik: ";
            $tarik = trim(fgets(STDIN));
            $saldo -= $tarik;
            break;
        case 3:
            echo "Masukkan nominal setor: ";
            $setor = trim(fgets(STDIN));
            $saldo += $setor;
            break;
        case 4:
            echo "Masukkan nominal transfer: ";
            $transfer = trim(fgets(STDIN));
            $saldo -= $transfer;
            break;
    }
} while($pilih != 5);

echo "Terimakasih telah menggunakan ATM!\n";