/*
judul : membuat perogram menentukan jenis segitiga
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 10/23/2022 (bulan/tanggal/tahun)
*/

#include <iostream>
#include <math.h>
using namespace std;

//kamus
    int a, b, c;

//deskripsi
 int main()
 {
     cout << "\t\t\tMenentukan jenis segitiga\n";
     cout << "\tMasukkan nilai panjang setiap sisi segitiga\n";
     cout << "Panjang sisi a : "; cin >> a;
     cout << "Panjang sisi b : "; cin >> b;
     cout << "Panjang sisi c : "; cin >> c;
    if (pow(c,2)==pow(a,2)+pow(b,2))
    {
        cout << "Segitiga tersebut adalah segitiga siku-siku.\n";
    }
    else if ((a==b || b==c || c==a) && (a!=b || b!=c || c!=a) )
    {
        cout << "Segitiga tersebut adalah segitiga sama kaki.\n";
    }
	else if (a==b && b==c && c==a)
    {
        cout << "Segitiga tersebut adalah segitiga sama sisi.\n";
    }
	else if (a!=b && b!=c && c!=a)
    {
        cout << "Segitiga tersebut adalah segitiga sembarang.\n";
    }
	else if (pow(c,2)>pow(a,2)+pow(b,2))
    {
        cout << "Segitiga tersebut adalah segitiga tumpul.\n";
    }
	else if (pow(c,2)<pow(a,2)+pow(b,2))
    {
        cout << "Segitiga tersebut adalah segitiga lancip.\n";
    }

     return 0;
 }
