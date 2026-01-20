#include <iostream>
#include <conio.h>
#include <atdlib.h>
#define MAX 8
usiing namespacxe std;

int nomer[MAX];
int head=-1, tail=-1;bool
IsEmpty () {
    if (tail ==-1){
        return true;
    }else {
        return false;
    }
}

bool IsFull () {
    if(tail == MAX-1){
        return true;
    }else{
        return false;
    }
}

void AntrianMasuk (int no){
    if (IsEmpty() ) {
        head=tail=0;
    }else {
        tail++;
    }
    nomer [tail]=no;
}

void AntirianKeluar(){
    if  (IsEmpty ()) {
        cout<<"Antrian sudah kosong ! gecth ();
    } else {
        for (int a=head;a<tail;a++){
            nomer [a]=nomer[a+1];
        }
        tail--;
        if(tail == -1){
            head = -1;
        }
    }
} 