//judul
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 1 pada 14/11/2022

#include <iostream>
using namespace std;

//kamus
    int A, B, C;
    string hello, kabar;

//deskripsi
    int main()
    {
        cout << "1" << endl;
        cout << "\t\tHELLO SEMARANG\n";
        cout << "\t\tAPAKABAR HARI INI" << endl;

        cout << "\n\n\n2" << endl;
        cout << "A = 1.9 \t\t B = input \t\t C = 20" << endl;
        A = 1.9;
        C = 20;
        cout << "Masukkan nilai B = "; cin >> B;
        cout << "*)   A * B = " << A*B << endl;
        cout << "**)  A + C * B = " << A+C*B << endl;
        A = 20;
        C = 1.9;
        cout << "***) Rubah A = 20 dan C = 1.9" << endl;
        cout << "A = " << A << endl;
        cout << "B = " << B << endl;

        cout << "\n\n\n3" << endl;
        hello = "HELLO SEMARANG";
        kabar = "APAKABAR HARI INI";
        cout << hello << endl;
        cout << kabar << endl;


        return 0;
    }
