#include <stdio.h>
#include <stdlib.h>

// Struktur Node
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Deklarasi HEAD & TAIL
Node *head = NULL;
Node *tail = NULL;

// Tambah Depan
void tambahDepan(int nilai) {
    Node *baru = (Node*) malloc(sizeof(Node));
    if (baru == NULL) {
        printf("Memory gagal dialokasikan!\n");
        return;
    }

    baru->data = nilai;
    baru->next = head;

    if (head == NULL) {
        head = tail = baru; // list kosong
    } else {
        head = baru;
    }

    printf("Data %d berhasil ditambah di depan.\n", nilai);
}

// Tambah Belakang
void tambahBelakang(int nilai) {
    Node *baru = (Node*) malloc(sizeof(Node));
    if (baru == NULL) {
        printf("Memory gagal dialokasikan!\n");
        return;
    }

    baru->data = nilai;
    baru->next = NULL;

    if (head == NULL) {
        head = tail = baru; // list kosong
    } else {
        tail->next = baru;
        tail = baru;
    }

    printf("Data %d berhasil ditambah di belakang.\n", nilai);
}

// Hapus Depan
void hapusDepan() {
    if (head == NULL) {
        printf("List kosong!\n");
        return;
    }

    Node *hapus = head;
    head = head->next;

    if (head == NULL) { 
        tail = NULL; // list jadi kosong
    }

    printf("Data %d berhasil dihapus dari depan.\n", hapus->data);
    free(hapus);
}

// Hapus Belakang
void hapusBelakang() {
    if (head == NULL) {
        printf("List kosong!\n");
        return;
    }

    if (head == tail) { // cuma 1 data
        printf("Data %d berhasil dihapus.\n", head->data);
        free(head);
        head = tail = NULL;
        return;
    }

    Node *temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }

    printf("Data %d berhasil dihapus dari belakang.\n", tail->data);
    free(tail);

    tail = temp;
    tail->next = NULL;
}

// Tampilkan List
void tampilkanList() {
    if (head == NULL) {
        printf("List kosong!\n");
        return;
    }

    Node *temp = head;
    printf("Isi Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// MAIN PROGRAM
int main() {
    int pilih, nilai;

    do {
        printf("\n==== MENU LINKED LIST (HEAD + TAIL) ====\n");
        printf("1. Tambah Depan\n");
        printf("2. Tambah Belakang\n");
        printf("3. Hapus Depan\n");
        printf("4. Hapus Belakang\n");
        printf("5. Tampilkan List\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilih);

        switch (pilih) {
            case 1:
                printf("Masukkan nilai: ");
                scanf("%d", &nilai);
                tambahDepan(nilai);
                break;

            case 2:
                printf("Masukkan nilai: ");
                scanf("%d", &nilai);
                tambahBelakang(nilai);
                break;

            case 3:
                hapusDepan();
                break;

            case 4:
                hapusBelakang();
                break;

            case 5:
                tampilkanList();
                break;

            case 0:
                printf("Keluar program...\n");
                break;

            default:
                printf("Menu tidak valid!\n");
        }

    } while (pilih != 0);

    return 0;
}
