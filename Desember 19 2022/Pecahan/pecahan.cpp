/*
judul   : type bentukan pecahan
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada Des 20 2022
*/

#include <iostream>
using namespace std;

//kamus
    struct pecahan{
        float pembilang;
        float penyebut;
    };
    float a, b;
    int hasil;


//deskripsi
    int main()
    {
        struct pecahan pecahan_1;
        struct pecahan pecahan_2;

        //operation
        cout << "Pecahan 1 \n";
        cin >> pecahan_1.pembilang;
        cout << " --- " << endl;
        cin >> pecahan_1.penyebut;

        cout << endl << endl;

        cout << "Pecahan 2 \n";
        cin >> pecahan_2.pembilang;
        cout << " --- " << endl;
        cin >> pecahan_2.penyebut;

        cout << endl << endl << endl;

        /* Assigment */
        a = pecahan_1.pembilang / pecahan_1.penyebut;
        b = pecahan_2.pembilang / pecahan_2.penyebut;
        hasil = a + b;

        cout << "Result : " << hasil;




        return 0;
    }
