#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d, najmniejsza;
    cout << "Podaj 4 liczby" << endl;
    cin >> a >> b >> c >> d;
    najmniejsza=a;
    if (najmniejsza>b)
        najmniejsza=b;
    if (najmniejsza>c)
        najmniejsza=c;
    if (najmniejsza>d)
        najmniejsza=d;
    cout << "najmniejsza liczba to: "<< najmniejsza << endl;

        main();
    return 0;
}
//wykonanie michal wojkiewicz
