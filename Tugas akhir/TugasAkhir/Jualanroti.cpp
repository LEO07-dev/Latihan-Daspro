//judul : Program penjualan
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 1 pada Jan 7 2023

#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <cstdio>
using namespace std;

//kamus
    int a, i;
    int jumlah, harga, value, totalHarga;
    int TabMany[12];
    int ArrHarga_barang[12];
    char ArrNamaRoti[15];
    string choice, makanan;
    string Roti[8];

//deskripsi
    int main()
    {
        //Menu roti yang dijual
        cout << "===============Menu==============" << endl;
        cout << "||                             ||" << endl;
        cout << "|| Roti Trempos    Roti Tebon  ||" << endl;
        cout << "|| Roti Karok      Roti Janten ||" << endl;
        cout << "|| Roti Plonco     Roti Gori   ||" << endl;
        cout << "|| Roti Susu       Roti Alit   ||" << endl;
        cout << "=================================" << endl;

        //Pesanan
        i = 0;
        do{
            value = 0;
            makanan = "";
            cout << "Pesanan    : ";
            cin.getline(ArrNamaRoti, 15);
            cout << "Jumlah pesanan : ";
            cin >> jumlah;

            strupr(ArrNamaRoti);
            makanan.append(ArrNamaRoti);

            /* Define and intialize */
            char* Roti1 = "ROTI TREMPOS";
            char* Roti2 = "ROTI TEBON";
            char* Roti3 = "ROTI KAROK";
            char* Roti4 = "ROTI JANTEN";
            char* Roti5 = "ROTI PLONCO";
            char* Roti6 = "ROTI GORI";
            char* Roti7 = "ROTI SUSU";
            char* Roti8 = "ROTI ALIT";

            //percabangan
            if(makanan.length() == strlen(Roti1) && Roti1 == makanan)
            {
                if( memcmp ( Roti1, makanan.data(), makanan.length() ) == 0)
                {
                    value = 5000;
                }
            }
            else if(makanan.length() == strlen(Roti2) && Roti2 == makanan)
            {
                if( memcmp ( Roti2, makanan.data(), makanan.length() ) == 0)
                {
                    value = 7000;
                }
            }
            else if(makanan.length() == strlen(Roti3) && Roti3 == makanan)
            {
                if( memcmp ( Roti3, makanan.data(), makanan.length() ) == 0)
                {
                    value = 4000;
                }
            }
            else if(makanan.length() == strlen(Roti4) && Roti4 == makanan)
            {
                if( memcmp ( Roti4, makanan.data(), makanan.length() ) == 0)
                {
                    value = 3000;
                }
            }
            else if(makanan.length() == strlen(Roti1) && Roti5 == makanan)
            {
                if( memcmp ( Roti5, makanan.data(), makanan.length() ) == 0)
                {
                    value = 8000;
                }
            }
            else if(makanan.length() == strlen(Roti6) && Roti6 == makanan)
            {
                if( memcmp ( Roti6, makanan.data(), makanan.length() ) == 0)
                {
                    value = 10000;
                }
            }
            else if(makanan.length() == strlen(Roti7) && Roti7 == makanan)
            {
                if( memcmp ( Roti7, makanan.data(), makanan.length() ) == 0)
                {
                    value = 12000;
                }
            }
            else if(makanan.length() == strlen(Roti8) && Roti8 == makanan)
            {
                if( memcmp ( Roti8, makanan.data(), makanan.length() ) == 0)
                {
                    value = 2000;
                }
            }


            //Assigment
            harga = jumlah * value;
            TabMany[i] = jumlah;
            Roti[i] = makanan;
            ArrHarga_barang[i] = harga;

            //increment
            i = i + 1;

            //Konfirmasi
            cout << "Apakah ada pesanan lagi ? " << endl;
            cin >> choice;

            cin.ignore();

        }while(choice == "ya");

        //Output
        a = 0;
        totalHarga = 0;
        while (a<i)
        {
            //Yang ditampilkan
            cout << Roti[a] << "\t" << TabMany[a] << "\t" << ArrHarga_barang[a] << endl;
            //Assigment
            totalHarga = totalHarga + ArrHarga_barang[a];
            //increment
            a = a + 1;
        }
        cout << endl;
        //Total Harga yang harus dibayar oleh pembeli
        cout << "Total Harga    : " << totalHarga << endl;



        return 0;
    }
