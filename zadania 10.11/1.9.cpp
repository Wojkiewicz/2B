#include <iostream>

using namespace std;

int main()
{
    int a, s;
    s=0;
    a=0;
    do
    {
    s=s+a;
    cout << "Podaj liczbe a: " << endl;
    cin >>a;
    }
    while (a<=50);
    cout <<"wynik: "<<s<< endl;


    return 0;
}
