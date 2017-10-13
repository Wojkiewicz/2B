#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int x;

    cout << "Podaj liczbe! " << endl;
    cin >> x;
    if (x%2!=0){
        cout << "Liczba jest nie parzysta " << endl;

    }else{
        cout << "Liczba jest parzysta " << endl;
    }

    return 0;
}
