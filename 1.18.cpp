#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d;
    cout << "Podaj bok dlugos boku numer jeden: " << endl;
    cin >> a ;
    cout << "Podaj bok dlugos boku numer dwa: " << endl;
    cin >> b ;
    cout << "Podaj bok dlugos boku numer trzy: " << endl;
    cin >> c;
    cout << "Dlugosc bokow to pierwszy: " << a << " drugi: " <<b<< " trzeci: " <<c<<endl;
    if (a+b>c && a+c>b && c+b>a)
        cout <<"Z tych bokow mozesz utowrzyc trojkat!" << endl;
    else
        cout <<"Z tych bokow nie utworzysz trojkata :(" <<endl;
    return 0;
}
