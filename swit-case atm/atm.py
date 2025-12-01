valid = False

while not valid:
    nama = input("Masukkan Nama: ")
    cek = input("Apakah nama sudah benar? (true/false): ").lower()
    if cek == "true":
        valid = True
    else:
        print("Silahkan masukkan nama lagi!\n")

nim = input("Masukkan NIM (tanpa huruf): ")
saldo = int(nim)

print("\n===== DATA AKUN =====")
print("Nama:", nama)
print("Saldo awal: Rp", format(saldo, ","))

while True:
    print("\n===== MENU ATM =====")
    print("1. Cek Saldo\n2. Tarik Tunai\n3. Setor Tunai\n4. Transfer\n5. Keluar")
    pilih = int(input("Pilih menu: "))

    match pilih:
        case 1:
            print("Saldo Anda: Rp", format(saldo, ","))
        case 2:
            tarik = int(input("Nominal tarik: "))
            saldo -= tarik
        case 3:
            setor = int(input("Nominal setor: "))
            saldo += setor
        case 4:
            transfer = int(input("Nominal transfer: "))
            saldo -= transfer
        case 5:
            break

print("Terimakasih telah memakai ATM!")