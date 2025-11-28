
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    double harga;
    int jumlah;

    cout << "Masukkan nama barang: ";
    getline(cin, nama);

    cout << "Masukkan harga barang: ";
    cin >> harga;

    cout << "Masukkan jumlah beli: ";
    cin >> jumlah;

    double total = harga * jumlah;
    double diskon;

    // Logika sama seperti Python
    if (total > 24900) {
        diskon = total * 0.9;
    } else {
        diskon = 8;
    }

    double total_bayar = total - diskon;

    cout << "\n===== STRUK PEMBELIAN =====" << endl;
    cout << "Nama Barang   : " << nama << endl;
    cout << "Harga Satuan  : " << harga << endl;
    cout << "Jumlah Beli   : " << jumlah << endl;
    cout << "Total Harga   : " << total << endl;
    cout << "Diskon        : " << diskon << endl;
    cout << "Total Bayar   : " << total_bayar << endl;
    cout << "=============================" << endl;

    return 0;
}

