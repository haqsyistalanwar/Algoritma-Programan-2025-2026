# =========================================
# Program Menghitung Nilai Akhir Mahasiswa
# =========================================

# Fungsi untuk menghitung nilai akhir
def hitung_nilai_akhir(kehadiran, forum, tugas_individu, tugas_kelompok, uts, uas, project):
    # bobot bisa disesuaikan sesuai kebutuhan
    nilai_akhir = (
        (kehadiran * 0.1) +
        (forum * 0.1) +
        (tugas_individu * 0.15) +
        (tugas_kelompok * 0.15) +
        (uts * 0.2) +
        (uas * 0.2) +
        (project * 0.1)
    )
    return nilai_akhir

# Fungsi untuk menentukan huruf mutu
def huruf_mutu(nilai):
    if nilai >= 85:
        return "A"
    elif nilai >= 75:
        return "B"
    elif nilai >= 65:
        return "C"
    elif nilai >= 55:
        return "D"
    else:
        return "E"

# ================================
# Input data mahasiswa
# ================================
print("===============================")
print("     MENGHITUNG NILAI AKHIR    ")
print("===============================")

nim = input("NIM   : ")
nama = input("NAMA  : ")

kehadiran = int(input("NILAI KEHADIRAN     : "))
forum = int(input("NILAI FORUM         : "))
tugas_individu = int(input("NILAI TUGAS INDIVIDU: "))
tugas_kelompok = int(input("NILAI TUGAS KELOMPOK: "))
uts = int(input("NILAI UTS           : "))
uas = int(input("NILAI UAS           : "))
project = int(input("NILAI PROJECT       : "))

# ================================
# Proses
# ================================
nilai_akhir = hitung_nilai_akhir(kehadiran, forum, tugas_individu, tugas_kelompok, uts, uas, project)
huruf = huruf_mutu(nilai_akhir)

# ================================
# Output
# ================================
print("\n[", nim, nama, "]")
print("NILAI AKHIR :", round(nilai_akhir))
print("HURUF MUTU  :", huruf)
print("===============================")