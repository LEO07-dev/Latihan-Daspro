//judul
//Latihan switch case
//Programer     : Azmi Jalaluddin Amron
//Modify        : 25 September 2022

#include <iostream>
using namespace std;

//kamus
    int pilihan;

//deskripsi
    int main()
    {
        cout << "Masukkan pilihan anda\n";
        cout << "Dari angka 1~10\n";
        cin >> pilihan;
        switch (pilihan)
        {
            case 1 :
            {
                cout << "Satu"; break;
            }

            case 2 :
            {
                cout << "Dua"; break;
            }

            case 3 :
            {
                cout << "Tiga"; break;
            }

            case 4 :
            {
                cout << "Empat"; break;
            }

            case 5 :
            {
                cout << "Lima"; break;
            }

           case 6 :
            {
                cout << "Enam"; break;
            }

            case 7 :
            {
                cout << "Tujuh"; break;
            }

            case 8 :
            {
                cout << "Delapan"; break;
            }

            case 9 :
            {
                cout << "Sembilan"; break;
            }

            case 10 :
            {
                cout << "Sepuluh"; break;
            }

            default :
            {
                cout << "Lainnya"; break;
            }
        }

        return 0;
    }
