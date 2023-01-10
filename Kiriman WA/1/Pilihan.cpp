// judul : simulasi lanjutan, setelah belajar if ten
// 18 sept 2022
// bonjovi malam malam ngantuk di rumah

#include <iostream>
using namespace std;
// kamus
int pilihan;

// deskripsi
int main() {
    cout << "masukan pilihan anda"  << endl ;
    cout << "dari angka 1 ~ 4 saja. maka kamu akan dapat hasil yang menakjubkan. silakan coba"  << endl ;
    cin >> pilihan;
    switch (pilihan)
    {
        case 1 :
            {
                cout << "cuci kami dan tangan, terus  gosok gigi dan selajutnya " << endl << "tidur ganteng";
                break;
            }
        case 2 :
            {
                cout << "matikan game online nya atau close applikasi sosmed nya dan selajutnya " << endl << "buka laptop / komputer. ajar coding";
                break;
            }
        case 3 :
            {
                cout << "pergi ke dapur, cek stok indomie goreng dan telurnya " << endl <<  "nge indomi dulu di dapur ";
                break;
            }
        case 4 :
            {
                cout << "tidur aja hehehe    " << endl ;
                break;
            }
        default :
            {
                cout << "pilihannmu kurang keren";
                break;
            }
    }

    return 0;
}
