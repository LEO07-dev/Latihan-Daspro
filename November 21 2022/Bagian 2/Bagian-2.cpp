/*
judul   : array lanjutan
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 23/11/2022
*/

#include <iostream>
using namespace std;

//kamus
    int ArrA[5], ArrB[5], C, i, u;

//deskripsi
    int main()
    {
        //array dalam coding diawali dengan 0

        ArrA[0]=3;
        ArrA[1]=4;
        ArrA[2]=1;
        ArrA[3]=2;
        ArrA[4]=4;
        ArrB[0]=8;
        ArrB[1]=7;
        ArrB[2]=2;
        ArrB[3]=2;
        ArrB[4]=5;

        cout << "Hasil dari C = A + B adalah ......!" << endl;
        i=0;
        while (i<5)
        {
            cout << "\tA ke-" << i+1 << endl;
            u=0;
            while (u<5)
            {
                C = ArrA[i] + ArrB[u];
                cout << "B ke-" << u+1 << endl;
                cout << "Hasil C = " << ArrA[i] << " + " << ArrB[u] << " adalah --> " << C << endl;
                u=u+1;
            }
            i=i+1;
        }

        return 0;
    }
