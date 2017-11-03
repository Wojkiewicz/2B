#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;

int main()
{   int a, b, i, j, rzedy, symbol, p, k;
    string znak;
    cout << "podaj liczbê" << endl;
    cout << "1. petla ''while''"<< endl;
    cout << "2. petla for "<< endl;
    cout << "3. petla for v2"<< endl;
    cout << "4. petla for v3"<< endl;
    cout << "5. petla for v4"<< endl;
    cout << "6. petla w petli (rzedy)"<< endl;
    cout << "7. petla w petli (liczba znakow i rzedow)"<< endl;
    cout << "8. petla w petli (liczba znakow, rzedow i wybor znakow)"<< endl;
    cout << "9. petla poczatek i koniec"<< endl;
    cout << "10. petla poczatek i koniec"<< endl;
    cout << "Gdzie chesz przejsc?"<< endl;
    cout << "--------------------"<< endl;
    cin >> b;
    system("cls");
    switch (b){
    case 1:
        while (a>0){
        cout << "Podaj a ";
        cin >>a;}
    break;
    case 2:
        for(i=1; i<10; i++){
            cout << i << " " << endl;
        }
    break;
    case 3:
        for(i=1; i<=20; i++){
            if(i!=6){
                cout << i << " ";}
            else{
                cout << "Nie pokazuje liczby " ;
            }
        }
    break;
     case 4:
        for(i=1; i<=30; i++){
            if(i%2!=1){
                cout << i << endl;}
            else{
                cout << "x" <<endl;
            }
        }
    break;
    case 5:
        for(i=1; i<=30; i++){
            if(i%2!=0){
                cout << i << endl;}
            else{
                cout << "x" <<endl;
            }
        }
    break;
    case 6:
        cout <<"Podaj liczbe rzedow"<<endl;
        cin >>rzedy;
        for(i=1; i<=rzedy; i++){
            for(j=1; j<=10; j++){
            cout << "[]  ";}cout<<endl;
        }

    break;
    case 7:
        cout <<"Podaj liczbe rzedow"<<endl;
        cin >>rzedy;
        cout <<"Podaj liczbe symboli"<<endl;
        cin >>symbol;
        for(i=1; i<=rzedy; i++){
            for(j=1; j<=symbol; j++){
            cout << "[]  ";}cout<<endl;
        }

    break;
    case 8:
        cout <<"Podaj liczbe rzedow"<<endl;
        cin >>rzedy;
        cout <<"Podaj liczbe symboli"<<endl;
        cin >>symbol;
        cout <<"Jaki znak chesz wyswetlic"<<endl;
        cin >>znak;
        cout <<"-------------------------"<<endl;
        for(i=1; i<=rzedy; i++){
            for(j=1; j<=symbol; j++){
            cout <<" "<<znak;}cout<<endl;
        }
        cout <<"-------------------------"<<endl;
    break;

    case 9:
        cout<<"Podaj wartosc poczatkowa"<<endl;
        cin>>i;
        cout<<"Podaj wartosc koncowa"<<endl;
        cin>>j;
        if (i<j){
        for(i; i<=j; i++){
        cout<<i<<" ";
        }
        }else{cout<<"Bledne dane"<<endl;}
    break;
    case 10:
        cout<<"Podaj wartosc poczatkowa"<<endl;
        cin>>i;
        cout<<"Podaj wartosc koncowa"<<endl;
        cin>>j;
        if (i<j){
        for(i; i<=j; i++){
        if (i%2==0){
                cout <<i<<" parzy"<<endl;
        }else{
                cout <<i<<"nie parzy"<<endl;}


        }

    break;
    }
    return 0;
}
