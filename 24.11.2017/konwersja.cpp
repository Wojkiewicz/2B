#include <iostream>
#include <time.h>
#include <cstdio>
#include <stdlib.h>
#include <windows.h>
#include <iomanip>

using namespace std;


int main()
{
 //dec, hex, oct,//
int k=100;
double x=100.123456789;
cout<<"k = " <<k<<endl;
cout<<"konwersja systemow liczbowych: ";cout<<"\n";
cout<<"\n szesnastkowy = "<<hex<<k<<endl;
cout<<"\n osemkowy = "<<oct<<k<<endl;
cout<<"\n dziesietny = "<<dec<<k<<endl;
cout<<"\n liczba k zapisana na 8 znaakach:";
cout<<"\n 8 znakow: "<<setfill('0')<<setw(8)<<k<<endl;
cout<<setprecision(3)<<x<<endl;

  return 0;
}
