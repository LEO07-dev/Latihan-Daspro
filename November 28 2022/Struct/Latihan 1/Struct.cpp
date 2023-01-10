//judul : Sturct
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 1 pada 11/29/2022

#include <iostream>
#include <string>
using namespace std;

//kamus
struct Tanggal{
    int TGL;
    int THN;
    string BLN;
};

//deskripsi
    int main()
    {
        cout << "TglLahir!" << endl;
        Tanggal TglLahir;
        cout << "TGL : "; cin >> TglLahir.TGL;
        cout << "BLN : "; cin >> TglLahir.BLN;
        cout << "THN : "; cin >> TglLahir.THN;

        cout << "saya lahir pada tanggal " << TglLahir.TGL << " bulan " << TglLahir.BLN << " tahun " << TglLahir.THN << endl;

        cout << endl;

        cout << "TglMasuk!" << endl;
        Tanggal TglMasuk;
        cout << "TGL : "; cin >> TglMasuk.TGL;
        cout << "BLN : "; cin >> TglMasuk.BLN;
        cout << "THN : "; cin >> TglMasuk.THN;

        cout << "saya masuk sekolah pada hari ke-" << TglMasuk.TGL << " bulan " << TglMasuk.BLN << " tahun " << TglMasuk.THN << endl;

        cout << endl;

        cout << "TglJadian!" << endl;
        Tanggal TglJadian;
        cout << "TGL : "; cin >> TglJadian.TGL;
        cout << "BLN : "; cin >> TglJadian.BLN;
        cout << "THN : "; cin >> TglJadian.THN;

        cout << "my anniversary " << TglJadian.TGL << " bulan " << TglJadian.BLN << " tahun " << TglJadian.THN << endl;

        cout << endl;

        cout << "DieDate!" << endl;
        Tanggal DieDate;
        cout << "TGL : "; cin >> DieDate.TGL;
        cout << "BLN : "; cin >> DieDate.BLN;
        cout << "THN : "; cin >> DieDate.THN;

        cout << "Heroes fall on " << DieDate.TGL << " bulan " << DieDate.BLN << " tahun " << DieDate.THN << endl;

        cout << endl;

        cout << "FirstDay" << endl;
        Tanggal FirstDay;
        cout << "TGL : "; cin >> FirstDay.TGL;
        cout << "BLN : "; cin >> FirstDay.BLN;
        cout << "THN : "; cin >> FirstDay.THN;

        cout << "My first day in this world is " << FirstDay.TGL << " bulan " << FirstDay.BLN << " tahun " << FirstDay.THN << endl;

        cout << endl;





        return 0;
    }
