#include <iostream>

using namespace std;

int main()
{
    int n, s, i;
    cout << "Podaj liczbe n: " << endl;
    cin >>n;
    s=1;
    i=3;
    while (i<=n+2){
        s=s*i;
        i=i+1;

    }
    cout <<"wynik: "<<s<< endl;


    return 0;
}
