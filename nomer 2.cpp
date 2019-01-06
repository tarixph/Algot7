#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{

    printf("--------------------------------------------\n\t");
    printf("Nama : Midian Zauria Fiery\n\t");
    printf("Nim  : 311810812\n");
    printf("--------------------------------------------\n");

cout<<"--------------------------------------------"<<endl;
cout<<" PROGRAM UNTUK MENGOPRASIKAN 2 BUAH BILANGAN"<<endl;
cout<<"--------------------------------------------"<<endl;

int bilangan1, bilangan2;
string operasi;
cout<<"Masukan angka pertama = ";
cin>> bilangan1;
cout<<"Masukan angka kedua = ";
cin>> bilangan2;
cout<<"Masukan Operasi bilangan tersebut = ";
cin>> operasi;

if (operasi == "+")
{
    cout<<"Hasilnya ="<<(bilangan1)+(bilangan2)<<endl;
}
if (operasi == "-")
{
    cout<<"Hasilnya ="<<(bilangan1)-(bilangan2)<<endl;
}
if (operasi == "*")
{
    cout<<"Hasilnya ="<<(bilangan1)*(bilangan2)<<endl;
}
if (operasi == "/")
{
    cout<<"Hasilnya ="<<(bilangan1)/(bilangan2)<<endl;
}
return 0;

}
