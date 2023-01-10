/*
judul
simulasi depend on
Programer       : Azmi Jalaluddin Amron
Modify          : 26 September 2022
*/

#include <iostream>
#include <string.h>
using namespace std;

//kamus
    char kodeFak;
    int kodeprodi;

//deskripsi
    int main()
    {
        cout << "KODE FAKULTAS UDN" << endl;
        cout << "masukkan kode [A~E] di bawah" << endl;
        cout << "untuk kode A dan B ada tambahan nomor" << endl;
        cin >> kodeFak;
        switch (kodeFak)
        {
        case 'A':
            {
                cout << "fasilkom" << endl;
                cout << "masukkan kode prodi di bawah" << endl;
                cin >> kodeprodi;
                switch (kodeprodi)
                {
                    case 1 :
                    {
                            cout << "TI" << endl;
                            break;
                    }

                    case 2 :
                    {
                            cout << "SI" << endl;
                            break;
                    }

                    case 4 :
                    {
                            cout << "DKV" << endl;
                            break;
                    }

                    case 5 :
                    {
                            cout << "ILKOM" << endl;
                            break;
                    }

                    case 6 :
                    {
                            cout << "FTV" << endl;
                            break;
                    }

                    case 7 :
                    {
                            cout << "ANIMASI" << endl;
                            break;
                    }

                    default :
                    {
                            cout << "Tidak Ada" << endl;
                            break;
                    }
                }
                break;
            }

        case 'B':
            {
                cout << "feb" << endl;
                cout << "masukkan kode prodi di bawah" << endl;
                cin >> kodeprodi;
                    if (kodeprodi == 1)
                    {
                        cout << "MANAJEMEN" << endl;
                    }
                    else
                        if (kodeprodi == 2)
                        {
                        cout << "AKUTANSI" << endl;
                        }
                        else
                        {
                            cout << "Tidak Ada" << endl;
                        }

                break;
            }

        case 'C':
            {
                cout << "fib" << endl;
                break;
            }

        case 'D':
            {
                cout << "fkes" << endl;
                break;
            }

        case 'E':
            {
                cout << "fT" << endl;
                break;
            }

        default :
            {
                cout << "Tidak Ada" << endl;
                break;
            }
        }

        return 0;
    }
