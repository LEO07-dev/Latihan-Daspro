/*
judul : tampilan 1-40
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 7/11/2022
*/

#include <iostream>
using namespace std;

//kamus
    int a, h; //cukup 1 variabel untuk mencari
    //variabel h untuk jumlah seluruh nilai dari nilai-nilai yang ada di dalam variabel a
//    int b, i, k;// Jika ingin untuk dengan variabel lain
    //variabel b mirip dengan variabel a
    //variabel i mirip dengan variabel j
    //bariabel k mirip dengan variabel y
//    int j, y;
    //variabel j untuk menunjukkan banyak nya nilai
    //variabel y untuk menunjukkan jumlah nilai keseluruhan

    //varibel untuk array
    int c[41]; //varibel c dengan array
    int p, q;
    //variabel p untuk indeks dari varibel c ---> c[p]
    //variabel q untuk jumlah nilai dari keseluruhan nilai variabel c

//deskripsi
int main ()
{
    //dengan variabel biasa
    //nilai awal
    a=1;
    h=0;
    cout << "\t\tdengan variabel biasa\n";
    while (a<=40) //tujuan
    {
        cout << a << " ";   //yang diulang
        //kondisi ulang
        h=h+a; //counter increment untuk mencari jumlah dari variabel a
        a=a+1; //counter increment untuk membuat nilai variabel a bertambah satu dari nilai sebelumnya
    }
    cout << "\n\njumlah bilangan 1-40 adalah " << h;
    cout << endl << endl;

    //dengan variabel lain
//    b=1;
//    i=0;
//    k=0;
//    while (b<=40)
//    {
//        if (b%4==0)
//        {
//            cout << b << " ";
//            i=i+b;
//            k=k+1;
//        }
//        b=b+1;
//    }
//    cout << "\n\njumlah bilangan 1-40 yang habis dibagi 4 adalah " << i;
//    cout << "\nBanyak bilangan 1-40 yang habis dibagi 4 adalah " << k;
//    cout << endl << endl;

    //dengan variabel yang sama
//    a=1;
//    j=0;
//    y=0;
//    while (a<=40)
//    {
//        if (a%4==0)
//        {
//            cout << a << " ";
//            j=j+a;
//            y=y+1;
//        }
//        a++;
//    }
//    cout << "\n\njumlah bilangan 1-40 yang habis dibagi 4 adalah " << j << endl;
//    cout << "\nBanyak bilangan 1-40 yang habis dibagi 4 adalah " << y << endl << endl;

    //dengan array
    p=0;
    c[0]=1;
    q=0;
    cout << "\t\tdengan array\n";
    while (c[p]<=40)
    {
        cout << c[p] << " ";
        q=q+c[p];
        p=p+1;
        c[p]=c[p-1]+1;

    }
    cout << "\n\njumlah bilangan 1-40 adalah " << q << endl;
    //dari 40 ke 1 dengan array
    cout << "\n\tdari 40 ke 1 dengan array\n";
    while (c[p-1]>=1)
    {
        cout << c[p-1] << " ";
        p=p-1;
    }



    return 0;
}
