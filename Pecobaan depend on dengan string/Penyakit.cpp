/*
judul
Menyimpulkan sebuah penyakit dan obatnya
Programer   : Azmi Jalaluddin Amron
ModifY      : 1 Oktober 2022
*/

#include <iostream>
using namespace std;

//kamus
    char nama[50], kelamin[30], choice;
    int umur;
    string gejala1;
    string gejala2;
    string gejala3;
    string gejala4;
    string gejala5;


//deskripsi
    int main ()
    {
        cout << "Masukkan nama anda : "; cin.getline(nama, 50);
        cout << "Masukkan jenis kelamin anda : "; cin.getline(kelamin, 30);
        cout << "Masukkan umur anda : "; cin >> umur; cout << " tahun.";
        cout << endl << endl;

        cout << "MASUKKAN GEJALA SESUAI YANG ADA DI DAFTAR" << endl;
        cout << "===================================================" << endl;
        cout << "A=PENURUNAN KESADARAN\n";
        cout << "B=MULUT PEROT\n";
        cout << "C=BATUK TERUS-MENERUS\n";
        cout << "D=RIWAYAT PAPARAN ALERGEN\n";
        cout << "E=PERTAMA KALI CACAR AIR\n";
        cout << "F=MUNTAH SEMBURAN\n";
        cout << "H=SESAK NAPAS TERUS MENERUS\n";
        cout << "I=BATUK HILANG TIMBUL\n";
        cout << "J=RUAM KEMERAHAN\n";
        cout << "K=KELKUMPUHAN SEPARUH TUBUH\n";
        cout << "L=RIWAYAT PAPARAN ROKOK PULUHAN TAHUN\n";
        cout << "M=SESAK NAPAS HILANG TIMBUL\n";
        cout << "N=LOKASI DI SELURUH TUBUH\n";
        cout << "O=TIDAK MUNTAH SEMPROTAN\n";
        cout << "P=RIWAYAT HIPERTENSI\n";
        cout << "Q=TIDAK MENGALAMI PENURUNAN KESADARAN\n";
        cout << "Z=TIDAK ADA\n";
        cout << "===================================================" << endl << endl << endl;

        /*
        kode penyakit :
        AFBGZ
        BGKOQ
        CHLZZ
        DIMZZ
        EJNZZ
        */
        /*
        Jika tidak terdeteksi kemungkinan tidak terdaftar pada gejala atau urutan kode salah atau lainnya
        */
        /*
        jika gejala tidak ada tekan saja "z"
        */



        do{
                cout << "Masukkan gejala sesuai kode yang telah disediakan\n";
                cout << "Ada 5 gejala untuk menyimpulkan penyakit\n";
                cout << "Khusus untuk program ini tentunya, jadi jika tidak ada silahkan ketik Z. " << endl;
                cout << "!PASTIKAN MASUKKAN KODE DENGAN HURUF KAPITAL!" << endl;
                cout << endl << endl << endl;
                cout << "Masukkan gejala pertama :" << endl;
                getline(cin,gejala1);

                switch (gejala1)
                {
                case "PENURUNAN KESADARAN" :
                    {
                        cout << "Masukkan gejala kedua : " << endl;
                        getline(cin,gejala2);
                        switch (gejala2)
                        {
                            case "MUNTAH SEMBURAN" :
                                {
                                    cout << "Masukkan gejala ketiga : " << endl;
                                    getline(cin,gejala3);
                                    switch (gejala3)
                                    {
                                        case "MULUT PEROT" :
                                        {
                                            cout << "Masukkan gejala keempat : " << endl;
                                            getline(cin,gejala4);
                                            switch (gejala4)
                                            {
                                                case "RIWAYAT HIPERTENSI" :
                                                    {
                                                        cout << "Masukkan gejala kelima : " << ednl;
                                                        cin >> getilinegejala5;
                                                        switch (gejala5)
                                                        {
                                                            case "TIDAK ADA" :
                                                                {
                                                                    cout << "Anda terkena penyakit Stroke Hemorragi\n";
                                                                    cout << "Obat-nya adalah Antihipertensi(ex:Propanolol)\n";
                                                                    break;
                                                                }
                                                            default  :
                                                                {
                                                                    cout << "Maaf ada kesalahan\n";
                                                                    break;
                                                                }
                                                        }
                                                        break;
                                                    }
                                                default  :
                                                    {
                                                        cout << "Maaf ada kesalahan\n";
                                                        break;
                                                    }
                                            }

                                            break;
                                        }
                                    default  :
                                        {
                                            cout << "Maaf ada kesalahan\n";
                                            break;
                                        }
                                    }
                                    break;
                                }

                            default  :
                                {
                                    cout << "Maaf ada kesalahan\n";
                                    break;
                                }
                        }
                        break;
                    }
                case "MULUT PEROT" :
                    {
                        cout << "Masukkan gejala kedua : ";
                        getline(cin,gejala2);
                        switch (gejala2)
                        {
                            case "RIWAYAT HIPERTENSI" :
                                {
                                    cout << "Masukkan gejala ketiga : ";
                                    getline(cin,gejala3);
                                    switch (gejala3)
                                    {
                                        case "KELUMPUHAN SEPARUH TUBUH" :
                                        {
                                            cout << "Masukkan gejala keempat : ";
                                            getline(cin,gejala4);
                                            switch (gejala4)
                                            {
                                                case "TIDAK MUNTAH SEMPROTAN" :
                                                    {
                                                        cout << "Masukkan gejala kelima : ";
                                                        getilinegejala5;
                                                        switch (gejala5)
                                                        {
                                                            case "TIDAK MENGALAMI PENURUNAN KESADARAN" :
                                                                {
                                                                    cout << "Anda terkena penyakit Stroke Iskemik\n";
                                                                    cout << "Obat-nya adalah Antiplatelet(ex:Warfarin)\n";
                                                                    break;
                                                                }
                                                            default  :
                                                                {
                                                                    cout << "Maaf ada kesalahan\n";
                                                                    break;
                                                                }
                                                        }
                                                        break;
                                                    }
                                                default  :
                                                    {
                                                        cout << "Maaf ada kesalahan\n";
                                                        break;
                                                    }
                                            }

                                            break;
                                        }
                                    default  :
                                        {
                                            cout << "Maaf ada kesalahan\n";
                                            break;
                                        }
                                    }
                                    break;
                                }

                            default  :
                                {
                                    cout << "Maaf ada kesalahan\n";
                                    break;
                                }
                        }
                        break;
                    }
                case "BATUK TERUS-MENERUS" :
                    {
                        cout << "Masukkan gejala kedua : ";
                        getline(cin,gejala2);
                        switch (gejala2)
                        {
                            case "SESAK NAPAS TERUS MENERUS" :
                                {
                                    cout << "Masukkan gejala ketiga : ";
                                    getline(cin,gejala3);
                                    switch (gejala3)
                                    {
                                        case "RIWAYAT PAPARAN ROKOH PULUHAN TAHUN" :
                                        {
                                            cout << "Masukkan gejala keempat : ";
                                            getline(cin,gejala4);
                                            switch (gejala4)
                                            {
                                                case "TIDAK ADA" :
                                                    {
                                                        cout << "Masukkan gejala kelima : ";
                                                        getilinegejala5;
                                                        switch (gejala5)
                                                        {
                                                            case "TIDAK ADA" :
                                                                {
                                                                    cout << "Anda terkena penyakit PPOK(Penyakit Paru Obstruktif)\n";
                                                                    cout << "Obat-nya adalah Inhaled Corticosteroid Dosis Disesuaikan\n";
                                                                    break;
                                                                }
                                                            default  :
                                                                {
                                                                    cout << "Maaf ada kesalahan\n";
                                                                    break;
                                                                }
                                                        }
                                                        break;
                                                    }
                                                default  :
                                                    {
                                                        cout << "Maaf ada kesalahan\n";
                                                        break;
                                                    }
                                            }

                                            break;
                                        }
                                    default  :
                                        {
                                            cout << "Maaf ada kesalahan\n";
                                            break;
                                        }
                                    }
                                    break;
                                }

                            default  :
                                {
                                    cout << "Maaf ada kesalahan\n";
                                    break;
                                }
                        }
                        break;
                    }
                case "RIWAYAT PAPARAN ALERGEN" :
                    {
                        cout << "Masukkan gejala kedua : ";
                        getline(cin,gejala2);
                        switch (gejala2)
                        {
                            case "BATUK HILANG TIMBUL" :
                                {
                                    cout << "Masukkan gejala ketiga : ";
                                    getline(cin,gejala3);
                                    switch (gejala3)
                                    {
                                        case "SESAK NAPAS HILANG TIMBUL" :
                                        {
                                            cout << "Masukkan gejala keempat : ";
                                            getline(cin,gejala4);
                                            switch (gejala4)
                                            {
                                                case "TIDAK ADA" :
                                                    {
                                                        cout << "Masukkan gejala kelima : ";
                                                        getilinegejala5;
                                                        switch (gejala5)
                                                        {
                                                            case "TIDAK ADA" :
                                                                {
                                                                    cout << "Anda terkena penyakit Asthma\n";
                                                                    cout << "Obat-nya adalah Salbutanol\n";
                                                                    break;
                                                                }
                                                            default  :
                                                                {
                                                                    cout << "Maaf ada kesalahan\n";
                                                                    break;
                                                                }
                                                        }
                                                        break;
                                                    }
                                                default  :
                                                    {
                                                        cout << "Maaf ada kesalahan\n";
                                                        break;
                                                    }
                                            }

                                            break;
                                        }
                                    default  :
                                        {
                                            cout << "Maaf ada kesalahan\n";
                                            break;
                                        }
                                    }
                                    break;
                                }

                            default  :
                                {
                                    cout << "Maaf ada kesalahan\n";
                                    break;
                                }
                        }
                        break;
                    }
                case "PERTAMA KALI CACAR AIR" :
                    {
                        cout << "Masukkan gejala kedua : ";
                        getline(cin,gejala2);
                        switch (gejala2)
                        {
                            case "RUAM KEMERAHAN" :
                                {
                                    cout << "Masukkan gejala ketiga : ";
                                    getline(cin,gejala3);
                                    switch (gejala3)
                                    {
                                        case "LOKASI DI SELURUH TUBUH" :
                                        {
                                            cout << "Masukkan gejala keempat : ";
                                            getline(cin,gejala4);
                                            switch (gejala4)
                                            {
                                                case "TIDAK ADA" :
                                                    {
                                                        cout << "Masukkan gejala kelima : ";
                                                        getilinegejala5;
                                                        switch (gejala5)
                                                        {
                                                            case "TIDAK ADA" :
                                                                {
                                                                    cout << "Anda terkena penyakit Varicella\n";
                                                                    cout << "Obat-nya adalah Antivirus(ex:Asiklovir)\n";
                                                                    break;
                                                                }
                                                            default  :
                                                                {
                                                                    cout << "Maaf ada kesalahan\n";
                                                                    break;
                                                                }
                                                     }
                                                    break;
                                                    }
                                                default  :
                                                    {
                                                        cout << "Maaf ada kesalahan\n";
                                                        break;
                                                    }
                                            }

                                            break;
                                        }
                                    default  :
                                        {
                                            cout << "Maaf ada kesalahan\n";
                                            break;
                                        }
                                    }
                                    break;
                                }

                            default  :
                                {
                                    cout << "Maaf ada kesalahan\n";
                                    break;
                                }
                        }
                        break;
                    }
                default  :
                    {
                        cout << "Maaf ada kesalahan\n";
                        break;
                    }



                }

            cout << "Wanna try again?\n";
            cout << "You can choice Y or N" << endl;
            cout << "So, your answer is : "; cin >> choice;


        }while (choice=='Y' || choice=='y');

            cout << "Terimakasih telah mencoba" << endl;




        return 0;
    }
