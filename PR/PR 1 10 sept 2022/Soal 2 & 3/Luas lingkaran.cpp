//judul
//Menghitung luas lingkaran
//Progamer  : Azmi Jalaluddin Amron
//Modify    : 12 Sept 2022

#include <iostream>
using namespace std;

//kamus
    int jari21;
    float jari22;
    double Luas1, Luas2, Luas3; //luas3 adalah luas donat dimana luas lingkaran 1 dikurangi lingkaran 2

//diskripsi
  main ()
  {
    cout << "Menghitung luas dua buah lingkaran" << endl;
    jari21 = 28;
    cout << "Jari-jari lingkaran pertama adalah = " << jari21 << endl;

    Luas1 = 3.14*jari21*jari21;
    cout << "Luas lingkaran pertama adalah = " << Luas1 << endl;

    jari22 = 13.5;
    cout << "Jari-jari lingkaran kedua adalah = " << jari22 << endl;

    Luas2 = 3.14*jari22*jari22;
    cout << "Luas lingkaran kedua adalah = " << Luas2 << endl;

    Luas3 = Luas1-Luas2;
    cout << "Luas donat bolong adalah = " << Luas3 << endl;

    if (Luas1>Luas2)
    {
        cout << "Jadi, jari-jari lingkaran 1 lebih besar dari lingkaran 2";
    }
    else
    {
        cout << "Jadi, jari-jari lingkaran 2 lebih besar dari lingkaran 1";
    }

    return 0;
  }
