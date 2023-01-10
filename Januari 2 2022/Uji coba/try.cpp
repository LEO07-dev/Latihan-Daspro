//judul : Latihan untuk tugas akhir
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 1 pada January 2 2023

#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <cstdio>
using namespace std;

//kamus
    int i, a, x;
    int jumlah, totalHarga;
    int TabMany[12];
    int banding[8];
    int value;
    int many;
    int harga;
    int ArrHarga_barang[12];
    char ArrNamaRoti[15];
//    char Roti1[15];
//    char Roti2[15];
//    char Roti3[15];
//    char Roti4[15];
//    char Roti5[15];
//    char Roti6[15];
//    char Roti7[15];
//    char Roti8[15];
    char choose[2];
    string choice;
    string Roti[8];
    string makanan;
    string TabBarang[12];

//deskripsi
    int main()
    {
        cout << "=============MENU================" << endl;
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

            //string upper
            //untuk membesarkan tiap huruf dalam kalimat atau tiap char

            strupr(ArrNamaRoti);
            makanan.append(ArrNamaRoti);
//            x = makanan.length();
//            char ArrFood[x + 1];
//            strcpy(ArrFood, makanan.c_str());
            /* Declare and initialize a local char */
            char* Roti1 = "ROTI TREMPOS";
            char* Roti2 = "ROTI TEBON";
            char* Roti3 = "ROTI KAROK";
            char* Roti4 = "ROTI JANTEN";
            char* Roti5 = "ROTI PLONCO";
            char* Roti6 = "ROTI GORI";
            char* Roti7 = "ROTI SUSU";
            char* Roti8 = "ROTI ALIT";


//            value[8] = 5000;
//            value[1] = 7000;

            if( makanan.length() == strlen(Roti1) && Roti1 == makanan )
            {
                if( memcmp (Roti1, makanan.data(), makanan.length() ) == 0 )
                {
//                    many = value[0];
                    value = 5000;

                }
            }
            else if( makanan.length() == strlen(Roti2) && Roti2 == makanan )
            {
                if( memcmp (Roti2, makanan.data(), makanan.length() ) == 0 )
                {
//                    many = value[1];
                    value = 7000;
                }
            }
            else if( makanan.length() == strlen(Roti3) && Roti3 == makanan )
            {
                if( memcmp (Roti3, makanan.data(), makanan.length() ) == 0 )
                {
                    value = 4000;

                }
            }
            else if( makanan.length() == strlen(Roti4) && Roti4 == makanan )
            {
                if( memcmp (Roti4, makanan.data(), makanan.length() ) == 0 )
                {
                    value = 3000;

                }
            }
            else if( makanan.length() == strlen(Roti5) && Roti5 == makanan )
            {
                if( memcmp (Roti5, makanan.data(), makanan.length() ) == 0 )
                {
                    value = 8000;

                }
            }
            else if( makanan.length() == strlen(Roti6) && Roti6 == makanan )
            {
                if( memcmp (Roti6, makanan.data(), makanan.length() ) == 0 )
                {
                    value = 10000;

                }
            }
            else if( makanan.length() == strlen(Roti7) && Roti7 == makanan )
            {
                if( memcmp (Roti7, makanan.data(), makanan.length() ) == 0 )
                {
                    value = 12000;

                }
            }
            else if( makanan.length() == strlen(Roti8) && Roti8 == makanan )
            {
                if( memcmp(Roti8, makanan.data(), makanan.length()) == 0 )
                {
                    value = 2000;

                }
            }

            //Assigment
            harga = jumlah * value;
            TabMany[i] = jumlah;
            Roti[i] = /*ArrNamaRoti*/ makanan;
            ArrHarga_barang[i] = harga;




            cout << "Ada pesanan lagi ? " << endl;
            cin >> choice;

//            strupr(choose);
//            choice.append(choose);



            //increment
            i = i + 1;

            cin.ignore();

        }while(choice == "ya");


        cout << endl << endl;
        //output
        //struk belanja
        a = 0;
        totalHarga = 0;
        while(a<i)
        {
            //output
            cout << Roti[a] /*makanan*/ << "\t" << TabMany[a] << "\t" << ArrHarga_barang[a];
            cout << endl;
            totalHarga = totalHarga + ArrHarga_barang[a];

            //increment
            a = a + 1;
        }
        cout << endl << endl;
        cout << "Total pembayaran : " << totalHarga << endl;

        return 0;

    }
