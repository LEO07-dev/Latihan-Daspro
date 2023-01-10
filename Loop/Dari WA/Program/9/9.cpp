#include <iostream>
using namespace std;

    int main()
    {
        //int a=3; jika a bertype integer maka nanti setiap penjumlahan akan dibulatkan yang menyebabkan hasil total akan berbeda
        float a=3;
        float b=0;
        while (a<=15)
        {
            cout << a << "/9" << " ";
            //cout << "= " << b << " || ";
            b=b+a/9;
            a=a+2;
        }
        cout << "= " << b;

        return 0;
    }

