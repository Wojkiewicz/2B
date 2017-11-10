#include <iostream>

using namespace std;

int main()
{
    int a=0, b=-4;
    for(a;a<7;a++){
        if(b<14)
            cout <<b<<",";
        else
            cout <<b;
        b+=3;
    }


    return 0;
}
