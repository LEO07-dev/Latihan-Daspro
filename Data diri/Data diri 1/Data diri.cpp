//Program biodata diri
#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
    char data1[50];
    char data2;
    float data3;
    float data4;
    cout<<"Masukkan Nama Anda \t = ";
    cin>>data1;
    cout<<"Masukkan Jenis Kelamin L/P = ";
    cin>>data2;
    cout<<"Masukkan usia \t\t = ";
    cin>>data3;
    cout<<"Masukkan Tinggi Badan \t = ";
    cin>>data4;
    cout<<"\n--------------------Tampilkan Data Anda\n-------------------";
    cout<<"\nNama Anda \t = ";
    cout<<data1;
    cout<<"\nJenis Kelamin \t =";
    cout<<data2;
    cout<<"\nUsia \t\t =";
    cout<<data3;
    cout<<"\nTinggi Badan \t =";
    cout<<data4;
    cout<<" cm";
    getch();
}
