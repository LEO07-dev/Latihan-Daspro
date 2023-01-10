#include <iostream>
using namespace std;

    int main()
    {
        int a=5;
        int b=16;
        int h=0;
        while (a<=30 && b>=8)
        {
            cout << a << " - " << b << " + ";
            a=a+5;
            b=b-2;
            h=h+a-b;
        }
        cout << a << " = " << h-5; //dikasih -5 karena waktu menghitung jumlah programnya membaca itu ketambahan +5 yang merupakan nilai awal a.

        return 0;
    }
