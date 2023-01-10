//judul : Pendalaman Array dari dasar
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 1 pada 28 Nov 2022

#include <iostream>
using namespace std;

//kamus
/*
    int x, y, z, K, L;
    int DataNilai[5];
    int TabA[3], TabB[3], TabHasil[3];
*/
    int TabA[3][3], TabB[3][3], TabHasil[3][3];
    int kolom, baris;


//deskripsi
    int main()
    {
//        cout << "\tMasukkan variabel biasa" << endl;
//        cin >> x >> y >> z >> K >> L;
//
//        cout << x;
//        cout << y;
//        cout << z;
//        cout << K;
//        cout << L;
//
//        cout << endl;
//
//        cout << "\n\tMasukkan variabel array dengan 5 element\n";
//        cin >> DataNilai[4];
//        cin >> DataNilai[2];
//        cin >> DataNilai[0];
//        cin >> DataNilai[1];
//
//        cout << DataNilai[4];
//        cout << DataNilai[0];
//        cout << DataNilai[2];
//        cout << DataNilai[3] << endl;

        //penjumlahan matrik
        //Static
//        TabA[1]=3;
//        TabA[2]=1;
//        TabA[0]=4;
//        cout << "\n\tNilai TabA\n";
//        cout << TabA[0] << endl;
//        cout << TabA[1] << endl;
//        cout << TabA[2] << endl;
//        //Dinamic
//        cout << "\n\tIsikan TabB\n";
//        cin >> TabB[0];
//        cin >> TabB[1];
//        cin >> TabB[2];
//
//        TabHasil[0] = TabA[0] + TabB[0];
//        TabHasil[1] = TabA[1] + TabB[1];
//        TabHasil[2] = TabA[2] + TabB[2];
//
//        cout << "\nHasil dari penjumlahan matrix A dan B\n";
//        cout << TabHasil[0] << TabHasil[1] << TabHasil[2] << endl;
//
//        cout << TabHasil[2] << endl;
//        cout << TabHasil[1] << endl;
//        cout << TabHasil[0] << endl;


        cout << "isian matrix 2 dimensi" << endl;
        cout << "Matrix A" << endl;

        //Tabel A
        baris = 0;
        do
        {
        kolom = 0;
        while(kolom < 3)
        {
                cin >> TabA[kolom][baris];
                kolom = kolom + 1;
        }
            cout << endl;
            baris = baris + 1;
        }while(baris < 3);

        cout << "\nMatrix B" << endl;

        //Tabel B
        baris = 0;
        do
        {
        kolom = 0;
        while(kolom < 3)
        {
                cin >> TabB[kolom][baris];
                kolom = kolom + 1;
        }
            cout << endl;
            baris = baris + 1;
        }while(baris < 3);

        cout << "\nMatrix Hasil" << endl;

        //Tabel Hasil
        baris = 0;
        do
        {
        kolom = 0;
        while(kolom < 3)
        {
                TabHasil[kolom][baris] = TabA[kolom][baris] + TabB[kolom][baris];
                cout << TabHasil[kolom][baris];
                kolom = kolom + 1;
        }
            cout << endl;
            baris = baris + 1;
        }while(baris < 3);






        return 0;
    }
