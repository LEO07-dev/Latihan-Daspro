//judul : latihan 3
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 2 pada 11/30/2022

#include <iostream>
#include <conio.h>
using namespace std;

//kamus
    /* value umur */
    int kumpulanData[12] = {23, 24, 21, 22, 21, 19, 20, 24, 31, 30, 31, 31};
    /* yang diperlukan */
    int sinonim;
    int kemunculanData[12], jumlah, tmp;
    int h, i;

//deskripsi
    int main()
    {
        sinonim = 0;

        /* Mengurutkan data secara urutan naik (20, 21, 21,...) */
        h = 0;
        while(h<12)
        {
            i = h + 1;
            while(i<12)
            {
                if(kumpulanData[h] > kumpulanData[i])
                {
                    tmp = kumpulanData[i];
                    kumpulanData[i] = kumpulanData[h];
                    kumpulanData[h] = tmp;
                }
                i = i + 1;
            }
                cout << kumpulanData[h] << " ";
            h = h + 1;
        }

        cout << "\nBanyak kemunculan data : " << endl;

        /* Proses menghitung periode kemunculan */
        h = 0;
        while(h<12)
        {
            /* Menghitung jumlah data */
            i = 0;
            jumlah = 0;
            while(i<12)
            {
                if(kumpulanData[h] == kumpulanData[i])
                    jumlah = jumlah +1;
                i = i + 1;
            }

            /* Menghindari program menampilkan angka yang sudah
            di tampilkan ke layar sebelumnya */
            if(kumpulanData[h] != kumpulanData[h-1])
                cout <<"Nilai :"<< kumpulanData[h] << " : Jumlahnya : " << jumlah <<endl;
            h = h + 1;

            /* Proses untuk menhitung banyak data kembar */
            if (jumlah>2)
                sinonim = sinonim + 1;
        }

        cout << "\nBanyak data kembar adalah " << sinonim << "\3";

        getch();
}
