#include <stdio.h>
#include <conio.h>

int ulang (int n);

int main (void)
{
int n;

    printf("--------------------------------------------\n\t");
    printf("Nama : Midian Zauria Fiery\n\t");
    printf("Nim  : 311810812\n");
    printf("--------------------------------------------\n");
    printf("== Menampilkan nama Algoritma dan Pemrograman Sebanyak hasil input==\n\n");
printf("masukan nilai (n) :");
scanf("%d",&n);
ulang (n);
getch ();
}
int ulang (int n)
{
int i;
for(i=1;i<=n;i++)
printf("algoritma dan pemorgraman \n");
return (i);
}
