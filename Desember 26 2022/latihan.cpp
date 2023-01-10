#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;

int a;
int konsonan, vokal, KATA, KALIMAT;
int i;

main()
{
    char kata[100];
    cout << "Ketikkan sebuah kata\n";
    gets(kata);

    string kalimat;
    kalimat.append(kata); //mengubah char ke string
    a = kalimat.length(); //mengetahui panjang kalimat
    strupr(kata); //untuk mengkapital kalimat atau dari char tadi

    KATA = 1;
    KALIMAT = 0;
    vokal = 0;
    konsonan = 0;
    for(i=0; i< a; i++)
    {
        if(kata[i] == 'A' || kata[i] == 'I' || toupper(kata[i]) == 'U' || toupper(kata[i]) == 'E' || toupper(kata[i]) == 'O')
        {
            vokal++;
        }
        else if(kata[i]==' ')
        {
            KATA++;
        }
        else if(kata[i]=='.')
        {
            KALIMAT++;
        }
        else
        {
            konsonan++;
        }
    }

    cout << "\n\n\nHasiloriginal nya adalah : " << kalimat; //dengan string
    cout << "\n\n\nHasil kapital nya adalah : " << kata; //dengan char
    cout << endl << endl << "Berapa jumlah konsonan dan vokal ? " << endl;
    cout << "Konsonan : " << konsonan << endl;
    cout << "Vokal    : " << vokal << endl;
    cout << "Jumlah kata    : " << KATA << endl;
    cout << "Jumlah kalimat    : " << KALIMAT << endl;

}
