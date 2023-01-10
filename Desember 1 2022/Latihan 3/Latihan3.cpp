//judul : Latihan 3
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 1 pada 12/4/2022

#include <iostream>
#include <math.h>
using namespace std;

//kamus
    float nilai[7];
    int i, bil_bulat=0, bil_desimal=0;
    float a;

//deskripsi
    int main()
    {
        float r[7];
        int i = 0;
        while(i<7)
        {
            cout << "Masukkan angka ke-" << i+1 << " = ";cin >> r[i];
            i = i + 1;
        }

        int jumlah=0;
        int p=0;
        i=0;
        while(i<7)
        {
            if (fmod(r[i],1.0)==0.0){
            jumlah = jumlah + 1;
            }
            else{
                p = p + 1;
            }
            i = i + 1;
        }

        cout << "Jumlah bilangan desimal adalah = " << jumlah << endl;
        cout << "Jumlah bilangan bulat adalah =" << p;



        return 0;
    }
