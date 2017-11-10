#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int rzedy, symbol, znak,j,i;


        for(i=1; i<=rzedy; i++){

        symbol=rand();
        znak=rand();
            for(j=1; j<=symbol; j++){
                rzedy=rand();
            cout <<" "<<znak;}cout<<endl;
        }
        cout <<"-------------------------"<<endl;





    return 0;
}
