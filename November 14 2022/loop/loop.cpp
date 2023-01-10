/*
judul : Membuat loop untuk masukkan nilai matkul
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 14/11/2022
*/

#include <iostream>
using namespace std;

//kamus
    int i, b[7];
    char choice;
    string a[7];

//deskripsi
    int main()
    {
        cout << "Masukkan nilai mata kuliah!" << endl;
        i=0;
        do{
            cout << "Masukkan nama mata kuliah : "; cin >> a[i];
            cout << "Masukkan nilai            : "; cin >> b[i];

            cout << "\n\nAda matkul lagi ? \n";
            cin >> choice;
            i=i+1;
        }while (choice=='Y' || choice=='y');

        return 0;
    }
