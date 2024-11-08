#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(){
    system("cls");
    int pilihan;
    int a=0 ;
    char ulang;
    cout<<endl;

    login:
    string user= "";
    string pasw= "";
    
    cout<<"\n---------- Program Pencarian Buku ----------\n";
    cout<<"\n \t Username: "; cin>>user;
    cout<<" \t Password: "; cin>>pasw;
    if(user=="p" && pasw=="a"){
        cout<<"\n\t Anda Berhasil Login!\n";
        system("pause");
        goto menu;
    }else{
        a++;
        cout<<"\nPassword atau Username Salah!\n";
        system("pause");
        system("cls");
        if(a==3){
            cout<<"\nAnda Telah Gagal Login Sebanyak 3x\n";
            cout<<"Periksa Kembali Username atau Password Anda. Hubungi Admin Jika Perlu Bantuan.\n";
            cout<<endl;
            system("pause");
            goto exit;
        }
    goto login;
    }

    menu:
    system("cls");
    cout<<endl;
    cout<<"---------- Menu ----------\n";
    cout<<"\t 1. Cari Buku\n";
    cout<<"\t 2. Exit\n";
    cout<<"--------------------------\n";
    cout<<"Masukkan Pilihan Anda (1, 2): "; cin>>pilihan;

    if(pilihan==1){
        do{
            system("cls");

            string buku;
            cout<<"\nMasukkan Nama Buku yang Anda Cari: "; 
            getline(cin, buku);
            cout<<buku<<endl;

            cout<<"\n\nApakah Anda Ingin Mencari Buku Lagi? (y/t): "; cin>>ulang;
            cin.ignore();
        }while(ulang=='y'||ulang=='Y');

    }else if(pilihan==2){
        goto exit;
    }else{
        system("cls");
        cout<<"\nNomor yang Anda Input Salah\n";
        system("pause");
        goto menu;
    }

    
    exit:
    system("cls");
    cout<<"\nTerima Kasih!";
    void abort();
    
}