#include<stdio.h>
using namespace std;
void pecahan ();
main ()
{
pecahan ();
}
void pecahan ()
{
int a,b,l,t;

    printf("--------------------------------------------\n\t");
    printf("Nama : Midian Zauria Fiery\n\t");
    printf("Nim  : 311810812\n");
    printf("--------------------------------------------\n");


printf("== Mengetahui kuadran dari input koordinat x dan y ==\n\n");
printf(" masukan Pembilang : ");
scanf ("%d", &a);
printf(" masukan Penyebut : ");
scanf ("%d", &b);
t=a/b;
l=a%b;
if (a%b==0)
    printf ("Bilangan (%d/%d)\n disederhanakan Menjadi %d",a,b,t);
else if (a%b !=0)
    printf (" Bilangan (%d/d%)\n Disederhanakan Menjadi (%d/%d)",a,b,t,l,b);
}
