#include <iostream>
using namespace std;

    int main()
    {
        /*
        int a=18;
        int b=4;
        jika variabel a dan b bertype integer maka nanti hasil nya akan dibulatkan ke angka nya langsung tanpa desimal sehingga waktu pernjumlahan total akan tidak sesuai.
        */
        float a=18;
        float b=4;
        float h=0;
        do
        {
            cout << a << "/" << b << endl;
            cout << "= " << a/b << endl; //ini bisa dibuat kalau mau per pecahan ada hasilnya.
            a=a-1;
            b=b+1;
            //h=h+(a/b);
        }while(a>=12 && b<=10);
        //cout << "Total = " << h; //kalau mau langsung total nya tinggal uncomment aja.

        return 0;
    }
