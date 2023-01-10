/*
judul
menghitung kubus
Programer   : Azmi Jalaluddin Amron
Modify      : 20 Sept 2022
*/

#include <iostream>
#include <math.h>
using namespace std;

//kamus
        int S, LP, V, TS;


//deskripsi
    int main()
    {
        cout << "Menghitung nilai kubus!" << endl;
        cout << "Masukkan nilai rusuknya "; cin >> S;
        LP = (pow(S,2) * 6);
        V  = pow(S,3);
        TS = 12 * S;
        cout << "Nilai dari Luas Permukaan kubus adalah " << LP << " cm^2." << endl;
        cout << "NIlai dari volume adalah " << V << " cm^3." << endl;
        cout << "Nilai dari total panjang seluruh rusuk kubus adalah " << TS << " cm.";
    }
