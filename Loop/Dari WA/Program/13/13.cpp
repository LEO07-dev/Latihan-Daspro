#include <iostream>
using namespace std;


    int main()
    {
/*
        int i=1; //nilai awal i
        while (i<=9) //kondisi untuk loop
        {
            int a=1; //nilai awal a
            do
            {
                if (i>a || (i==9 && a==9) || (i==8 && a==8)) //Jadi saya membuat 3 kondisi dengan OR biar bisa sesuai gambar.
                {
                    cout << " " << " "; //Hasilnya akan kosong jika sesuai kondisi.
                }
                else
                {
                    cout << a << " "; //Hasil akan menunjukan angka yang tidak sesuai dengan kondisi.
                }
                a=a+1; //counter a
            }while (a<=10); //Kondisi untuk loop
            cout << endl;
            i=i+1; //counter dari i
        }
//        1 2 3 4 5 6 7 8 9 10
//          2 3 4 5 6 7 8 9 10
//            3 4 5 6 7 8 9 10
//              4 5 6 7 8 9 10
//                5 6 7 8 9 10
//                  6 7 8 9 10
//                    7 8 9 10
//                      8 9 10
//                        9 10
//Jika ingin untuk tampil seperti di atas maka kondisi untuk loop yang berada di dalam adalah a/i-1+2.
*/

        int i=9; //kondisi awal i kita balik dari 9 ke 1 berbeda dengan nilai awal i pada coding di atas.
        while (i>=1) //kondisi untuk loop
        {
            int a=1; //nilai awal a
            do
            {
                if (i>=a)
                {
                    cout << " " << " "; //Hasilnya akan kosong jika sesuai kondisi.
                }
                else
                {
                    cout << a << " "; //Hasil akan menunjukan angka yang tidak sesuai dengan kondisi.
                }
                a=a+1; //counter a
            }while (a<=10); //Kondisi untuk loop
            cout << endl;
            i=i-1; //counter dari i
        }
//                  10
//                9 10
//              8 9 10
//            7 8 9 10
//          6 7 8 9 10
//        5 6 7 8 9 10
//      4 5 6 7 8 9 10
//    3 4 5 6 7 8 9 10
//  2 3 4 5 6 7 8 9 10
//Di atas adalah hasil yang keluar sesuai dengan gambar yang diinginkan.

        return 0;
    }
