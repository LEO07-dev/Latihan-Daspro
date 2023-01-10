/*
judul  : type data bentukan
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 12/15/2022
*/

#include <iostream>
#include <string>
using namespace std;

//kamus
    struct TANGGAL {
        int tgl;
        string bln;
        int thn;
    };

    struct JAM {
        int hour;
        int minute;
        int second;
    };

    struct WAKTU {
        TANGGAL Tiba;
        JAM Pukul;
    };

    struct TmptTgl {
        string meet;
        WAKTU time;
    };

//deskripsi
    int main()
    {
        TANGGAL pertama;
        TANGGAL kedua;

        pertama.tgl = 27;
        pertama.bln = "Desember";
        pertama.thn = 2004;

        kedua.tgl = 7;
        kedua.bln = "Agustus";
        kedua.thn = 2006;

        cout << pertama.tgl << " " << pertama.bln << " " << pertama.thn << endl;
        cout << kedua.tgl << " " << kedua.bln << " " << kedua.thn << endl;
        cout << endl << endl;

        JAM Nio;
        JAM Surya;

        Nio.hour = 9;
        Nio.minute = 28;
        Nio.second = 39;

        Surya.hour = 12;
        Surya.minute = 47;
        Surya.second = 55;

        cout << Nio.hour << " : " << Nio.minute << " : " << Nio.second << endl;
        cout << Surya.hour << " : " << Surya.minute << " : " << Surya.second << endl;
        cout << endl << endl;

        WAKTU Nlahir;
        WAKTU Slahir;

        Nlahir.Tiba.tgl = pertama.tgl;
        Nlahir.Tiba.bln = pertama.bln;
        Nlahir.Tiba.thn = pertama.thn;

        Nlahir.Pukul.hour = Nio.hour;
        Nlahir.Pukul.minute = Nio.minute;
        Nlahir.Pukul.second = Nio.second;

        Slahir.Tiba.tgl = kedua.tgl;
        Slahir.Tiba.bln = kedua.bln;
        Slahir.Tiba.thn = kedua.thn;

        Slahir.Pukul.hour = Surya.hour;
        Slahir.Pukul.minute = Surya.minute;
        Slahir.Pukul.second = Surya.second;

        cout << Nlahir.Tiba.tgl << " " << Nlahir.Tiba.bln << " " << Nlahir.Tiba.thn << " ===> ";
        cout << Nlahir.Pukul.hour << " : " << Nlahir.Pukul.minute << " : " << Nlahir.Pukul.second << endl;
        cout << Slahir.Tiba.tgl << " " << Slahir.Tiba.bln << " " << Slahir.Tiba.thn << " ===> ";
        cout << Slahir.Pukul.hour << " : " << Slahir.Pukul.minute << " : " << Slahir.Pukul.second << endl;
        cout << endl << endl;

        TmptTgl lestariBirth;
        TmptTgl dwiBirth;

        lestariBirth.meet = "Bandung";
        dwiBirth.meet = "Demak";

        lestariBirth.time.Tiba.tgl = Slahir.Tiba.tgl;
        lestariBirth.time.Tiba.bln = Slahir.Tiba.bln;
        lestariBirth.time.Tiba.thn = Slahir.Tiba.thn;

        lestariBirth.time.Pukul.hour = Slahir.Pukul.hour;
        lestariBirth.time.Pukul.minute = Slahir.Pukul.minute;
        lestariBirth.time.Pukul.second = Slahir.Pukul.second;

        dwiBirth.time.Tiba.tgl = Nlahir.Tiba.tgl;
        dwiBirth.time.Tiba.bln = Nlahir.Tiba.bln;
        dwiBirth.time.Tiba.thn = Nlahir.Tiba.thn;

        dwiBirth.time.Pukul.hour = Nlahir.Pukul.hour;
        dwiBirth.time.Pukul.minute = Nlahir.Pukul.minute;
        dwiBirth.time.Pukul.second = Nlahir.Pukul.second;

        cout << lestariBirth.meet;
        cout << ", " << lestariBirth.time.Tiba.tgl << " " << lestariBirth.time.Tiba.bln << " " << lestariBirth.time.Tiba.thn << " ===> ";
        cout << lestariBirth.time.Pukul.hour << " : " << lestariBirth.time.Pukul.minute << " : " << lestariBirth.time.Pukul.second << endl;
        cout << dwiBirth.meet;
        cout << ", " << dwiBirth.time.Tiba.tgl << " " << dwiBirth.time.Tiba.bln << " " << dwiBirth.time.Tiba.thn << " ===> ";
        cout << dwiBirth.time.Pukul.hour << " : " << dwiBirth.time.Pukul.minute << " : " << dwiBirth.time.Pukul.second << endl;


        return 0;
    }
