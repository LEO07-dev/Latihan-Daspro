/*
judul : Membuat program jam dengan format am dan pm
Programer   : Azmi Jalaluddin Amron
Modify      : ke 4 pada 10/23/2022 (bulan/tanggal/tahun)
*/

#include <iostream>
using namespace std;

//kamus
    int j, m, s, i, g;
    string k, t, h[7];

//deskripsi
    int main()
    {
        h[0]="SENIN\t";
        h[1]="SELASA\t";
        h[2]="RABU\t";
        h[3]="KAMIS\t";
        h[4]="JUMAT\t";
        h[5]="SABTU\t";
        h[6]="MINGGUt";
        cout << "\t\t\t=======Program jam digital=======\n\n";

        i=0;
        g=0;
        g<=12;
        while (i<=7)
        {
            j=0;
            while (j<=23)
            {
                m=0;
                while (m<=59)
                {
                    s=0;
                    while (s<=59)
                    {
                        cout << "2018\t" << h[i] << " " << g+1 << " " << i+1 << endl;
                        cout << k << j << " : " << m << " : " << s << " " << t << " " <<  endl;
                        s=s+1;
                        if (j>=12)
                        {
                            t="PM";
                        }
                        else if (j>=0)
                        {
                            t="AM";
                        }

                        if (j==9 || j==10 || j==11 || j==12 || j==13 || j==14 || j==15)
                        {
                            k="MIDDAY\t";
                        }
                        else
                        {
                            k="MIDNIGHT\t";
                        }
                    }
                    m=m+1;
                }
                j=j+1;
            }

        }

        return 0;
    }
