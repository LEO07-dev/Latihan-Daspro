/*
Judul : Membuat program ranking dari besar ke kecil
Programer 	: Azmi Jalaluddin Amron
Modify 		: ke 1 pada 5 Oktober 2022
*/

#include <iostream>
using namespace std;

//kamus
	int a, b, c;
	char choice;

//deskripsi
	int main()
	{
		cout << "Masukkan nilai bilangan di bawah ini!\n";
		cout << "Mau mencoba?\n";
		cout << "Hanya 3 kesempatan\n";
		cin >> choice; //jadi setelah kamu ketik Y atau y bakal terus loop
		
		
			
		while (choice=='Y' || choice=='y')
		{
			//saat kamu mengisi nilai bilangan di bawah dengan huruf atau selsai angka maka akan terjadi eror
			cout << "Masukkan nilai a = "; cin >> a;
			cout << "Masukkan nilai b = "; cin >> b;
			cout << "Masukkan nilai c = "; cin >> c;
			
			if (a>b && b>c)
			{
				cout << "(" << a << ", " << b << ", " << c << ")" << endl;
			}
			else if (a>b && b<c && c<a)
			{
				cout << "(" << a << ", " << c << ", " << b << ")" << endl;
			}
			else if (b>a && a>c)
			{
				cout << "(" << b << ", " << a << ", " << c << ")" << endl;
			}
			else if (b>a && a<c && c<b)
			{
				cout << "(" << b << ", " << c << ", " << a << ")" << endl;
			}
			else if (c>a && a>b)
			{
				cout << "(" << c << ", " << a << ", " << b << ")" << endl;
			}
			else if (c>a && a<b && b<c)
			{ 
				cout << "(" << c << ", " << b << ", " << a << ")" << endl;
			}
			
		}
		
		return 0;
	}
