#include <iostream>
using namespace std;

int main()
{
    int x,sisa,bagi,y;
    cout << "------------------------------------" << endl;
    cout << " PROGRAM KONVERSI SISTEM BILANGAN" << endl;
    cout << "------------------------------------" << endl;
    cout << " | 1. Desimal      ke Biner        |" << endl;
    cout << " | 2. Desimal      ke Oktal        |" << endl;
    cout << " | 3. Desimal      ke Heksadesimal |" << endl;
    cout << " | 4. Biner        ke Desimal      |" << endl;
    cout << " | 5. Oktal        ke Desimal      |" << endl;
    cout << " | 6. Heksadesimal ke Desimal      |" << endl;
    cout << "------------------------------------" << endl;
    cout << "Masukkan Angka: ";
    cin >> y;

    //Desimal ke Biner
    if (y==1){
        cout << "-------------------------" << endl;
        cout << "Konversi Desimal ke Biner" << endl;
        cout << "-------------------------" << endl;
        cout << "Bilangan Desimal ";
        cin >> x;
        cout << endl;

        for(int i=-1; x>-1; i--){
            sisa = x % 2;
            x /= 2;
            cout << "Bilangan Biner: " << sisa << endl;
            if (x==0)
            {
                break;
            }
        }
        cout << endl;
        cout << "Ambil dari Bawah ke Atas" << endl;
        cout << "------------------------" << endl;


    }



    return 0;
    system("Pause");
}
