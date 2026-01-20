def help(): 
    # ini variabel lokal 
    nama = "Muhammad Aqyist" 
    nama = "Muhammad Abdul Haqsyist Al Anwar" 
    Pekerjaan = "Machine learning & Data Science" 
    
    # mengakses variabel lokal 
    print ('Nama: %s' % nama) 
    print ('Pekerjaan: %s' % Pekerjaan) 

    # Agar bisa diakses di luar, kita panggil print-nya di dalam sini
    # atau definisikan sebagai global. Tapi ini versi paling aman:
    return nama, Pekerjaan

# Memanggil fungsi help() agar kode di dalamnya jalan
hasil_nama, hasil_kerjan = help()

# Sekarang baru bisa mengakses hasilnya di luar fungsi
print ('Nama: %s' % hasil_nama) 
print ('Pekerjaan: %s' % hasil_kerjan)