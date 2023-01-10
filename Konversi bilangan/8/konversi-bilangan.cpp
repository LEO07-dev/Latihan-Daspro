#include <iostream>
using namespace std;

int main()
{
    int d;
    int i=0, n, j, b[100];
    char karakter;

    Awal:
        //title pada tampilan
    cout << "\t\tCONVERSI BILANGAN DECIMAL KE BINNER, OKTAL, DAN HEXADECIMAL";
    cout << "\n\nBy : Azmi Jalaluddin Amron";
        //menu
    cout << "\n\n\n\t\tMenu :\n";
    cout << "\n\n\t\t[1]Desimal ke Binner\n";
    cout << "\t\t[2]Desimal ke Oktal\n";
    cout << "\t\t[3]Desimal ke Hex\n";
    cout << "\n\tPilihannya hanya 1 s/d 3";
    cout << "\n\tSilakan pilih menu : ";
    cin >> d;

    //depend on
    switch (d)
    {
        //kondisi 1
        case 1 :
            cout << "\n\tmasukkan angka desimal: ";
            cin >> n;

            //loop
            while (n>0)
            {
                b[i]=n%2;
                n=n/2;
                i++;
            }
            cout << "\n\tdalam biner : ";
            j=i-1;

            for (i=j;j>=0;j--)
            {
                cout << b[j];
            }
            break;

        //kondisi 2
        case 2 :
            cout << "\n\tmasukkan angka desimal : ";
            cin >> n;

            //loop
            while(n>0)
            {
                b[i]=n%8;
                n=n/8;
                i++;
            }

            printf("\n\tdalam oktal : ");
            j=i-1;

            for(i=j;j>=0;j--)
            {
                cout << b[j];
            }
            break;

        //kondisi 3
        case 3 :
            cout << "\n\tmasukkan angka desimal : ";
            cin >> n;

            //loop
            while(n>0)
            {
                b[i]=n%16;
                n=n/16;
                i++;
            }
            cout << "\n\tdalam hexa : ";
            j=i-1;

            for(i=j;j>=0;j--)
            {
                if(b[j]<10)
                {

                    cout << b[j];
                }
                else
                {
                    switch(b[j])
                    {
                        case 10 : cout << "A"; break;
                        case 11 : cout << "B"; break;
                        case 12 : cout << "C"; break;
                        case 13 : cout << "D"; break;
                        case 14 : cout << "E"; break;
                        case 15 : cout << "F"; break;
                    }
                }
            }
    }

        cout << "\n\n\tcoba lagi?y/n : ";
        cin >> karakter;
        if (karakter=='y' || karakter=='Y')
        {
            goto Awal;
        }
        else
        {
            cout << "\n\n\tterimakasih telah mecoba.";
        }


        return 0;

}
