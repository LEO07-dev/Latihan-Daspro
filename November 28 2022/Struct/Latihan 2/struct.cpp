/*
Judul   : Latihan 2
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada Nov 30 2022
*/

#include <iostream>
#include <string>
using namespace std;

//kamus
    struct TANGGAL{
        int tgl;
        int bln;
        int thn;
    };

    struct TEMPATTANGGAL{
        string kota;
        struct TANGGAL Tgl;
    };

    struct WAKTU{
        int jam;
        int menit;
        int detik;
    };

    struct DateTime{
        struct WAKTU waktu;
        struct TANGGAL tanggal;
    };

//deskripsi
    int main()
    {
        TEMPATTANGGAL place;
        cin >> place.Tgl.tgl;

        cout << place.Tgl.tgl;

        return 0;
    }
