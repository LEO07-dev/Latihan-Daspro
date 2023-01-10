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
            g=t*0.05;
        }
        else
        {
            g=0;
        }


        p=t*0.1;
        b= t+p-g;

        cout << endl << endl;
        cout << "\t\tSTRUK PEMBAYARAN\t\t\n\n";
        cout << "Merek Barang           :" << m << endl;
        cout << "Jenis Ukuran           :" << u << endl;
        cout << "Jumlah Beli            :" << j << endl;
        cout << "Harga Barang           :Rp." << h << endl;
        cout << "Jumlah Pembayaran      :Rp." << t << endl;
        cout << "Potongan               :Rp." << g << endl;
        cout << "Pajak                  :Rp." << p << endl;
        cout << "Total Pembayaran       :Rp." << b << endl;



        return 0;
    }
