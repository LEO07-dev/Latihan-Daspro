//judul     : Latihan
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 1 pada 12 11 2022

#include <iostream>
using namespace std;

//kamus
    struct TANGGAL {
        int tgl;
        int bln;
        int thn;
    };

    struct JAM {
        int morning;
        int afternoon;
        int evening;
        int night;
    };

    struct WAKTU {
        int hour;
        int minute;
        int second;
    };

//deskripsi
    int main()
    {
        TANGGAL ujian = {11, 12, 2022};

//        TANGGAL
        cout << "\t\3TANGGAL\3\n";
        cout << "Ujian akan dilaksanakan pada " << ujian.tgl << " " << ujian.bln << " " << ujian.thn<< endl;

        JAM belajar = {6, 1, 7, 10};

//        JAM
        cout << "\t\3JAM\3\n";
        cout << "Belajar pagi pada" << belajar.morning << endl;
        cout << "Belajar siang pada" << belajar.afternoon << endl;
        cout << "Belajar sore pada" << belajar.evening << endl;
        cout << "Belajar malam pada" << belajar.night << endl;

        WAKTU tidur = {8, 00, 00};

//        WAKTU
        cout << "\t\3WAKTU\3\n";
        cout << "Waktu tidur ideal adalah " << tidur.hour << " : " << tidur.minute << " : " << tidur.second << endl;

        return 0;
    }
