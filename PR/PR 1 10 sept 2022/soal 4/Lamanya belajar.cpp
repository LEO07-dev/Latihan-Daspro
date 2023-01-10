//judul
//Menghitung lamanya belajar
//Programer : Azmi Jalaluddin Amron
//Modify    : 13 Sept 2022

#include <iostream>
using namespace std;

//kamus
    int JHH1, JHH2, JMM1, JMM2, JSS1, JSS2, hasil1, hasil2, hasil3;


//diskripsi
    int main ()
    {
        cout << "Belajar menghitung lama waktu selama belajar!" << endl;
        JHH1 = 8;
        JMM1 = 10;
        JSS1 = 30;
        cout << "Waktu mulainya belajar = " << JHH1 << ":" << JMM1 << ":" << JSS1 << endl;

        JHH2 = 10;
        JMM2 = 30;
        JSS2 = 50;
        cout << "Waktu berakhirnya belajar = " << JHH2 << ":" << JMM2 << ":" << JSS2 << endl;

        hasil1 = JHH2 - JHH1;
        hasil2 = JMM2 - JMM1;
        hasil3 = JSS2 - JSS1;
        cout << "Lamanya belajar adalah = " << hasil1 << "jam" << hasil2 << "menit" << hasil3 << "detik" << endl;

        cout << "Semangat belajar";

    return 0;

    }
