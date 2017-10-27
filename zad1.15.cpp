#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Podaj 3 liczby ca³kowite" << endl;
    cin >>x>>y>>z;
    if (x%2==1 || y%2==1 || z%2==1 )
    cout <<"Tak"<< endl;
    else
    cout <<"nie"<< endl;
    return 0;
}
