#include <iostream>
using namespace std;

int main(){
    int baris, kolom, tinggi;

    cout<<"\nMasukkan tinggi segitiga: "; cin>>tinggi;
    cout<<endl;

    //Segitiga Siku-siku (Kiri)
    for(baris=1; baris<=tinggi; baris++){
        for(kolom=1; kolom<=baris; kolom++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;

    //Segitiga Siku-siku Terbalik (Kiri)
    for(baris=1; baris<=tinggi; baris++){
        for(kolom=tinggi; kolom>=baris; kolom--){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;

    //Segitiga Siku-siku (Kanan)
    for(baris=1; baris<=tinggi; baris++){
        for(kolom=tinggi; kolom>baris; kolom--){
            cout<<" ";
        }
        for(kolom=1; kolom<=baris; kolom++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;

    //Segitiga Siku-siku Terbalik (Kanan)
    for(baris=1; baris<=tinggi; baris++){
        for(kolom=1; kolom<baris; kolom++){
            cout<<" ";
        }
        for(kolom=tinggi; kolom>=baris; kolom--){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;

    //Segitiga Sama Kaki
    for(baris=1; baris<=tinggi; baris++){
        for(kolom=tinggi; kolom>baris; kolom--){
            cout<<" ";
        }
        for(kolom=1; kolom<=baris*2-1; kolom++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;

    //Segitiga Sama Kaki Terbalik
    for(baris=1; baris<=tinggi; baris++){
        for(kolom=1; kolom<baris; kolom++){
            cout<<" ";
        }
        for(kolom=tinggi*2; kolom>baris*2-1; kolom--){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;

    //Hollow Triangle
    for(baris=1; baris<=tinggi; baris++){
        for(kolom=tinggi; kolom>baris; kolom--){
            cout<<" ";
        }
        for(kolom=1; kolom<=(2*baris-1); kolom++){

            if(baris==tinggi || kolom==1 || kolom==(2*baris-1)){
                cout<<"*";
            } else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    cout<<endl;

    for(baris=1; baris<=tinggi; baris++){
        for(kolom=1; kolom<baris; kolom++){
            cout<<" ";
        }  
        cout<<endl;
    }
}