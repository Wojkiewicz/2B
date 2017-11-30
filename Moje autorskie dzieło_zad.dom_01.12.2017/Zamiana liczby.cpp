#include <iostream>
#include <math.h>
#include <conio.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <windows.h>
using namespace std;

int main(){
int x, a, dx=a;
string bin;
x:
cout<<"Podaj liczbe dziesietna: ";
cin>>a;

cout<<"\nNa jaki system chesz zamienic liczbe "<<a<<endl;
cout<<"1) binarny"<<endl;
cout<<"2) dziesietny"<<endl;
cout<<"3) szestnastkowy"<<endl;
cout<<"4) osemkowy"<<endl;
cout<<"5) Chce wpisac inna liczbe"<<endl;
cout<<"____________________________________"<<endl;
cin>>x;
cout<<"------------------------------------"<<endl;

switch(x)
{
case 1:
        while(a){
        bin = (a%2?"1":"0") + bin;
        a /= 2;}
        cout<<bin<<endl;
    break;

case 2:
        cout<<"\n dziesietny = "<<dec<<a<<endl;
    break;
case 3:
        cout<<"\n szesnastkowy = "<<oct<<a<<endl;
    break;
case 4:
        cout<<"\n osemkowy = "<<hex<<a<<endl;
    break;
case 5:
        cin>>a;
        goto x;
    break;
}
return 0;
}
