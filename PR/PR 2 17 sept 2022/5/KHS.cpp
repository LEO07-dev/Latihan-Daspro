//judul
//Membuat program KHS
//Programer : Azmi Jalaluddin Amron
//Modify    : 20 Sept 2022

#include <iostream>
#include <string.h>
using namespace std;

//kamus
        string NM, NIM, K1, K2, K3, K4, K5, K6;
        int S1, S2, S3, S4, S5, S6, N1, N2, N3, N4, N5, N6;
        float MEAN, TSKS, TN;

//deskripsi
    main()
    {
        cout << "Masukkan Nama :"; getline(cin, NM );
        cout << "Masukkan NIM  :"; getline(cin, NIM);
        cout << "Masukkan Nama Mata kuliah ="; getline(cin, K1); getline(cin, K2); getline(cin, K3); getline(cin, K4); getline(cin, K5); getline(cin, K6);
        cout << "Masukkan SKS ="; (cin >> S1); (cin >> S2); (cin >> S3); (cin >> S4); (cin >> S5); (cin >> S6);
        cout << "Masukkan Nilai ="; (cin >> N1); (cin >> N2); (cin >> N3); (cin >> N4); (cin >> N5); (cin >> N6);


        cout << "				 KARTU HASIL STUDI			" << endl;
        cout << "		     PROGRAM STUDI TEKNIK INFORMATIKA		" << endl;
        cout << "			  UNIVERSITAS DIAN NUSWANTORO			" << endl;
        cout << "NAMA :" << NM << endl;
        cout << "NIM  :" << NIM << endl;
        cout << endl;
        cout << "NAMA MATA KULIAH                           SKS                                     NILAI" << endl;
        cout << K1 << "                                  " << S1 << "                            " << N1 << endl;
        cout << K2 << "                                  " << S2 << "                            " << N2 << endl;
        cout << K3 << "                                  " << S3 << "                            " << N3 << endl;
        cout << K4 << "                                  " << S4 << "                            " << N4 << endl;
        cout << K5 << "                                  " << S5 << "                            " << N5 << endl;
        cout << K6 << "                                  " << S6 << "                            " << N6 << endl;
        cout << endl << endl << endl;

        TSKS = S1 + S2 + S3 + S4 + S5 + S6;
        TN   = N1 + N2 + N3 + N4 + N5 + N6;
        MEAN = TSKS / TN;

        cout << "TOTAL SKS                                                                       " << TSKS << endl;
        cout << "TOTAL NILAI                                                                     " << TN << endl;
        cout << "RATA-RATA                                                                       " << MEAN;


        return 0;
    }
