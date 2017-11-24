#include <iostream>
#include <time.h>
#include <cstdio>
#include <stdlib.h>
#include <windows.h>
using namespace std;


int main()
{
    int n, d=0;
    cout<<"Podaj liczbe: "<<endl;
    cin>>n;
    for(int i=1; i<=n/2;i++){
        if((n%i)==0)
            d+=i;
    }
    if (d==n)
        cout <<n<<" doskonala \n";
    else
        cout <<n<<" nie doskonala \n";
  return 0;
}
