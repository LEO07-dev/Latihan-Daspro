/* judul : Program Sequential Search
  5 des 2022
  ifan rizqa*/

//  method flag

#include<iostream>
#include<conio.h>
// kamus
    int Nilai[20];
    int Posisi[20];
    int i, N, Bilangan, Banyak=0;
    bool ketemu; //bool adalah boolean yang bernilai 2 yaitu yes or not and true or false and 1 or 0
    using namespace std;
main()
{

  cout<<"Masukkan Banyaknya Bilangan yang akan kalian input = ";
  cin>>N;
  cout<<endl;

  //Mengisi elemen Array
  i = 0;
  while( i< N)
  {
    cout<<"Masukkan elemen ke-"<<i<<" = ";
    cin>>Nilai[i];
    i = i + 1;
  }

  //Mencetak Elemen Array
  cout<<"\n\Deretan Bilangan yang sudah anda input adalah = ";
  i = 0;
  while(i<N)
  {
    cout<<Nilai[i]<<" ";
    i = i + 1;
  }

  cout<<"\n\nMasukkan Bilangan yang akan Dicari = ";
  cin>>Bilangan;

  //Melakukan Pencarian
  i = 0;
  do
  {
    if(Nilai[i]==Bilangan)
    {
      ketemu = true;
      Posisi[Banyak]=i;
      Banyak++;
    }
      i = i + 1;
  }while (i<N);




  if(ketemu)
  {
    cout<<"Bilangan "<<Bilangan<<" ditemukan sebanyak "<<Banyak;
    cout<<"\npada posisi ke = ";
    for(i=0; i<Banyak; i++)
    cout<<Posisi[i]<<" ";
  }
    else
    cout<<"Bilangan "<<Bilangan<<" tidak ditemukan";
    //getch();
}
