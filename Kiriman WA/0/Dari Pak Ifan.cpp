// judul : simulasi awal loop dengan while
// 18 sept 2022
// bonjovi malam malam ngantuk di rumah

#include <iostream>
using namespace std;
// kamus
int x;

// deskripsi
int main() {
    // berikut contoh loop while
    // dari awalan 1 melalui variable x
    // counternya 1 per 1  ( x = x + 1)
    // berulang selama kurang dari 20   (while < 20)
    x = 1;
    while (x < 20)
    {
        cout << "Hello ndess !" << endl;
        x = x + 1;
    }

    return 0;
}
