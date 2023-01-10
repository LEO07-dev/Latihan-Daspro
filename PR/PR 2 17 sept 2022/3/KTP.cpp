//judul
//Membuat program KTP
//Programer : Azmi Jalaluddin Amron
//Modify    : 20 sept 2022

#include <iostream>
using namespace std;

//kamus
        string NIK, Nama, TTL, JK, Alamat, Rt, Rw, Kel, Kec, Agama, SP, Pekerjaan, WN, BA, GD;
        //TTL = Tempat, Tanggal Lahir, JK = Jenis kelamin, SP = Status Perkawinan, WN = Kewarganegaraan, BA = Berlaku Hingga
        //GD = Golongan Darah


//deskripsi
    main()
    {
        cout << "Membuat Sistem Pembuatan KTP" << endl;
        cout << "NIK					    :"; getline(cin, NIK        );
        cout << "Nama				        :"; getline(cin, Nama       );
        cout << "Tempat/ Tgl Lahir		    :"; getline(cin, TTL        );
        cout << "Jenis Kelamin 			    :"; getline(cin, JK         );
        cout << "Golongan Darah			    :"; getline(cin, GD         );
        cout << "Alamat 				    :"; getline(cin, Alamat     );
        cout << "Rt					        :"; getline(cin, Rt         );
        cout << "Rw					        :"; getline(cin, Rw         );
        cout << "Kelurahan				    :"; getline(cin, Kel        );
        cout << "Kecamatan				    :"; getline(cin, Kec        );
        cout << "Agama				        :"; getline(cin, Agama      );
        cout << "Status Perkawinan		    :"; getline(cin, SP         );
        cout << "Pekerjaan				    :"; getline(cin, Pekerjaan  );
        cout << "Kewarganegaraan			:"; getline(cin, WN         );
        cout << "Berlaku Hingga			    :"; getline(cin, BA         );
        cout << endl << endl;

        cout << "================================================================" << endl;
        cout << "				           PROVINSI JAWA TENGAH				     " << endl;
        cout << "				              KABUPATEN DEMAK				     " << endl;
        cout << "NIK				    :" << NIK                                  << endl;
        cout << "Nama				    :" << Nama                                 << endl;
        cout << "Tempat/Tgl Lahir		:" << TTL                                  << endl;
        cout << "Jenis Kelamin			:" << JK;   cout << "Gol. Darah  :" << GD  << endl;
        cout << "Alamat				    :" << Alamat                               << endl;
                cout << "RT/RW          :" << Rt << "/" << Rw                      << endl;
                cout << "Kel/Desa       :" << Kel                                  << endl;
                cout << "Kecamatan      :" << Kec                                  << endl;
        cout << "Agama                  :" << Agama                                << endl;
        cout << "Status Perkawinan      :" << SP                                   << endl;
        cout << "Kewarganegaraan        :" << WN                                   << endl;
        cout << "Berlaku Hingga         :" << BA                                   << endl;
        cout << "================================================================" << endl;


    }
