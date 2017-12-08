#include <iostream>
#include <string>

using namespace std;

int main (){
    int n, i=1, dziel=0;
    cin>>n;
do{
    if (n%i==0){
        dziel++;}
    i++;
}while(i<=n);
if (dziel==2)
cout<<"liczba pierwsza";
else
cout<<"To nie jest liczba pierwsza";

return 0;
}
