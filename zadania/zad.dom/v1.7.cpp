#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int a, b, c, najwieksza;
    cout << "Podaj 3 liczby"<< endl;
    cin >> a >>  b >> c;
    najwieksza=a;
    if (b>najwieksza){
            najwieksza=b;
        if (c>najwieksza){
            najwieksza=c;

        }

    }
    cout << "to: " << najwieksza << endl;
    return 0;
}
