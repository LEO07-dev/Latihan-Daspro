/*
judul
Membuat program mengurutkan ranking
Programer   : Azmi Jalaluddin Amron
Modify      : 30 September
*/

#include <iostream>
#include <string.h>
using namespace std;

//kamus
    int A, B, C;

//deskripsi
    int main()
    {
        cout << "Mari menghitung urutan ranking\n";
        cout << "Masukkan 3 nilai berbeda sebagai perbandingan\n";
        cout << "Masukkan nilai pertama : "; cin >> A;
        cout << "Masukkan nilai kedua   : "; cin >> B;
        cout << "Masukkan nilai ketiga  : "; cin >> C;

        if (A!=B || B!=C || A!=C)
        {
            if (A<B && B<C)
            {
                cout << "(" << A << ", " << B << ", " << C << ")" << endl;
            }
            else
            {
                if (A<B && B>C && C>A)
                {
                    cout << "(" << A << ", " << C << ", " << B << ")" << endl;
                }
                else
                {
                    if (A>B && B<C && C>A)
                    {
                        cout << "(" << B << ", " << A << ", " << C << ")" << endl;
                    }
                    else
                    {
                        if (A>B && B<C && C<A)
                        {
                            cout << "(" << B << ", " << C << ", " << A << ")" << endl;
                        }
                        else
                        {
                            if (A<B && B>C && C<A)
                            {
                                cout << "(" << C << ", " << A << ", " << B << ")" << endl;
                            }
                            else
                            {
                                if (A>B && B>C)
                                {
                                    cout << "(" << C << ", " << B << ", " << A << ")" << endl;
                                }
                                else
                                {
                                    cout << "  " << endl;
                                }
                            }
                        }
                    }
                }

            }
        }
        else
        {
            cout << "Data salah, tidak sesuai spesifikasi" << endl;
        }

        return 0;
    }
