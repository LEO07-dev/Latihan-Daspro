#include <stdio.h>

int main(void)
{
  char nama[20];
  //nama = "Andika Putra"; <-- don't use this
  //Tidak bisa langsung mengubah isi array seperti di atas
  //solusinya dengan strcpy
  strcpy(nama, "Andika Putra");
  printf("Selamat belajar %s \n", nama);

  strcpy(nama, "Alex Firmansyah");
  printf("Selamat belajar %s \n", nama);

  strcpy(nama, "Fany Ramadhani");
  printf("Selamat belajar %s \n", nama);

  //tidak bisa mengubah nilai string secara langsung, tapi setiap element array bisa diubah seperti biasa
  nama[0] = 'Y  ';
  printf("Selamat belajar %s \n", nama);

  return 0;
}
