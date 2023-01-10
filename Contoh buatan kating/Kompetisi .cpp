#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Kompetisi {
    public:
	string namaTim;
	int menang, seri, kalah;
    int gol, kebobolan;

    void inputData(){
        cout<<"Nama Tim : ";
        cin>>this->namaTim;
        cout<<"Jumlah menang : ";
        cin>>this->menang;
        cout<<"Jumlah seri : ";
        cin>>this->seri;
        cout<<"Jumlah kalah : ";
        cin>>this->kalah;
        cout<<"Jumlah Kebobolan : ";
        cin>>this->kebobolan;
        cout<<"Jumlah Gol : ";
        cin>>this->gol;
    }

    char namaFile[30] = "kompetisi.dat" ;

    void simpanData() {
        Kompetisi Laliga;
        Laliga.inputData();

        //proses simpan objek ke file
        ofstream f;
        f.open(namaFile, ios::binary|ios::app);
        f.write((char*) &Laliga, sizeof(Laliga));
        f.close();
    }

    void bacaData(){
        Kompetisi Laliga;
        ifstream f;
        f.open( namaFile, ios::binary );
            cout << "+---------------------------+----------+----------+----------+----------+----------+-------------+----------+\n";
            cout << "| Nama Tim                  | Menang   | Seri     | Kalah    |   Gol    |  Kegolan | Selisih Gol | Point    |\n";
            cout << "+---------------------------+----------+----------+----------+----------+----------+-------------+----------+\n";
        while (f.read((char*)&Laliga, sizeof(Laliga))) {
            Laliga.outputNilai();
        }
        cout << "+---------------------------+----------+----------+----------+----------+----------+-------------+----------+\n";
        f.close();
    }
    void outputNilai(){
        cout << "| " << setiosflags(ios::left) << setw(25) << this->namaTim << " | ";
        cout << setiosflags(ios::left) << setw(8) << this->menang << " | ";
        cout << setiosflags(ios::left) << setw(8) << this->seri << " | ";
        cout << setiosflags(ios::left) << setw(8) << this->kalah << " | ";
        cout << setiosflags(ios::left) << setw(8) << this->gol << " | ";
        cout << setiosflags(ios::left) << setw(8) << this->kebobolan << " | ";
        cout << setiosflags(ios::left) << setw(11) << this->selisihGol(this->gol,this->kebobolan) << " | ";
        cout << setiosflags(ios::left) << setw(8) << this->point(this->menang,this->seri,this->kalah) << " |\n";
    }

    int point(int menangP,int seriP, int kalahP){
        return (menangP*3)+(seri*1)+(kalah*0);
    }
    int selisihGol(int golM,int kegolanM){
        return this->gol-this->kebobolan;
    }
};



int main(){

    Kompetisi laLiga;

    cout <<"Menulis ke file \n";
    laLiga.simpanData();

    cout <<"\nMembaca dari file \n";
    laLiga.bacaData();

	return 0;
}
