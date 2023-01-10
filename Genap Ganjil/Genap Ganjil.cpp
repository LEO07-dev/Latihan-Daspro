/*
judul
Membuat program untuk mengetahui genap ganjil dari penjumlahan
Programer	: Azmi Jalaluddin Amron
Modify	    : 28 September 2022
*/

#include <iostream>
#include <string.h>
using namespace std;

//kamus
    int bil1, bil2, hasil;

//deskripsi
    int main()
    {
        cout << "Menentukan genap ganjil dari penjumlahan" << endl;
        cout << "Masukkan nilai pertama : \n";
        cin >> bil1;
        cout << "Masukkan nilai kedua : \n";
        cin >> bil2;
        hasil = bil1 + bil2;
        cout << "Maka hasil dari " << bil1 << " + " << bil2 << " adalah " << hasil << " termasuk bilangan";

        if (hasil%2==0)
        {
            cout << " Genap";
            if (hasil>0)
            {
                cout << " Positif" << endl;
            }
            else
            {
                cout << " Negatif\n";
            }
        }
        else
        {
            cout << " Ganjil";
            if (hasil>0)
            {
                cout << " Positif" << endl;
            }
            else
            {
                cout << " Negatif\n";
            }
        }

        switch (hasil)
        {
            case 0 :
            {
                cout << "0";
            }

            default :
            {
                cout << "Tidak Ada";
            }
        }


        return 0;
    }
