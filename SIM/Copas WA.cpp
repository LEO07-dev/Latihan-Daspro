/*
Judul
Mengcopas dan edit dikit dari WA pembuatan sim
Programer   : Azmi Jalaluddin Amron
Modify      : 18 Sept 2022
*/

#include <iostream>
using namespace std;

//Kamus
    string tipe, ns, nama, ttl, jk, alamat, pekerjaan, sk, tp;

//Deskripsi
    main ()
    {
        cout << "Membuat sistem permbuatan kartu SIM " << endl << endl;
        cout << "Tipe SIM                  :"; getline(cin, tipe           );
        cout << "Nomor SIM                 :"; getline(cin, ns             );
        cout << "Nama                      :"; getline(cin, nama           );
        cout << "Tempat, Tanggal Lahir     :"; getline(cin, ttl            );
        cout << "Jenis Kelamin             :"; getline(cin, jk             );
        cout << "Alamat                    :"; getline(cin, alamat         );
        cout << "Pekerjaan                 :"; getline(cin, pekerjaan      );
        cout << "Status kawin              :"; getline(cin, sk             );
        cout << "Tempat Pembuatan          :"; getline(cin, tp             );
        cout << endl << endl;

        cout << "===========================================================" << endl;
        cout << "   INDONESIA   "                                             << endl;
        cout << "SURAT IZIN MENGEMUDI                        DRIVING LICENSE" << endl;
        cout << "                                                   " << tipe << endl;
        cout << "                                              " << ns        << endl;
        cout << "1." << nama                                                  << endl;
        cout << "2." << ttl                                                   << endl;
        cout << "3." << jk                                                    << endl;
        cout << "4." << alamat                                                << endl;
        cout << "5." << pekerjaan                                             << endl;
        cout << "6." << sk                                                    << endl;
        cout << "7." << tp                                                    << endl;
        cout << "===========================================================";
    }
