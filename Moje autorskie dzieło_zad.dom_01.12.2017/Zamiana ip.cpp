#include <iostream>
#include <math.h>
#include <conio.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <windows.h>
using namespace std;

int main(){
int ip, ipa, ipb, ipc;
string ippc, ipac,ipbc,ipcc,wo;
wo="wojkiewicz";
cout<<"Podaj ip (zamiast kropek uzyj spacji): "<<endl;
cin>>ip>>ipa>>ipb>>ipc;
cout<<"podane ip to: "<<ip<<"."<<ipa<<"."<<ipb<<"."<<ipc<<endl;
while(ip){
        ippc = (ip%2?"1":"0") + ippc;
        ip /= 2;};
while(ipa){
        ipac = (ipa%2?"1":"0") + ipac;
        ipa /= 2;};
//wojkiewicz//
while(ipb){
        ipbc = (ipb%2?"1":"0") + ipbc;
        ipb /= 2;};
while(ipc){
        ipcc = (ipc%2?"1":"0") + ipcc;
        ipc /= 2;};
cout<<"\n";
cout<<setfill('0')<<setw(8)<<ippc<<".";
cout<<setfill('0')<<setw(8)<<ipac<<".";
cout<<setfill('0')<<setw(8)<<ipbc<<".";
cout<<setfill('0')<<setw(8)<<ipcc<<"."<<endl;
cout<<wo;
return 0;
}
