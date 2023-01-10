/*
judul
Menghitung volume tabung
Programer   : Azmi Jalaluddin Amron
Modify      : 24 September 2022
*/

#include <iostream>
#include <math.h>
using namespace std;

//kamus

    int a, b;
    float c, h;

//deskripsi
int main()
{
    cout << "Menghitung volume tabung\n\n";
    cout << "Masukkan nilai jari-jari : \n";
    cin >> a;
    cout << "Masukkan nilai tinggi : \n";
    cin >> b;
    c = 3,14;
    h = c * pow(a,2) * b;
    cout << "Maka nilai volume tabung adalah " << h << " cm^3";

  return 0;
}
