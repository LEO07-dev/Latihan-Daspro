#include <stdio.h> //pakai<>

	int main (){
int a,b,n;
printf("tt==Program Membuat Gambar Bagun Datar Segitiga==n");
printf("n-Masukkan nilai untuk tingi segitiga :");
scanf("%d", &n);
  for(int a=0;a<=n;a++){
   for(int b=0;b<=n;b++){
   printf("");
   }
   for(int b=a;b<=n;b++){
    printf(" ");
   }
    for(int b=1;b<=a;b++){
    printf(" ");
   }
    for(int b=1;b<a;b++){
    printf("*");
   }
  printf("n");
  }
 }
