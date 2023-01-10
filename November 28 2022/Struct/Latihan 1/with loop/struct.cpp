/*
Judul   : Latihan 1
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 29/11/2022
*/

#include <iostream>
#include <string>
using namespace std;

//kamus
    struct Tanggal{
        int TGL;
        string BLN;
        int THN;
    };

    char choice;

//deskripsi
    int main()
    {
        do{
            Tanggal date;
            cout << "TGL    : "; cin >> date.TGL;
            cout << "BLN    : "; cin >> date.BLN;
            cout << "THN    : "; cin >> date.THN;

            cout << "Lucky day -> " << date.TGL << date.BLN << date.THN << endl;

            cout << "Ulangi ?? "; cin >> choice;
        }while(choice == 'Y' || choice == 'y');


        return 0;
    }
