#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int main()
{
    HANDLE  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    double x, xi, a, b, c, delta;
    cout << "Podaj a, b, c" << endl;
    cin >> a >> b >> c;
    if (a==0) cout << "To nie jest równanie kwadratowe";
    else{
    delta=b*b-4*a*c;
    if (delta<0) cout << "rownanie nie ma pierwiastkow";
    else{
        if (delta==0){
            x=-b/(2*a);
            cout << "x= " <<x<< endl;
                }else{
                    x=(-b-sqrt(delta))/(2*a);
                    xi=(-b+sqrt(delta))/(2*a);
                    SetConsoleTextAttribute(hConsole, 5 | 9);
                    cout << "x1= "<<x<<"\nx2= "<< xi <<endl;}
        }
   }

return 0;
}
