//judul : no7
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 1 pada 14/11/2022

#include <iostream>
using namespace std;

//kamus
    int x, DATANE[7];

//deskripsi
    int main()
    {
        x=1;
        while(x<8)
        {
            cout << "Masukkan nilai ke " << x << " adalah "; cin >> DATANE[x];
            x=x+1;
        }


        return 0;
    }
