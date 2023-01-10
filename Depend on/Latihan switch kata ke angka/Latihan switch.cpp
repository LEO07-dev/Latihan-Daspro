//judul
//Latihan switch case
//Programer     : Azmi Jalaluddin Amron
//Modify        : 25 September 2022

#include <iostream>
using namespace std;

//kamus
    string Kata;

//deskripsi
    int main()
    {
        cout << "Masukkan pilihan anda\n";
        cout << "Dari kata satu~sepuluh\n";
        cin >> Kata;
        switch (Kata)
        {
            case "satu" :
            {
                cout << "1"; 
                break;
            }

            case "dua" :
            {
                cout << "2"; 
                break;
            }

            case "tiga" :
            {
                cout << "3"; 
                break;
            }

            case "empat" :
            {
                cout << "4"; 
                break;
            }

            case "lima" :
            {
                cout << "5"; 
                break;
            }

           case "enam" :
            {
                cout << "6"; 
                break;
            }

            case "tujuh" :
            {
                cout << "7"; 
                break;
            }

            case "delapan" :
            {
                cout << "8"; 
                break;
            }

            case "sembilan" :
            {
                cout << "9"; 
                break;
            }

            case "sepuluh" :
            {
                cout << "10"; 
                break;
            }

            default :
            {
                cout << "Tidak dalam kemampuan"; 
                break;
            }
        }

        return 0;
    }
