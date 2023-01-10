//Judul
//Menentukan segitiga siku-siku
//Azmi Jalaluddin Amron

#include <iostream>
using namespace std;

//Kamus
  int As,Ti, hasil;  //As = Alas, TI = TInggi, dan hasil = luas segitiga


//Diskripsi
  int main()
     {
	  cout << "Menghitung segitiga siku-siku" << endl;
        cout << "Masukkan nilai alasnya";
        cin >> As;

        cout << "Masukkan nilai tingginya" << endl;
        cin >> Ti;

        hasil = (As*Ti)/2;
        cout << "Jadi, Luas segitiga-nya adalah = " << hasil;


        return 0;
     }
