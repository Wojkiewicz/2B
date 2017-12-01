#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
int q;
cout<<"podaj numer zadania"<<endl;
cout<<"Zadanie 1) Ciag liczb od -3 do 24;"<<endl;
cout<<"Zadanie 2) Ciag liczb od -3 do 24 v2;"<<endl;
cout<<"Zadanie 3) Ciag liczb, uzytkownik podaje wart poczatkowa i koncowa"<<endl;
cout<<"Zadanie 4)      "<<endl;
cout<<"-----------------------------------------------------------------"<<endl;
cin>>q;
switch (q){
case 1://ciag liczb od -3 do 24 nie wliczajac 3 i 18
    int i;
    for(i=-3;i<=24;i=i+3){
        if (i!=3 && i!=18 )
        if(i==24){
            cout<<i<<"";}
        else{cout<<i<<",";}}
    break;
case 2://ciag liczb od -3 do 24 nie wliczajac 3 i 18 i tylko liczny nieparzyste
        for(i=-3;i<=24;i=i+3){
        if (i!=3 && i!=18 && i%2!=0)
        if(i==21){
            cout<<i;}
        else{cout<<i<<",";}}
    break;
case 3://Ciag licz, uzytkownik podaje wart poczatkowa i koncowa
    int x, y;
    cout<<"podaj wart poczatkowa"<<endl;
    cin>>x;
    cout<<"podaj wart koncowa"<<endl;
    cin>>y;
    for (i=x;i<=y;i++)
    if (i%2!=0){
        if(i==y||i==y-1)
        cout<<i<<".";
        else
        cout<<i<<",";}
    break;
case 4:

    break;
}



return 0;
}

