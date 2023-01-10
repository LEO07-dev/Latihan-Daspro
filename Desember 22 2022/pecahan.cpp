/*
judul   : type bentukan pecahan
Programer   : Azmi Jalaluddin Amron
Modify      : ke 2 pada Des 22 2022
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

        //local variable
        int pembilang1, pembilang2, penyebut1, penyebut2;
        int bawah;

        //assigment
        pembilang1 = pecahan_1.pembilang;
        penyebut1 = pecahan_1.penyebut;
        pembilang2 = pecahan_2.pembilang;
        penyebut2 = pecahan_2.penyebut;

        //Input value
        cout << "Pecahan 1\n";
        cin >> pembilang1;
        cout << "---" << endl;
        cin >> penyebut1;

        cout << endl << endl;

        cout << "Pecahan 2\n";
        cin >> pembilang2;
        cout << "---" << endl;
        cin >> penyebut2;

        cout << endl << endl;

        //Operation
        if (penyebut1==penyebut2)
        {
            hasil = pembilang1 + pembilang2;
            bawah = (penyebut1+penyebut2)/2;
        }



        return 0;
    }

