#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX 8
using namespace std;

int nomer[MAX];
int head = 0, tail = -1;

// Cek kosong
bool isEmpty(){
    return tail == -1;
}

// Cek penuh
bool isFull(){
    return tail == MAX - 1;
}

// Masuk antrian
void antrianMasuk(int no){
    if(isFull()){
        cout << "Antrian sudah penuh!" << endl;
        return;
    }
    if(isEmpty()){
        head = tail = 0;
    } else {
        tail++;
    }
    nomer[tail] = no;
}

// Keluar antrian
void antrianKeluar(){
    if(isEmpty()){
        cout << "Antrian kosong!" << endl;
        return;
    }

    cout << "Nomor antrian [" << nomer[head] << "] dipanggil" << endl;

    for(int i = head; i < tail; i++){
        nomer[i] = nomer[i + 1];
    }

    tail--;
    if(tail < 0){
        head = 0;
        tail = -1;
    }
}

// Tampilkan antrian
void tampilAntrian(){
    if(isEmpty()){
        cout << "Antrian kosong!" << endl;
        return;
    }

    cout << "==============================" << endl;
    cout << "   DAFTAR NOMOR ANTRIAN" << endl;
    cout << "==============================" << endl;

    for(int i = head; i <= tail; i++){
        cout << "Nomor Antrian: " << nomer[i] << endl;
    }

    cout << "==============================" << endl;
}

// Reset antrian
void resetAntrian(){
    head = 0;
    tail = -1;
    cout << "Antrian berhasil direset!" << endl;
}

int main(){
    system("color 1F");
    int pilih, nomor = 1;

    do{
        system("cls");
        cout << "==== ANTRIAN SEDERHANA ====" << endl;
        cout << "1. Masukkan Nomor Antrian" << endl;
        cout << "2. Keluarkan Nomor Antrian" << endl;
        cout << "3. Tampilkan Antrian" << endl;
        cout << "4. Reset Antrian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih: ";
        cin >> pilih;

        system("cls");

        switch(pilih){
            case 1:
                antrianMasuk(nomor++);
                break;
            case 2:
                antrianKeluar();
                break;
            case 3:
                tampilAntrian();
                break;
            case 4:
                resetAntrian();
                break;
            case 5:
                cout << "Terima kasih!" << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }

        cout << "\nTekan sembarang tombol...";
        getch();

    } while(true);

    return 0;
}
