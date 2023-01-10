/*
Judul   : Membalikkan tampilan
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 11/30/2022
*/

#include <iostream>
using namespace std;

//kamus
    int i;
    int a_arr[6] = {3, 5, 6, 8, 2, 4};

//deskripsi
    int main()
    {

        //sebelum
        cout << "\tSebelum : \3 \n";
        cout << "data ";
        i=0;
        while(i<6)
        {
            cout << a_arr[i] << " ";

            i=i+1;
        }

        cout << endl << "====================" << endl;
        //sesudah
        cout << "\tSesudah : \3 \n";
        cout << "data ";
        i=i-1;
        while(i>=0)
        {
            cout << a_arr[i] << " ";

            i=i-1;
        }



        return 0;
    }
