/*
judul : membuat jam digital dengan am dan pm
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 10/23/2022 (bulan/tanggal/tahun)
*/

#include <ctime>
#include <iostream>
#include <windows.h>

//kamus

//deskripsi
    int main()
    {
        using std::cin;

        bool loop = true;

        while (loop)
        {

            std::time_t now = std::time (0);
            std::tm *local = std::localtime (&now);

            local->tm_hour -=24;

            system("cls");
            std::cout << ctime (&now) <<'\n';

            Sleep(1000);

        }
        cin.get();


        return 0;
    }
