#include<stdio.h>
#include<conio.h>
int tukar (int nilai);
int main (void)
{
int nilai ;

    printf("--------------------------------------------\n\t");
    printf("Nama : Midian Zauria Fiery\n\t");
    printf("Nim  : 311810812\n");
    printf("--------------------------------------------\n");
    printf("== Fungsi Mengubah nilai menjadi huruf ==\n\n");

printf (" Masukan NIlai 1 sampai 4 : ");
scanf ("%d",&nilai);
tukar (nilai);
getch();
}
int tukar (int nilai)
{
switch (nilai)
{
case 1 :
    printf(" Nilai Huruf : A");break;
case 2 :
    printf(" Nilai Huruf : B");break;
case 3 :
    printf(" Nilai Huruf : C");break;
case 4 :
    printf(" Nilai Huruf : D");break;
default :
    printf(" Kesalahan Input Angka");
}
return (nilai);
}
