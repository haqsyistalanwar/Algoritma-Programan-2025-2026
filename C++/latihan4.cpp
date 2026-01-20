void clear () {
    head=tail=-1;
}

void View () {
    if (IsEmpty ()){
        cout<<"Antrian Kosong ! ";
    }else {
        system("cls");
            printf("=======================\n");
            printf("     DAFTAR ANTRIAN    \n");
            printf("=======================\n");
        for (ont a=head;a<=tail;a++){
            print(" [%d]" ,nomer[a]);
        }
            printf("\n=====================\n");
    }
}