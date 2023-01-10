//judul : Latihan 2
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 1 pada 11/30/2022

#include <iostream>
using namespace std;

//kamus
    int i, jumlah, x, y, tertua;
    //umur yang tersedia
    int umur_arr[8] = {23, 24, 21, 22, 21, 19, 20, 24};

//deskripsi
    int main()
    {

        //tampilkan
        cout << "umur ";
        //awal
        jumlah = 0;
        i=0;
        while(i<8)
        {
            cout << umur_arr[i] << " ";
            //banyak data
            jumlah = jumlah + 1;
            //counter
            i=i+1;
        }
        //jumlah data
        cout << "\njumlah data ada " << jumlah;

        //mencari umur tertua
        x = 0;
        while(x<8)
        {
            y = 1;
            while(y<8)
            {
                if(umur_arr[x]>umur_arr[y])
                {
                    tertua = umur_arr[x];
                }
                y = y +1;
            }
            x = x + 1;
        }
        cout << "\numur tertua adalah " << tertua;



        return 0;
    }
