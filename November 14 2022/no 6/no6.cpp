//judul : no 6
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 1 pada 14/11/2022

#include <iostream>
using namespace std;

//kamus
    float A;
    int B, C, CARI;
//deskripsi
    int main()
    {
        cout << "A = "; cin >> A;
        cout << "B = "; cin >> B;
        cout << "C = "; cin >> C;
        cout << "Masukkan angka yang anda cari = "; cin >> CARI;

        if (A==CARI)
        {
            cout << A << " yang saya cari." << endl;
        }
        else if (B==CARI)
        {
            cout << B << " yang saya cari." << endl;
        }
        else if (C==CARI)
        {
            cout << C << " yang saya cari." << endl;
        }
        else
        {
            cout << A << endl;
            cout << B << endl;
            cout << C << endl;
            cout << "Tidak ditemukan." << endl;
        }


        return 0;
    }
