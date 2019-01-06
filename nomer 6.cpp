#include<stdio.h>
#include<conio.h>
int jumlah (int x, int bill2);
int ganjil (int bil1);

int main (void)
{
int n, bil1, bil2,x,i;

    printf("--------------------------------------------\n\t");
    printf("Nama : Midian Zauria Fiery\n\t");
    printf("Nim  : 311810812\n");
    printf("--------------------------------------------\n");
    printf("== Menjumlahkan deret ganjil ==\n\n");

printf ("Masukan Bilangan (n) :");
scanf("%d",&n);
bil1=1;
x=1;
printf("%d+",bil1);
for (i=1;i<=n-2;i++)
{
    bil2=ganjil (bil1);
    x=jumlah (x,bil2);
    bil1=bil2;
    printf("%d+",bil2);

}
bil2=ganjil (bil1);
x=jumlah (x,bil2);
printf("%d=%d",bil2,x);
getch ();
}
int ganjil (int bil1)
{
int bil2;
bil2=bil1+2;
return (bil2);
}
int jumlah (int x, int bil2)
{
 x=x+bil2;
 return(x);
}
