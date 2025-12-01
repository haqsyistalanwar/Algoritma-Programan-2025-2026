#include <iostream>
using namespace std;

int main() {
    string nama;
    string cek;
    bool valid = false;
    long saldo;
    string nim;

    while(!valid){
        cout << "Masukkan Nama: ";
        getline(cin, nama);

        cout << "Apakah nama sudah benar? (true/false): ";
        cin >> cek;
        cin.ignore();

        if(cek == "true") valid = true;
        else cout << "Masukkan nama kembali!\n\n";
    }

    cout << "Masukkan NIM (angka): ";
    cin >> nim;
    saldo = stol(nim);

    int pilih;
    do {
        cout << "\n===== MENU ATM =====\n";
        cout << "1. Cek Saldo\n2. Tarik Tunai\n3. Setor Tunai\n4. Transfer\n5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;

        switch(pilih){
            case 1:
                cout << "Saldo Anda: Rp " << saldo << endl;
                break;
            case 2:
                long tarik;
                cout << "Nominal tarik: ";
                cin >> tarik;
                saldo -= tarik;
                break;
            case 3:
                long setor;
                cout << "Nominal setor: ";
                cin >> setor;
                saldo += setor;
                break;
            case 4:
                long transfer;
                cout << "Nominal transfer: ";
                cin >> transfer;
                saldo -= transfer;
                break;
        }
    } while(pilih != 5);

    cout << "Terimakasih menggunakan ATM!";
}