/*
Judul   : Membalikkan tampilan
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 11/30/2022
*/

#include <iostream>
using namespace std;

//kamus
    int i, j;
    int data_arr[6] = {3, 5, 6, 8, 2, 4};
    int data1_arr[6];

//deskripsi
    int main()
    {

        //sebelum
        cout << "\tSebelum : \3 \n";
        cout << "data ";
        i=0;
        while(i<6)
        {
            cout << data_arr[i] << " ";

            i=i+1;
        }

        //bagian pembalikan
        i=0;
        j=5;
        while(i<6)
        {
           data1_arr[j]=data_arr[i];
            i = i + 1;
            j = j - 1;
        }

        cout << endl << "====================" << endl;
        //sesudah
        cout << "\tSesudah : \3 \n";
        cout << "data ";
        i=0;
        while(i<6)
        {
            cout << data1_arr[i] << " ";

            i = i + 1;
        }



        return 0;
    }
