#include <iostream>
using namespace std;

    int main()
    {

//        int a=1;
//        while(a<=7)
//        {
//            int b=1;
//            do
//            {
//                cout << b << " ";
//                b=b+1;
//            }while(b<=10);
//            cout << endl;
//            a=a+1;
//        }

        //Jika menggunakan for
        /*
        int i;
        for (i=1;i<=7;i++)
        {
            int a;
            for (a=1;a<=10;a++)
            {
                cout << a << " ";
            }
            cout << endl;
        }
        */

//        int a=1;
//        int t=0;
//        while(a<=5)
//        {
//            int b=1;
//            int h=0;
//            do
//            {
//                cout << b << " ";
//                b=b+1;
//                h=h+b;
//            }while(b<=10);
//            cout << " = ? " << endl;
//            a=a+1;
//            t=t+h-b;//bingung caranya.
//        }
//        cout << "=========================+" << endl;
//        cout << "                       " << t+a-1 << endl; //Ya dan akhirnya ketemu rumus yang benar nya tapi rumusnya di tulis di bagian output bukan dalam loop.



        int i=1; //nilai awal
        while (i<=8) // kondisi
        {
            int a=1; //nilai awal
            do
            {
                if (a/i-i/a==0) //Agar angka yang sesuai bersaf dan banjar-nya menampilkan '*'.
                {
                    cout << '*' << " "; //Agar tampil bintang pada angka yang ditentukan
                }
                else
                {
                    cout << a << " "; //To display numbers on a specified number
                }
                a++; //counter untuk variabel a
            }while(a<=8); //Kondisi
            cout << endl;
            i++; //counter untuk variabel i
        }

        return 0;
    }
