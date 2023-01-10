#include <iostream>
#include <string>
using namespace std;

string kata;
int n, i;
bool palindrome = true;

main()
{
    cout << "PROGRAM MENGECEK KATA\nPALINDROME ATAU BUKAN" << endl;
    cout << "Masukkan kata : ";getline(cin, kata);

    n=kata.length();

    i=0;
    while(i<n){
        if(kata[i]!=kata[n-i-1])
        {
            palindrome = false;
            cout << "Bukan palindrome" << endl;
            return(0);
        }
        i = i + 1;
    }
    cout << "Merupakan kata palindrome" << endl;
}
