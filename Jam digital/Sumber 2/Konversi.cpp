#include <iostream>
using namespace std;

int main()
{
        int jam, menit, hasil;
        int jam_detik = 3600; //Baca programnya berapa detik dalam 1 jam
        int jam_menit = 60;   //Baca programnya berapa menit dalam 1 jam
        cout << "/t Konversi Bilangan \n\n";

        cout << "Masukkan Jumlah Jam    : ";
        cin >> jam;

        cout << "Masukkan Jumlah menit  : ";
        cin >> menit;

        hasil = jam * jam_detik + menit * jam_menit;

            cout << "Hasil Konversinya : " << hasil << " Detik";

}
