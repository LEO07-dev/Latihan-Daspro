/*
judul   : simulasi array
Programer : Azmi Jalaluddin Amron
Modify      : ke 1 pada 17 Oktober 2022
*/

//kamus
#include <iostream>
using namespace std;
int bil1, angka, bilangan, values, nilai;
int data[5];
int a, cari, b, golek, ketemu;

//deskripsi
    int main()
    {
        //67153
        cout << "Input ke variabel bebas!\n";
        cout << "Masukkan bilangan ke variabel bil1 : "; cin >> bil1;
        cout << "Masukkan bilangan ke variabel angka : "; cin >> angka;
        cout << "Masukkan bilangan ke variabel bilangan : "; cin >> bilangan;
        cout << "Masukkan bilangan ke variabel values : "; cin >> values;
        cout << "Masukkan bilangan ke variabel nilai : "; cin >> nilai;
        cout << "Masukkan bilangan yang ingin di cari : "; cin >> cari;
        if (cari==bil1)
        {
            cout << "Ketemu " << cari << " = " << bil1 << endl;
        }
        else if (cari==angka)
        {
            cout << "Ketemu " << cari << " = " << angka << endl;
        }
        else if (cari==bilangan)
        {
            cout << "Ketemu " << cari << " = " << bilangan << endl;
        }
        else if (cari==values)
        {
            cout << "Ketemu " << cari << " = " << values << endl;
        }
        else if (cari==nilai)
        {
            cout << "Ketemu " << cari << " = " << nilai << endl;
        }
        else
        {
            cout << "Tidak ditemukan bilangan yang anda cari\n";
        }

        cout << "Menampilkan variabel array tanpa loop.\n";
        cout << "Masukkan bilangan ke data indeks ke 0 = "; cin >> data[0];
        cout << "Masukkan bilangan ke data indeks ke 4 = "; cin >> data[4];
        cout << "Masukkan bilangan ke data indeks ke 3 = "; cin >> data[3];
        cout << "Masukkan bilangan ke data indeks ke 1 = "; cin >> data[1];
        cout << "Masukkan bilangan ke data indeks ke 2 = "; cin >> data[2];
        cout << "Masukkan bilangan yang dicari = "; cin >> golek;
        b=0;
        while(b<=5)
        {
            if(golek==data[b])
            {
                ketemu=b;
            }
            else
            {
                cout << "Data tidak ditemukan\n";
            }
            b=b+1;
        }
        cout << "Data ditemuka pada indeks ke " << ketemu << endl;

        cout << "Tampilan variabel bebas\t";
        cout << "Isi dari variabel bil1 = " << bil1 << endl;
        cout << "Isi dari variabel angka = " << angka << endl;
        cout << "Isi dari variabel bilangan = " << bilangan << endl;
        cout << "Isi dari variabel values = " << values << endl;
        cout << "Isi dari variabel nilai = " << nilai << endl;
        cout << endl;
        cout << "Tampilan variabel array tanpa loop\t";
        cout << "Isi dari data indeks ke 3 = " << data[3] << endl;
        cout << "Isi dari data indeks ke 4 = " << data[4] << endl;
        cout << "Isi dari data indeks ke 0 = " << data[0] << endl;
        cout << "Isi dari data indeks ke 2 = " << data[2] << endl;
        cout << "Isi dari data indeks ke 1 = " << data[1] << endl;
        cout << endl;
        cout << "\nTampilian variabel array dengan loop\n";

        a=0;
        do
        {
            cout << "Isi dari data indeks ke " << a << " = " << data[a] << endl;
            a=a+1;
        }while(a>6);


        return 0;
    }
