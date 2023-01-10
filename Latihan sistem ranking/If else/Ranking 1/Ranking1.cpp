/*
judul
Membuat program ranking
Programer   : Azmi Jalaluddin Amron
Modify      : 29 September 2022
*/

#include <iostream>
using namespace std;

//kamus
    int A, B, C;
    /*
    Nilai pertama = A
    NIlai kedua   = B
    Nilai ketiga  = C
    */

//deskripsi
    int main()
    {
        A!=B; //Nilai A tidak boleh sama dengan nilai B
        B!=C; //Nilai B tidak boleh sama dengan nilai C
        C!=A; //Nilai C tidak boleh sama dengan nilai A

        cout << "Mari mengurutkan nilai dari tebesar ke terkecil\n";
        cout << "Masukkan 3 nilai yang akan dibandinkan\n";
        cout << "Masukkan nilai pertama : "; cin >> A;
        cout << "Masukkan nilai kedua   : "; cin >> B;
        cout << "Masukkan nilai ketiga  : "; cin >> C;
        //Kita akan menggunakan if else karena switch case tidak dapat untuk program ini
        if (A>B && B>C) //A lebih besar dari B dan B lebih besar dari C
        {
            cout << "(" << A << ", " << B << ", " << C << ")" << endl;
        }
        else
        {
            if (A>B && B<C && C<A) //A lebih besar dari B dan B lebih kecil dari C dan C lebih kecil
            {
                cout << "(" << A << ", " << C << ", " << B << ")" << endl;
            }
            else
            {
                if (A<B && B>C && C<A) //A lebih kecil dari B dan B lebih besar dari C dan C lebih kecil
                {
                    cout << "(" << B << ", " << A << ", " << C << ")" << endl;
                }
                else
                {
                    if (A<B && B>C && C>A) //A lebih kecil dari B dan B lebih besar dari C dan C lebih besar
                    {
                        cout << "(" << B << ", " << C << ", " << A << ")" << endl;
                    }
                    else
                    {
                        if (A>B && B<C && C>A) //A lebih besar dari B dan B lebih kecil dari C dan C lebih besar
                        {
                            cout << "(" << C << ", " << A << ", " << B << ")" << endl;
                        }
                        else
                        {
                            if (A<B && B<C) //A lebih kecil dari B dan B lebih kecil dari C
                            {
                                cout << "(" << C << ", " << B << ", " << A << ")" << endl;
                            }
                            else
                            {
                                cout << "   ";
                            }
                        }
                    }
                }
            }
        }

        return 0;
    }
