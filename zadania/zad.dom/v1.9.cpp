#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int x=5, y=7, z=5;
    x=x+2;
    if (x<y){
            x=x*z;
            y=y-1;
    }else{
    if (x==y){
            y=y-z;
            x=x-1;
    }else{
            y=y+z;
            x=x+1;
    }
    }
cout << "x wynosi: " << x << endl << "y wynosi: " << y << endl;
    return 0;
}
