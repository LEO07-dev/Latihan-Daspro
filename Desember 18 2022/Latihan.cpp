//judul : Latihan data tipe 3
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 1 pada Des 18 2022

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

//kamus
    struct TANGGAL {
        int tgl;
        int bln;
        int thn;
    };

    string bulan[3];
    int i;
    string nama[3] = {"Leo", "Veldos", "Marus"};

//deskripsi
    int main()
    {
        /* Membuat varabel bertype Tangal */
        //dengan array
        struct TANGGAL tabTLahir[3];
        // membuat inputan dengan loop
        i = 0;
        while(i<3)
        {
            cout << "Masukkan ke-" << i+1 << endl;
            cout << "Tanggal    = "; cin >> tabTLahir[i].tgl;
            cout << "Bulan      = "; cin >> tabTLahir[i].bln;
            cout << "Tahun      = "; cin >> tabTLahir[i].thn;
            bulan[i];
            //membuat perubahan pada bulan
            //dari angka ke string
            //dengan perbandingan if else
            if(tabTLahir[i].bln==1){bulan[i] = "Januari";}
            else if(tabTLahir[i].bln==2){bulan[i] = "Februari";}
            else if(tabTLahir[i].bln==3){bulan[i] = "Maret";}
            else if(tabTLahir[i].bln==4){bulan[i] = "April";}
            else if(tabTLahir[i].bln==5){bulan[i] = "Mei";}
            else if(tabTLahir[i].bln==6){bulan[i] = "Juni";}
            else if(tabTLahir[i].bln==7){bulan[i] = "Juli";}
            else if(tabTLahir[i].bln==8){bulan[i] = "Agustus";}
            else if(tabTLahir[i].bln==9){bulan[i] = "September";}
            else if(tabTLahir[i].bln==10){bulan[i] = "Oktober";}
            else if(tabTLahir[i].bln==11){bulan[i] = "November";}
            else if(tabTLahir[i].bln==12){bulan[i] = "Desember";}
            i = i + 1;
            cout << endl;
        }


        //Menampilkan hasil
        //Menggunakan loop
        i = 0;
        while(i<3)
        {
            cout << "/3" << nama[i] << "/3" << endl;
            cout << "Data diri :\n";
            cout << "Tanggal Lahir : " << tabTLahir[i].tgl << ", " << bulan[i] << " " << tabTLahir[i].thn;
            cout << endl << endl;
            i = i + 1;
        }


        getch();
    }
