#include <iostream>

using namespace std;

int main()
{
  cout << "##  Program C++ Konversi Desimal ke Biner ##" << endl;
  cout << "============================================" << endl;
  cout << endl;

  int a[20], n, i, b[20], u, c[20], o;

  cout << "Input angka desimal: ";
  cin >> n;


//  cout << "Biner\n";
//  for(i=0; n/2>0; i++){
//    a[i] = n%2;
//    cout << "  " << n << endl;
//    cout << "2----" << a[i] << endl;
//    n /= 2;
//    cout << "  " << n << endl << endl;
//  }
//
//  cout << "\t\t\t\t";
//
//    cout << "Octal\n";
//
//  for(u=0; n/8>0; u++){
//    b[u] = n%8;
//    cout << "  " << n << endl;
//    cout << "8----" << b[u] << endl;
//    n /= 8;
//    cout << "  " << n << endl << endl;
//  }
//
    cout << "Hexa\n";

  for(o=0; n/16>0; o++){
    c[o] = n%16;
    cout << "   " << n << endl;
    cout << "16----" << c[o] << endl;
    n /= 16;
    cout << "   " << n << endl << endl;
  }

  cout << "================================================================================" << endl;
//  cout << "Angka binernya adalah: ";
//    cout << n;
//  for(i=i-1 ;i>=0 ;i--) {
//    cout << a[i];
//  }
//  cout << "\t";
//
//  cout << "Angka Octalnya adalah: ";
//    cout << n;
//  for(u=u-1; u>=0; u--){
//    cout << b[u];
//  }
//  cout << "\t";
//
  cout << "Angka Hexanya adalah: ";
    cout << n;
  for(o=o-1; o>=0; o--){
    if (c[o]==10)
    {
        cout << "A";
    }
    else if (c[o]==11)
    {
        cout << "B";
    }
    else if (c[o]==12)
    {
        cout << "C";
    }
    else if (c[o]==13)
    {
        cout << "D";
    }
    else if (c[o]==14)
    {
        cout << "E";
    }
    else if (c[o]==15)
    {
        cout << "F";
    }
    else
    {
        cout << c[o];
    }

  }
  cout << endl;

  return 0;
}
