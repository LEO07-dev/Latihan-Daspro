//judul : no 9
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 1 pada 16/11/2022

#include <iostream>
using namespace std;

//kamus
    int DATANE[7], y, x, baskom;

//deskripsi
    int main()
    {
        x=0;
        while(x<7)
        {
            cin >> DATANE[x];
            x=x+1;
        }
        x=0;
        while(x<6)
        {
            y=0;
            while(y<7)
            {
                if (DATANE[x]>DATANE[y])
                {
                    baskom=DATANE[x];
                    DATANE[x]=DATANE[y];
                    DATANE[y]=baskom;
                }
                y=y+1;
            }
            x=x+1;
        }
        x=0;
        while(x<7)
        {
            cin >> DATANE[x];
            x=x+1;
        }

        return 0;
    }
