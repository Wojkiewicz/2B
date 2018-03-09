#include <iostream>

using namespace std;
int a;
void oblicz1 (void){
int a;
a=10;
cout<<"W funkcji oblicz1: "<<a<<endl;

}
void oblicz2(void){
    a=20;
    cout<<"W funkcji oblicz2: "<<a<<endl;
}
void oblicz3(int &z){
    z=-5;
    cout<<"W funkcji oblicz3: "<<z<<endl;
}
void oblicz4(int z){
    z=-7;
    cout<<"W funkcji oblicz4: "<<z<<endl;
}

int main ()
{
a=0;
cout<<"Zmienna a: "<<a<<endl;
oblicz1();
cout<<"Zmienna a: "<<a<<endl;
oblicz2();
cout<<"Zmienna a: "<<a<<endl;
oblicz3(a);
cout<<"Zmienna a: "<<a<<endl;
oblicz4(a);
cout<<"Zmienna a: "<<a<<endl;
}
