/*
judul   : Array Lanjutan
Programer   : Azmi Jalaluddin Amron
Modify      : ke 1 pada 23/11/2022
*/

#include <iostream>
using namespace std;

//kamus
    int A[12], B[12], C[12], i;

//deskripsi
    int main()
    {
        //Bagian A
        A[0]=2;
        A[1]=3;
        A[2]=4;
        A[3]=1;
        A[4]=2;
        A[5]=4;
        A[6]=1;
        A[7]=6;
        A[8]=8;
        A[9]=1;
        A[10]=1;
        A[11]=7;

        //Bagian B
        B[0]=4;
        B[1]=4;
        B[2]=9;
        B[3]=1;
        B[4]=8;
        B[5]=2;
        B[6]=1;
        B[7]=1;
        B[8]=1;
        B[9]=5;
        B[10]=1;
        B[11]=3;

        //Bagian c
        C[0]=4;
        C[1]=7;
        C[2]=9;
        C[3]=1;
        C[4]=1;
        C[5]=7;
        C[6]=3;
        C[7]=1;
        C[8]=3;
        C[9]=3;
        C[10]=1;
        C[11]=2;

        cout << "Matriks!" << endl;
        cout << "Berapa hasil dari D=(A+B)-(A+C)" << endl;
        cout << endl;

        //Matriks A
        cout << "MatA" << endl;
        i=0;
        while (i<12)
        {
            if (i==3 || i==7)
            {
                cout << A[i] << endl;
            }
            else
            {
                cout << A[i] << " ";
            }
            i=i+1;
        }
        cout << endl << endl;

        //Matriks B
        cout << "MatB" << endl;
        i=0;
        while (i<12)
        {
            if (i==3 || i==7)
            {
                cout << B[i] << endl;
            }
            else
            {
                cout << B[i] << " ";
            }
            i=i+1;
        }
        cout << endl << endl;

        //Matriks C
        cout << "MatC" << endl;
        i=0;
        while (i<12)
        {
            if (i==3 || i==7)
            {
                cout << C[i] << endl;
            }
            else
            {
                cout << C[i] << " ";
            }
            i=i+1;
        }
        cout << endl << endl << endl;

        //Mencari D
        cout << "Nilai dari D!" << endl;
        cout << "Pertama cari (A + B)!" << endl;
        //Rumus
        cout << "A + B =    |" << A[0] << " + " << B[0] << "        " << A[1] << " + " << B[1] << "        " << A[2] << " + " << B[2] << "        " << A[3] << " + " << B[3] << "|" << endl;
        cout << "           |" << A[4] << " + " << B[4] << "        " << A[5] << " + " << B[5] << "        " << A[6] << " + " << B[6] << "        " << A[7] << " + " << B[7] << "|" << endl;
        cout << "           |" << A[8] << " + " << B[8] << "        " << A[9] << " + " << B[9] << "        " << A[10] << " + " << B[10] << "        " << A[11] << " + " << B[11] << "|" << endl;
        //Hasil
        cout << "A + B =    | " << A[0] + B[0] << "   " << A[1] + B[1] << "   " << A[2] + B[2] << "   " << A[3] + B[3] << "|" << endl;
        cout << "           |" << A[4] + B[4] << "   " << A[5] + B[5] << "    " << A[6] + B[6] << "   " << A[7] + B[7] << "|" << endl;
        cout << "           | " << A[8] + B[8] << "   " << A[9] + B[9] << "    " << A[10] + B[10] << "  " << A[11] + B[11] << "|" << endl;
        cout << endl << endl;
        cout << "Kedua cari (A + C)!" << endl;
        //Rumus
        cout << "A + C =    |" << A[0] << " + " << C[0] << "        " << A[1] << " + " << C[1] << "        " << A[2] << " + " << C[2] << "        " << A[3] << " + " << C[3] << "|" << endl;
        cout << "           |" << A[4] << " + " << C[4] << "        " << A[5] << " + " << C[5] << "        " << A[6] << " + " << C[6] << "        " << A[7] << " + " << C[7] << "|" << endl;
        cout << "           |" << A[8] << " + " << C[8] << "        " << A[9] << " + " << C[9] << "        " << A[10] << " + " << C[10] << "        " << A[11] << " + " << C[11] << "|" << endl;
        //Hasil
        cout << "A + C =    | " << A[0] + C[0] << "  " << A[1] + C[1] << "   " << A[2] + C[2] << "   " << A[3] + C[3] << "|" << endl;
        cout << "           | " << A[4] + C[4] << "  " << A[5] + C[5] << "    " << A[6] + C[6] << "   " << A[7] + C[7] << "|" << endl;
        cout << "           |" << A[8] + C[8] << "   " << A[9] + C[9] << "    " << A[10] + C[10] << "   " << A[11] + C[11] << "|" << endl;
        cout << endl << endl;
        cout << "Ketiga cari nilai D!" << endl;
        cout << "D = (A+B) - (A+C)!" << endl;
        //Rumus
        cout << "D = | " << A[0] + B[0] << " -  " << A[0] + C[0] << "       " << A[1] + B[1] << " - " << A[1] + C[1] << "       " << A[2] + B[2] << " - " << A[2] + C[2] << "       " << A[3] + B[3] << " - " << A[3] + C[3] << "|" << endl;
        cout << "    |" << A[4] + B[4] << " -  " << A[4] + C[4] << "       " << A[5] + B[5] << " - " << A[5] + C[5] << "        " << A[6] + B[6] << " -  " << A[6] + C[6] << "       " << A[7] + B[7] << " - " << A[7] + C[7] << "|" << endl;
        cout << "    | " << A[8] + B[8] << " - " << A[8] + C[8] << "       " << A[9] + B[9] << " -  " << A[9] + C[9] << "        " << A[10] + B[10] << " -  " << A[10] + C[10] << "      " << A[11] + B[11] << " - " << A[11] + C[11] << "|" << endl;
        //Hasil
        cout << "D = | " << (A[0] + B[0]) - (A[0] + C[0]) << "       " << (A[1] + B[1]) - (A[1] + C[1]) << "        " << (A[2] + B[2]) - (A[2] + C[2]) << "      " << (A[3] + B[3]) - (A[3] + C[3]) << "|" << endl;
        cout << "    | " << (A[4] + B[4]) - (A[4] + C[4]) << "       " << (A[5] + B[5]) - (A[5] + C[5]) << "       " << (A[6] + B[6]) -  (A[6] + C[6]) << "      " << (A[7] + B[7]) - (A[7] + C[7]) << "|" << endl;
        cout << "    |" << (A[8] + B[8]) - (A[8] + C[8]) << "        " << (A[9] + B[9]) - (A[9] + C[9]) << "        " << (A[10] + B[10]) - (A[10] + C[10]) << "      " << (A[11] + B[11]) - (A[11] + C[11]) << "|" << endl;



        return 0;
    }
