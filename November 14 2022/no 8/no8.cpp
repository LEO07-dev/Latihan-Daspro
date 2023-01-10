/*
judul : no 9
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 16/11/2022
*/

#include <iostream>
using namespace std;

//kamus
    int DATANE[7], CARI, x;

//deskripsi
    int main()
    {
        x=0;
        while (x<7)
        {
            cout << "Datane ke-" << x+1 << " = ";
            cin >> DATANE[x];
            cout << endl;
            x=x+1;
        }
        cout << "Masukkan angka yang anda cari : ";
        cin >> CARI;
        x=0;
        while (x<7)
        {
            if (DATANE[x]==CARI)
            {
                cout << "KETEMU NDES " << CARI << " di lokasi " << x+1 << endl;
            }
            x=x+1;
        }


        return 0;
    }
