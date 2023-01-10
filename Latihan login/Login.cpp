#include <iostream>
using namespace std;

    int main()
    {
        int i=1;
        string pass="aam123";
        string input;

        while (i<=3)
        {
            cout << "i : " << i << endl;
            cout << "masukkan password : ";
            cin >> input;

            if (input==pass)
            {
                cout << "Anda berhasil masuk" << endl;
                break;
            }
            if (i==3)
            {
                cout << "Anda sudah gagal sebanyak 3x, akun terblokir" << endl;
            }
            i++;
        }

        //cout << "Anda berhasil login" << endl;

        return 0;
    }
