#include <iostream>
#include <map>//Merupakan Library yang digunakan untuk menyimpan elemen dalam bentuk pasangan key-value yang terurut.
#include <conio.h> // Digunakan untuk membersihkan layar, mengubah warna teks dan latar belakang, memindahkan teks, memeriksa apakah tombol ditekan atau tidak. Dalam program ini, Library 'conio.h' digunakan untuk mengubah karakter dalam Password menjadi Asterisk (*) 
using namespace std;

//Membuat Function Void
void terimaKasih(){
    cout<<"\n---------- Terima Kasih! ----------";
}

//Untuk menangani data yang memiliki banyak atribut atau properti yang perlu dikelompokkan bersama-sama dalam suatu objek
struct Buku
{
    string namaBuku;
    string namaPengarang;
    string nomorRak;
    int nomorBuku;
    int tahunTerbit;
};

int main(){

    //Membersihkan Terminal
    system("cls");

    //Membuat Kumpulan Data Buku
    map<string, Buku> dataBuku = {
    {"Java", {"Bahasa Pemrograman Java Tingkat Dasar", "Safiq Rosad", "A1", 14, 2022 }},
    {"Python", {"Buku Dasar Pemrograman Python", "Abdussomad, Dewi Ayu Nur Wulandari, Husni Faqih, Ilham Kurniawan", "A1", 35, 2021}},
    {"JavaScript", {"JavaScript Untuk Aplikasi Web", "Dr. Wahyudi, S.T., M.T.", "A3", 142, 2022}},
    {"C++", {"Pemrograman C dan C++", "Adam Mukharil Bachtiar", "A1", 9, 2017}},
    {"PHP", {"Pengantar Pemrograman Web dengan PHP dan HTML", "Andre Tantri Yanuar", "A1", 20, 2020}},
    {"CSS", {"Pemrograman Web: HTML dan CSS", "Dr. Wahyudi, S.T., M.T.", "A1", 21, 2022}},
    {"Ruby", {"Semua Bisa Menjadi Programmer Ruby Basic", "Yuniar Supardi", "A2", 65, 2019}},
    {"UI/UX", {"Teori dan Praktik Desain UI/UX", "Rifda Faticha Alfa Aziza, Atik Nurmasani, Mayada Azizah", "A1", 42, 2023}},
    {"NoSQL", {"Belajar Cepat Database NoSQL", "Agit Amrullah, Kusnawi", "A3", 122, 2022}},
    {"ML", {"Belajar Mudah dan Singkat Machine Learning", "Kusnawi, Aqsal Harris Pratama", "A2", 54, 2023}}};
    
    //Membuat Array
    const int jmlBuku=10;
    //Mengisi Array 
    string namaBuku[jmlBuku]={"Java", "Python", "JavaScript", "C++", "PHP", "CSS", "Ruby", "UI/UX", "NoSQL", "ML"};

    int pilihan;
    int a=0 ;
    char ulang;

    login:
    
    string user,pass;
    char ch;

    cout<<"\n---------- Program Pencarian Buku ----------\n";
    cout<<"\n \t Username: "; cin>>user;
    cout<<" \t Password: "; 
    //Membuat Karakter Pada Password Menjadi Asterisk (*)
    ch=getch();
    while(ch!=13){
        pass.push_back(ch);
        cout<<"*";
        ch=getch();
    }

    //Membuat Percabangan Untuk Login
    if(user=="Perpustakaan" && pass=="admin"){
        cout<<endl;
        cout<<"\n\t Anda Berhasil Login!\n";
        system("pause");//Digunakan untuk memberikan jeda. Pengguna diperintahkan untuk mengetikkan Keyword untuk melanjutkan program
    }else{
        a++;
        cout<<endl;
        cout<<"\nPassword atau Username Salah!\n";
        system("pause");
        system("cls");
        //Membuat Percabangan Jika Login Salah Sebanyak 3x, Maka Akan Keluar Dari Program
        if(a==3){
            cout<<"\nAnda Telah Gagal Login Sebanyak 3x.\n";
            cout<<"Periksa Kembali Username atau Password Anda. Hubungi Petugas Jika Perlu Bantuan.\n";
            terimaKasih();//Untuk memanggil fungsi Void
            return 0;//Berfungsi untuk keluar dari program atau mengakhiri program
        }
        goto login;//Kembali ke login
    }

    menu:
    system("cls");
    //Menampilkan Menu
    cout<<endl;
    cout<<"---------- Menu ----------\n";
    cout<<"\t 1. Cari Buku\n";
    cout<<"\t 2. Keluar\n";
    cout<<"--------------------------\n";
    cout<<"Masukkan Pilihan Anda (1, 2): "; cin>>pilihan;
    system("cls");

    //Jika Pilihan Adalah 1 (Cari Buku)
    if(pilihan==1){
        do{
            cin.ignore();
            //"cin.ignore()" Digunakan untuk mengabaikan atau menghapus satu atau lebih karakter dari buffer input. Jika tidak ada "cin.ignore()", maka pengguna tidak bisa melakukan input Nama Buku 
            string buku;
            cout<<"\n---------------------------\n";
            cout<<"Beberapa Buku yang Tersedia:\n";

            //Perulangan untuk menampilkan isi Array
            for(int i=0; i<jmlBuku; i++){
                cout<<i+1<<"."<<namaBuku[i]<<endl;
            }
            cout<<"\nMasukkan Nama Buku yang Anda Cari: "; 
            getline(cin, buku);
            cout<<endl;

            auto it= dataBuku.find(buku);//Berfungsi untuk mencari elemen dalam suatu kontainer atau struktur data dalam Map. Digunakan untuk mencari elemen di dalam Data Buku. 
            if(it != dataBuku.end()){//Membandingkan apakah buku yang dicari tersebut ada di dalam kontainer Data Buku atau tidak. Jika ada maka akan menampilkan data dibawah ini
                cout<<"\nData Buku: \n";
                cout<<"====================\n";
                cout<<"Nama Buku \t: "<<buku<<endl;
                cout<<"Judul Buku \t: "<<it->second.namaBuku<<endl;
                cout<<"Nama Pengarang \t: "<<it->second.namaPengarang<<endl;
                cout<<"Lokasi Rak \t: "<<it->second.nomorRak<<endl;
                cout<<"Nomor Buku \t: "<<it->second.nomorBuku<<endl;
                cout<<"Tahun Terbit \t: "<<it->second.tahunTerbit<<endl;
            }else{//Akan dijalankan jika buku tersebut tidak ada atau terjadi kesalahan dalam pengetikan nama buku
                cout<<"Buku yang Anda Cari Tidak Tersedia atau Coba Kembali \n";
                cout<<"dengan Mengetikkan Nama Buku Menggunakan Huruf Kapital.";
            }
            cout<<"\n\nApakah Anda Ingin Mencari Buku Lagi? (y/t): "; cin>>ulang;
        }while(ulang=='y'||ulang=='Y');

    //Pilihan 2 dari Menu (Exit)
    }else if(pilihan==2){
        terimaKasih();
        return 0;
    }else{// Pilihan yang dimasukkan oleh pengguna tidak tersedia di Menu
        cout<<"\nNomor yang Anda Input Salah\n";
        system("pause");
        goto menu;//Kembali ke Menu
    }
    system("cls");
    terimaKasih();
}