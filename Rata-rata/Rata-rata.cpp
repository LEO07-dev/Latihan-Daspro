//judul
//Rata-rata
//Programer : Azmi Jalaluddin Amron
//Modify    : 12 Sept 2022

#include <iostream>
using namespace std;

//kamus
    int bil1, bil2, bil3, bil4, bil5, bil6, bil7, bil8, bil9, bil10;
    float hasil;

//diskripsi
    main ()
    {
        cout << "Menghitung nilai rata-rata dari 10 nilai!" << endl;
        bil1 = 90;
        cout << "Masukkan bilangan ke 1 =" << bil1 << endl;
        bil2 = 92;
        cout << "Masukkan bilangan ke 2 =" << bil2 << endl;
        bil3 = 94;
        cout << "Masukkan bilangan ke 3 =" << bil3 << endl;
        bil4 = 96;
        cout << "Masukkan bilangan ke 4 =" << bil4 << endl;
        bil5 = 95;
        cout << "Masukkan bilangan ke 5 =" << bil5 << endl;
        bil6 = 98;
        cout << "Masukkan bilangan ke 6 =" << bil6 << endl;
        bil7 = 97;
        cout << "Masukkan bilangan ke 7 =" << bil7 << endl;
        bil8 = 99;
        cout << "Masukkan bilangan ke 8 =" << bil8 << endl;
        bil9 = 89;
        cout << "Masukkan bilangan ke 9 =" << bil9 << endl;
        bil10 = 100;
        cout << "Masukkan bilangan ke 10 =" << bil10 << endl;

        hasil = (bil1 + bil2 + bil3 + bil4 + bil5 + bil6 + bil7 + bil8 + bil9 + bil10)/10;
        cout << "Nilai rata-rata adalah " << hasil << endl;

        if (hasil>90)
        {
            cout << "Pertahankan nilaimu";
        }
        else
        {
            cout << "Tingkatkan belajarmu";
        }

        return 0;
    }
