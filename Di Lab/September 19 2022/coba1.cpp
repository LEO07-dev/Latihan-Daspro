//judul
//Menghitung lama belajar
//Programer : Azmi Jalaluddin Amron
//Modify    : 19 Sept 2022

#include <iostream>
using namespace std;


//kamus
    int j1, m1, d1, j2, m2, d2, h1, h2, h3, j0, m0, d0;

//deskripsi
    main ()
    {
        cout << "Menghitung lama belajar" << endl;
        cout << "Jam belajar awal adalah 07:02:10." << endl;
        cout << "Jam belajar akhir adalah 07:30:40" << endl;
        cout << "Masukkan nilai jam belajar awal ";
        cin >> j1;
        cout << "Masukkan nilai menit jam belajar awal ";
        cin >> m1;
        cout << "Masukkan nilai detik jam belajar awal ";
        cin >> d1;
        cout << "Masukkan nilai jam belajar akhir ";
        cin >> j2;
        cout << "Masukkan nilai menit jam belajar akhir";
        cin >> m2;
        cout << "Masukkan nilai detik jam belajar akhir";
        cin >> d2;
        h1 = j1 * 3600 + m1 * 60 + d1;
        h2 = j2 * 3600 + m2 * 60 + d2;
        h3 = h2 - h1;
        j0 = h3 / 3600;
        m0 = (h3 % 3600) / 60;
        d0 = (h3 % 3600) % 60;
        cout << "Jumlah detik untuk jam belajar awal adalah " << h1 << " detik." << endl;
        cout << "Jumlah detik untuk jam belajar akhir adalah " << h2 << " detik." << endl;
        cout << "Lama bejar adalah " << j0 << " jam, " << m0 << " menit, dan " << d0 << " detik.";

        if (m0 >= 5 && m0 < 20)
        {
            cout << "lumayan.";
        }
        else
            if (m0 >= 20)
        {
            cout << " lumayan.";
        }
        else
        {
            cout << "Kurang niat.";
        }
    }
