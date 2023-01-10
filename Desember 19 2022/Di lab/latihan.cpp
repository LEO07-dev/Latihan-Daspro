/*
Judul : Latihan
1. KASUR jadi RUSAK
2. KASUR tidak sama dengan RUSAK

Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada Des 19 2022
*/

#include <iostream>
#include <string>
using namespace std;

//kamus
    string benda;
    int a, i;
    bool palindrome = true;

//deskripsi
    int main()
    {
        cout << "\t\tPALINDROME\3\n";
        cout << endl << "Masukkan kata : ";
        getline(cin, benda);

        a = benda.length();

        i = 0;
        while(i<a)
        {
            if(benda[a]==benda[a-i-1])
            {
                palindrome = false;
            }

            i = i + 1;
        }

        cout << "Result : ";
        if(palindrome==true){
                cout << "Palindrome" << endl;
        } else {
                cout << "Bukan palindrome" << endl;
        }

        return 0;
    }
