//judul : Latihan 4
/*
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 12/7/2022
*/

#include <iostream>
using namespace std;

//kamus
    //pebuat variabel matriks
    int MATfoto[3][4];
    //maid variable
    int temp, i, j, x, y;

//deskripsi
    int main()
    {
        //screen display
        //without input

        //baris 1
        MATfoto[0][0] = 2;
        MATfoto[0][1] = 3;
        MATfoto[0][2] = 1;
        MATfoto[0][3] = 3;

        //baris 2
        MATfoto[1][0] = 7;
        MATfoto[1][1] = 8;
        MATfoto[1][2] = 1;
        MATfoto[1][3] = 4;

        //baris 3
        MATfoto[2][0] = 6;
        MATfoto[2][1] = 5;
        MATfoto[2][2] = 1;
        MATfoto[2][3] = 8;

        //display result
        cout << "||======||" << endl;
        i = 0;
        while(i<3)
        {
            cout << "|| ";
            j = 0;
            while(j<4)
            {
                cout << MATfoto[i][j];

                j = j + 1;
            }

            cout << " ||" << endl;
            i = i + 1;
        }
        cout << "||======||" << endl << endl << endl;



        //sorting
        i = 0;
        while(i<3)
        {
            x = 0;
            while(x<4)
            {
                y = x + 1;
                while(y<4)
                {
                    if(MATfoto[i][x]>=MATfoto[i][y])
                    {
                        temp = MATfoto[i][x];
                        MATfoto[i][x] = MATfoto[i][y];
                        MATfoto[i][y] = temp;
                    }


                    y = y + 1;
                }

                x = x + 1;
            }

            i = i + 1;
        }

        //display result after sorting
        cout << "||======||" << endl;
        i = 0;
        while(i<3)
        {
            cout << "|| ";
            j = 0;
            while(j<4)
            {
                cout << MATfoto[i][j];

                j = j + 1;
            }

            cout << " ||" << endl;
            i = i + 1;
        }
        cout << "||======||" << endl;




        return 0;
    }
