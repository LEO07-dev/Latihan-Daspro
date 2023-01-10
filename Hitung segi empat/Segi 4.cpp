//Judul
//Kamis, 8 Sept 2022
//Azmi Jalaluddin Amron
//H.4.80

#include <iostream>
using namespace std;

//Kamus
  int Panj,Lebr;
  float Keliling,Luas;

//Deskripsi
  int main (){
      cout << "menghitung segi 4!"<<endl;
      cout << "masukkan panjangnya"<<endl;
      cin >> Panj;

      cout << "masukkan lebarnya"<<endl;
      cin >> Lebr;
      
      Luas = Panj*Lebr;
      Keliling = Panj*2+Lebr*2;
      
      cout << "Luasnya adalah = "<<Luas;
      cout << "Kelilingnya adalah ="<<Keliling;
      
if (Panj == Lebr)
  {
      cout << "bujur sangkar";
  }
else 
  {
      cout << "bukan bujur sangkar";
  }
     return 0;   
    }
