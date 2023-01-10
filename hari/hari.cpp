//judul : mencoba program hari
//Programer		: Azmi Jalaluddin Amron
//Modify		: ke 1 pada 5 Oktober 2022

#include <iostream>
using namespace std;


//kamus

//deskripsi
int main()
{
	string a[7]={"senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"}, b;
	int x;
	cout << "Masukkan nama hari : "; cin >> b;
	cout << "Masukkan jeda hari : "; cin >> x;
	for (int i=0; i<7; i++){
			if (a[i]==b)
				x=(i+x)%7;
	}	
	cout << a[x];
	
	
	return 0;
}
