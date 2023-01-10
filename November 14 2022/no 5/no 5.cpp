/*
judul : no 5
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 14/11/2022
*/

#include <iostream>
using namespace std;

//kamus
    int n, a[7];

//deskripsi
    int main()
    {
        //memasukkan 7 buah nilai dengan loop sehingga tidak perlu menulis ulang banyak-banyak
        cout << "Masukkan 7 buah nilai" << endl;
        n=1;
        do{
                cout << "Masukkan nilai ke-" << n << " ---> "; cin >> a[n];
                cout << endl;
                n=n+1;
        }while(n<=7);

        //menampilkan dengan loop sehingga tidak bersusah-susah dalam mencari indeks-nya
        cout << "\n\n\t\tHasil dari angka yang anda masukkan adalah : " << endl;
        n=1;
        do{
                cout << "Angka ke-" << n << " adalah = " << a[n] << endl;
                n=n+1;
        }while(n<=7);

        return 0;
    }
