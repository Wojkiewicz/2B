#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{


    int x, f, p, q;
    p=-5;
    q=10;
    srand(time(NULL));
    x=p+rand()%(q-p+1);
    if (x<7){
        f=pow(x,2)+1;
        }else {
            switch(x)
            {
            case 7:
                f=cos(x-1);
                break;
            case 9:
                f=sqrt(3*x);
                break;
            default:
                f=-8*x;
            }
        }

    cout <<"wylosowane x to: "<<x<<endl;
    cout <<"f(x)= "<<f;

    return 0;
}
