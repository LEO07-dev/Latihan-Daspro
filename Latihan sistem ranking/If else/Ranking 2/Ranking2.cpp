/*
judul
Membuat program menghitung ranking
Programer   : Azmi Jalaluddin Amron
Modify      : 30 September 2022
*/

#include <iostream>
using namespace std;

//kamus
    int A, B, C;

//deskripsi
    int main()
    {
        A!=B;
        B!=C;
        C!=A;

        cout << "Mari mengurutkan dari yang terkecil sampai yang terbesar" << endl;
        cout << "Masukkan 3 nilai sebagai perbandingan" << endl;
        cout << "Masukkan nilai pertama : "; cin >> A;
        cout << "Masukkan nilai kedua   : "; cin >> B;
        cout << "Masukkan niilai ketiga : "; cin >> C;
        if (A < B)
        {
            if (B < C)
            {
                cout << "(" << A << ", " << B << ", " << C << ")" << endl;
            }
            else
            {
                if (C > A)
                {
                    cout << "(" << A << ", " << C << ", " << B << ")" << endl;
                }
                else
                {
                    cout << "(" << C << ", " << A << ", " << B << ")" << endl;
                }
            }


        }
        else
        {
            if (A < C)
            {
                cout << "(" << B << ", " << A << ", " << C << ")" << endl;
            }
            else
            {
                if (B < C)
                {
                    cout << "(" << B << ", " << C << ", " << A << ")" << endl;
                }
                else
                {
                    cout << "(" << C << ", " << B << ", " << A << ")" << endl;
                }
            }
        }

        return 0;

    }
