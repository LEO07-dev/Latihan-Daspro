/*
judul   : latihan
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 12/4/2022
*/

#include <iostream>
#include <string.h> //mengenali strupr
#include <conio.h> //mengenali getch() dan clrscr()
using namespace std;

//kamus
    int konsonan, vokal, kata,i;
   // char ArrKATA;


//deskripsi
    int main()
    {
        int a;
        cout << "\tMASUKKAN JUMLAH KARAKTER TERLEBIH DAHULU!\n";
        cout << "Berapa karakter : ";
        cin >> a;
        char ArrKATA[a];

        cout << "\nKATA : ";cin >> ArrKATA;
        strupr(ArrKATA);    //data diambil untuk diubah otomatis ke huruf besar
        cout << ArrKATA << endl;
        konsonan = 0;
        vokal = 0;
        kata = 0;
        i = 0;
        while(i<a)
        {
            if(ArrKATA[i]=='A' || ArrKATA[i]=='I' || ArrKATA[i]=='U' || ArrKATA[i]=='E' || ArrKATA[i]=='O')
            {
                vokal = vokal + 1;
            }
            else
            {
                konsonan = konsonan + 1;
            }
            i = i + 1;
        }
        cout << "\n\n\tJumlah : " << endl;
        cout << "\nKonsonan : " << konsonan;
        cout << "\nVokal    : " << vokal;


        return 0;
    }
