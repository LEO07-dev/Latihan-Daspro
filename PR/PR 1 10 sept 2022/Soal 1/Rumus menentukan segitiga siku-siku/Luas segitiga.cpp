//Judul
//Menghitung luas segitiga
//Programer : Azmi Jalaluddin Amron
//Modify    : 12 sept 2022


#include <iostream>
#include <math.h>
using namespace std;

//Kamus
  int Alas, Tinggi, Luas, SM;
  int a=2;


//Diskripsi
  int main ()
    {
      cout << "Menghitung luas segitiga" << endl;
      cout << "Masukkan nilai alasnya";
      cin >> Alas;

      cout << "masukkan nilai tingginya";
      cin >> Tinggi;

      Luas = (Alas*Tinggi)/2;
      SM   = sqrt(Alas^2 + Tinggi^2);

      cout << "Luasnya adalah = " << Luas << endl;

      if (SM%2 == 0)
      {
          cout << "Termasuk segitiga siku-siku";
      }
      else
      {
          cout << "Bukan segitiga siku-siku";
      }

      return 0;
    }
