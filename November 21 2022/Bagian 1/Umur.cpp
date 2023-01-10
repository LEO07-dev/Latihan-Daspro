//judul : array lanjutan
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 1 pada 11/21/2022
//17, 18, 17, 34, 46, 22, 17, 18, 35, 34, 17, 18

#include <iostream>
using namespace std;

//kamus
    int age[12];
    //variabel age dengan array untuk menampung inputan dengan jenit type data yang sama
    int i, x, y, baskom, terbesar, terkecil, many1, many2;
    float average;
    //variabel

//deskripsi
    int main()
    {
        cout << "\t\tUmur\n" << endl;
        //bagian input umur
        i=0;
        while (i<12)
        {
            cout << "Masukkan umur ke-" << i+1 << " : ";
            cin >> age[i];
            i=i+1;
        }

        //rata-rata
        i=0;
        average=0;
        while(i<12)
        {
            average=average+age[i];
            i=i+1;
        }
        cout << "Rata-ratanya adalah = " << average/i << endl;

        //sebelum disorting
        x=0;
        while (x<12)
        {
            cout << age[x] << " ";
            x=x+1;
        }

        cout << endl;
        //bagian sorting
        x=0;
        while (x<11)
        {
            y=x+1;
            while (y<12)
            {
                if (age[x]>age[y] )
                {
                    baskom = age[x];
                    age[x] = age[y];
                    age[y] = baskom;
                }
                y = y +1;
            }
            x=x+1;
        }

        //tampilan setelah disorting
        x=0;
        while (x<12)
        {
            cout << age[x] << " ";
            x=x+1;
        }
        
        //berapa banyak data terbesarnya
        i=1;
        terbesar = age[0];
        do{
        	if (age[i]>terbesar)
        	{
        		terbesar=age[i];
			}
			i = i+1;
		}while (i<12);
		i=0;
		many1=0;
		while (i<12)
		{
			if (age[i]==terbesar)
			{
				many1=many1+1;
			}
			i=i+1;
		}
		cout << "\nBilangan terbesar bernilai " << terbesar << endl;
		cout << "Banyak data terbesar adalah = " << many1 << endl;
		
		//berapa banyak data terkecilnya
        i=0;
        terkecil = age[1];
        do{
        	if (age[i]<terkecil)
        	{
        		terkecil=age[i];
			}
			i = i+1;
		}while (i<12);
		i=0;
		many2=0;
		while (i<12)
		{
			if (age[i]==terkecil)
			{
				many2=many2+1;
			}
			i=i+1;
		}
		cout << "\nBilangan terkecil bernilai " << terkecil << endl;
		cout << "Banyak data terkecil adalah = " << many2 << endl;


        return 0;
    }
