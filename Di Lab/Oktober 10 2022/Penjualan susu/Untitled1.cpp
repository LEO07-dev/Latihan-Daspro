//judul     : latihan program harga susu
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 1 pada 10/10/2022

#include <iostream>
using namespace std;

//kamus
    char ku, ks;
    string m, u;
    //ks= kode susu
    //ku= kode ukuran
    //m= merek susunya
    //u= jenis ukuran
    int j, h, p, t, b, g;
    //b= totoal pembayaran
    //t= jumlah pembayaran
    //p= pajak
    //h= harga
    //j= jumlah beli
    //g= potongan

//deskripsi
    int main()
    {
        cout << "\t\tPROGRAM PENJUALAN SUSU\t\t\n\n";
        cout << "Masukkan Kode Susu [1,2,3]    :\t"; cin >> ks;
        cout << "Masukkan Kode Ukuran [S,M,L]  :\t"; cin >> ku;
        cout << "Masukkan Jumlah Beli          :\t"; cin >> j;

        switch (ks)
        {
        case '1' :
            {
                m="Susu Indomilk";
                if (ku=='S' || ku=='s')
                {
                    u="SMALL";
                    h=5000;
                }
                else if (ku=='M' || ku=='m')
                {
                    u="MEDIUM";
                    h=7500;
                }
                else if (ku=='L' || ku=='l')
                {
                    u="Large";
                    h=9500;
                }
                break;
            }

        case '2' :
            {
                m="Susu Dancow";
                if (ku=='S' || ku=='s')
                {
                    u="SMALL";
                    h=4500;
                }
                else if (ku=='M' || ku=='m')
                {
                    u="MEDIUM";
                    h=6500;
                }
                else if (ku=='L' || ku=='l')
                {
                    u="Large";
                    h=8500;
                }
                break;
            }

        case '3' :
            {
                m="Susu Sustagon";
                if (ku=='S' || ku=='s')
                {
                    u="SMALL";
                    h=9500;
                }
                else if (ku=='M' || ku=='m')
                {
                    u="MEDIUM";
                    h=15500;
                }
                else if (ku=='L' || ku=='l')
                {
                    u="Large";
                    h=19500;
                }
                break;
            }

        default :
            {

                break;
            }
        }
        t=h*j;
        if (j>25)
        {
            g=t*5/100;
        }
        else
        {
            g=0;
        }


        p=t*10/100;
        b= t+p-g;

        cout << endl << endl;
        cout << "\t\tSTRUK PEMBAYARAN\t\t\n\n";
        cout << "Merek Barang           :\t" << m << endl;
        cout << "Jenis Ukuran           :\t" << u << endl;
        cout << "Jumlah Beli            :\t" << j << endl;
        cout << "Harga Barang           :\tRp." << h << endl;
        cout << "Jumlah Pembayaran      :\tRp." << t << endl;
        cout << "Potongan               :\tRp." << g << endl;
        cout << "Pajak                  :\tRp." << p << endl;
        cout << "Total Pembayaran       :\tRp." << b << endl;



        return 0;
    }
