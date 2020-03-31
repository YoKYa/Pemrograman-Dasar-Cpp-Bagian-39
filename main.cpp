#include <iostream>

using namespace std;

//enum
enum data{
    Novel, Pelajaran, Kamus
};

int main(){
    system("cls");
    // Enum Merupakan Sebuah Tipe data yang berisi konstanta, Enum merupakan tipe data yang dibuat oleh kita sendiri

    //deklarasi hampir sama dengan struct
    data Buku;
    
    //Penggunaan
    Buku = Kamus;
    //Dikeluarkan dalam bentuk index
    cout << Buku;
    cin.get();
    
    cout << endl << endl;
    if( Buku == 0){
        cout << "Ini Buku Novel " << endl;
    }
    else if( Buku == 1){
        cout << "Ini Buku Pelajaran " << endl;
    }
    else if( Buku == 2){
        cout << "Ini Buku Kamus " << endl;
    }
    
    cin.get();
    return 0;
}