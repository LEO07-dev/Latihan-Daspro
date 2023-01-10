//judul : Mengkonversi bilangan
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 11 pada 10/20/2022 (bulan/tanggal/tahun)

//kamus
#include <conio.h>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

//variabel angka
int i, a[20], u, b[20], o, c[20];
int n;
//string
string hasil1, hasil2, hasil3;
string temp1, temp2, temp3;


//function
int biner (int n);
int binerresult (int n, int x);
int octal (int n);
int octalresult (int n, int x);
int hexa (int n);
int hexaresult (int n, int x);

//deskripsi
int main()
{
    //output loop dengan memanggil fuction
  do {
    cout << "\nPlease, Enter the numbers : ";
    cin >> n;
    stringstream bit1, bit2, bit3;
    bit1 << biner(n);
    bit1 >> temp1;
    hasil1=temp1;
    bit2 << octal(n);
    bit2 >> temp2;
    hasil2=temp2;
    bit3 << hexa(n);
    bit3 >> temp3;
    hasil3=temp3;
    cout << hasil1;
    cout << setiosflags(ios::left)<<setw(20) << hasil2;
    cout << setiosflags(ios::left)<<setw(40) << hasil3;
  } while (n!=0 || n!=n>1);
  return 0;
}

//fuction perhitungan biner
int biner (int n)
{
    cout << "\nBiner\n";
    for(i=0; n/2>0; i++){
    a[i] = n%2;
    cout << "  " << n << endl;
    cout << "2----" << a[i] << endl;
    n /= 2;
    cout << "  " << n << endl << endl;
    }
    binerresult(n, a[i]);
    return n;
}


//fuction hasil perhitungan biner
int binerresult (int n, int x)
{
    cout << "Angka binernya adalah: ";
    cout << n;
    for(i=i-1 ;i>=0 ;i--) {
    cout << a[i];
    }
    return n;
}

//fuction perhitungan octal
int octal (int n)
{
    cout << "\nOctal\n";
    for(u=0; n/8>0; u++){
    b[u] = n%8;
    cout << "  " << n << endl;
    cout << "8----" << b[u] << endl;
    n /= 8;
    cout << "  " << n << endl << endl;
  }
  octalresult(n, b[u]);
    return n;
}

//fuction hasil perhitungan octal
int octalresult (int n, int x)
{
    cout << "Angka Octalnya adalah: ";
    cout << n;
    for(u=u-1; u>=0; u--){
    cout << b[u];
    }
    return n;
}

int hexa (int n)
{
    cout << "\nHexa\n";
    for(o=0; n/16>0; o++){
    c[o] = n%16;
    cout << "   " << n << endl;
    cout << "16----" << c[o] << endl;
    n /= 16;
    cout << "   " << n << endl << endl;
  }
  hexaresult (n, c[o]);
  return n;
}

int hexaresult (int n, int x)
{
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
  return n;
}
