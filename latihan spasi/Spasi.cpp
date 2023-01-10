//input dengan spasi
#include <iostream>
#include <conio.h>
using namespace std;

//kamus

char nama[20], nim[20], kls[20], almt[50];

int main()
{

char nama[20], nim[20], kls[20], almt[50]; // menentukan jumlah karakter yang diinput
std::cout << " Biodata Mahasiswa" << endl;
std::cout <<"Nama = ";
std::cin.getline(nama, 20);
std::cout <<"NIM = ";
std::cin.getline(nim, 20);
std::cout <<"Kelas = ";
std::cin.getline(kls, 20);
std::cout <<"Alamat = ";
std::cin.getline(almt, 35);

std::cout << nama;

getch();
}
