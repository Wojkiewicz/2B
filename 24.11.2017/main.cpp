#include <iostream>
#include <time.h>
#include <cstdio>
#include <stdlib.h>
#include <windows.h>
using namespace std;


int main()
{
  int i,n, silnia;
  cout<<"Podaj liczbe ";
  cin>>n;
  silnia=1;
  for(i=2;i<=n;i++){
    silnia=silnia*i;}
  cout<<"Silnia z "<<n<<" to "<<silnia<<endl;
}
