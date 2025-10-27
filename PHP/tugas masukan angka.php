<?php
$tugas = readline("Masukan nilai tugas: ");
$uts = readline("Masukan nilai UTS:");
$uas = readline("Masukan nilai UAS:");

$nilaiAkhir = (0.3 * $tugas) + (0.3 * $uts) + (0.4 * $uas);

echo "Nilai Akhir = $nilaiAkhir\n";
if ($nilaiAkhir = 60)
   echo "Status: LULUS\n";  
else
    echo "Status: TIDAK LULUS\n";
?>