# Membuat list (array di Python)
buah = ["Apel", "Mangga", "Jeruk"]

# 1. Menambah elemen (Append)
buah.append("Pisang")

# 2. Mengakses elemen (Index dimulai dari 0)
print(f"Buah pertama: {buah[0]}")

# 3. Mengubah elemen
buah[1] = "Anggur"

# 4. Menghapus elemen
buah.remove("Jeruk")

# 5. Iterasi (Looping) melalui array
print("Daftar buah terbaru:")
for b in buah:
    print(f"- {b}")