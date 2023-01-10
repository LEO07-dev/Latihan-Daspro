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
            //dengan perbandingan depend on
            switch (tabTLahir[i].bln)
            {
            case 1 :
                {
                    bulan[i] = "Januari";
                    break;
                }
            case 2 :
                {
                    bulan[i] = "Februari";
                    break;
                }
            case 3 :
                {
                    bulan[i] = "Maret";
                    break;
                }
            case 4 :
                {
                    bulan[i] = "April";
                    break;
                }
            case 5 :
                {
                    bulan[i] = "Mei";
                    break;
                }
            case 6 :
                {
                    bulan[i] = "Juni";
                    break;
                }
            case 7 :
                {
                    bulan[i] = "Juli";
                    break;
                }
            case 8 :
                {
                    bulan[i] = "Agustus";
                    break;
                }
            case 9 :
                {
                    bulan[i] = "September";
                    break;
                }
            case 10 :
                {
                    bulan[i] = "Oktober";
                    break;
                }
            case 11 :
                {
                    bulan[i] = "November";
                    break;
                }
            case 12 :
                {
                    bulan[i] = "Desember";
                    break;
                }
            default :
                {
                    cout << "Bulan tidak terdaftar";
                    break;
                }
            }
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

