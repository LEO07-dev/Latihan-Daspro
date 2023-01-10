#include <iostream>
using namespace std;
int a, b, jumlah;
int proses(int x, int y);

main()
{
    cin >> a;
    cin >> b;
    jumlah=proses(a,b);
    cout << jumlah;
}

int proses(int x, int y)
{
    // kamus lokal
    int JUMLAH;
    JUMLAH = a + b;
    return JUMLAH;
}

