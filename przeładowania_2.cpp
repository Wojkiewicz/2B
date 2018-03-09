#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int obliczSume(int a){
    return a;
}
int obliczSume(int a, int b){
    return a+b;
}
int obliczSume(int a, int b, int c){
    return a+b+c;
}



void wypisz(int a){
    cout<<"Liczba calkowita: "<<a<<endl;
}
void wypisz(double a){
    cout<<"Liczba rzeczywista: "<<a<<endl;
}
void wypisz(char a){
    cout<<"Znak: "<<a<<endl;
}



double oblicz(int a, double b){
    return a+b;
}
double oblicz(double a, double b){
    return a+b;
}
int main ()
{
    int x=2, y=5, z=10;
    double k=5.6, j=2.5;
    char znak = 'J';
    cout<<obliczSume(x)<<endl;
    cout<<obliczSume(x,y)<<endl;
    cout<<obliczSume(x,y,z)<<endl;


    wypisz(x);
    wypisz(k);
    wypisz(znak);

    cout<<oblicz(x,k)<<endl;
    cout<<oblicz(x,y);
    cout<<oblicz(k,j);



}
