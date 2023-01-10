/*
judul : membuat program menghitung jam dengan 2 pilihan format
Programer : Azmi Jalaluddin Amron
Modify    : ke 1 pada 10/23/2022 (bulan/tanggal/tahun)
*/

#include <iostream>
#include <sstream>
using namespace std;

//kamus
    char choice;
	int HH1, MM1, SS1;
	int HH2, MM2, SS2;
	int H1, M1, S1;
	int J1, J2;
	int WA, WR;

//deskripsi
    int main()
    {
        cout << "\t\t\tMenghitung durasi waktu!\n";
        awal :
        cout << "Silakan pilih format yang diinginkan\n";
        cout << "a. Format 24 jam,\n";
	    cout << "b. Format am dan pm.\n";
        cout << "Silakan masukkan pilihan anda (a/b) : "; cin >> choice;
		switch (tolower(choice))
		{
        case 'a' :
            {
                cout << "\t\tAnda memilih format am dan pm\n";
                cout << "\t||========format======||\n";
                cout << "\t||1 = am              ||\n";
                cout << "\t||0 = pm              ||\n";
                cout << "\t||====================||\n";
			    Jam_awal :
			    cout << "Silakan masukkan nilai jam awal : "; cin >> HH1;
			    if (HH1>23)
                {
                    cout << "\t\tBatas Pengisian adalah 0-23\n";
                    goto Jam_awal;
                }
                Menit_awal :
			    cout << "Silakan masukkan nilai menit awal : "; cin >> MM1;
			    if (MM1>59)
                {
                    cout << "\t\tBatas Pengisian adalah 0-59\n";
                    goto Menit_awal;
                }
                Detik_awal :
			    cout << "Silakan masukkan nilai detik awal : "; cin >> SS1;
			    if (SS1>59)
                {
                    cout << "\t\tBatas Pengisian adalah 0-59\n";
                    goto Detik_awal;
                }
                Format_awal :
                cout << "Masukkan format waktu mulai : "; cin >> WA;
                if (WA!=1 && WA!=0)
                {
                    cout << "\t\tMasukkan fomat hanya ada (am=1/pm=0)\n";
					goto Format_awal;
                }
                Jam_akhir :
			    cout << "Silakan masukkan nilai jam akhir : "; cin >> HH2;
                if (HH2>24)
                {
                    cout << "\t\tBatas Pengisian adalah 0-23\n";
                    goto Jam_akhir;
                }
                Menit_akhir :
			    cout << "Silakan masukkan nilai menit akhir : "; cin >> MM2;
			    if (MM2>59)
                {
                    cout << "\t\tBatas Pengisian adalah 0-59\n";
                    goto Menit_akhir;
                }
                Detik_akhir :
			    cout << "Silakan masukkan nilai detik akhir : "; cin >> SS2;
			    if (SS2>59)
                {
                    cout << "\t\tBatas Pengisian adalah 0-59\n";
                    goto Detik_akhir;
                }
                Format_akhir :
                cout << "Masukkan format waktu mulai : "; cin >> WR;
                if (WR!=1 && WR!=0)
                {
                    cout << "\t\tMasukkan fomat hanya ada (am=1/pm=0)\n";
					goto Format_akhir;
                }
                cout << "Anda mulai pada jam " << HH1 << " : " << MM1 << " : " << SS1 << endl;
                cout << "Anda selesai pada jam " << HH2 << " : " << MM2 << " : " << SS2 << endl;

                if (WA==0)
                {
                    HH1=HH1+12;
                }
				else if (WA==1)
                {
                    HH1=HH1;
                }
				else if (WR==0)
                {
                    HH2=HH2+12;
                }
				else if (WR==1)
                {
                    HH2=HH2;
                }

                if (HH1>HH2)
                {
                   HH2=HH2+24;
                }
                else
                {
                    HH2=HH2;
                }
                J1=(HH1*3600)+(MM1*60)+SS1;
			    J2=(HH2*3600)+(MM2*60)+SS2;
                H1=(J2-J1)/3600;
                M1=( (J2-J1) % 3600 ) / 60;
                S1=( (J2-J1) % 3600 ) % 60;
			    cout << "Maka lama belajar anda adalah " << H1 << " jam, " << M1 << " menit, " << S1 << " detik." << endl;
                break;
            }

        case 'b' :
            {
			    cout << "\t\tAnda memilih format 24 jam\n";
			    Jam_awal_1 :
			    cout << "Silakan masukkan nilai jam awal : "; cin >> HH1;
			    if (HH1>23)
                {
                    cout << "\t\tBatas Pengisian adalah 0-23\n";
                    goto Jam_awal_1;
                }
                Menit_awal_1 :
			    cout << "Silakan masukkan nilai menit awal : "; cin >> MM1;
			    if (MM1>59)
                {
                    cout << "\t\tBatas Pengisian adalah 0-59\n";
                    goto Menit_awal_1;
                }
                Detik_awal_1 :
			    cout << "Silakan masukkan nilai detik awal : "; cin >> SS1;
			    if (SS1>59)
                {
                    cout << "\t\tBatas Pengisian adalah 0-59\n";
                    goto Detik_awal_1;
                }
                Jam_akhir_1 :
			    cout << "Silakan masukkan nilai jam akhir : "; cin >> HH2;
                if (HH2>24)
                {
                    cout << "\t\tBatas Pengisian adalah 0-23\n";
                    goto Jam_akhir_1;
                }
                Menit_akhir_1 :
			    cout << "Silakan masukkan nilai menit akhir : "; cin >> MM2;
			    if (MM2>59)
                {
                    cout << "\t\tBatas Pengisian adalah 0-59\n";
                    goto Menit_akhir_1;
                }
                Detik_akhir_1 :
			    cout << "Silakan masukkan nilai detik akhir : "; cin >> SS2;
			    if (SS2>59)
                {
                    cout << "\t\tBatas Pengisian adalah 0-59\n";
                    goto Detik_akhir_1;
                }
			    cout << "Anda mulai pada jam " << HH1 << " : " << MM1 << " : " << SS1 << endl;
			    cout << "Anda selesai pada jam " << HH2 << " : " << MM2 << " : " << SS2 << endl;
                if (HH1>HH2)
                {
                   HH2=HH2+24;
                }
                else
                {
                    HH2=HH2;
                }
                J1=(HH1*3600)+(MM1*60)+SS1;
			    J2=(HH2*3600)+(MM2*60)+SS2;
                H1=(J2-J1)/3600;
                M1=( (J2-J1) % 3600 ) / 60;
                S1=( (J2-J1) % 3600 ) % 60;
			    cout << "Maka lama belajar anda adalah " << H1 << " jam, " << M1 << " menit, " << S1 << " detik." << endl;
			    break;
            }

        default :
            {
             cout << "\n\n\t\tYang anda pilih tidak ada\n\n" << endl;
             goto awal;
             break;
            }
		}


        return 0;
    }
