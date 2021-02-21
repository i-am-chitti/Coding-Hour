#include<bits/stdc++.h>
using namespace std;

int main() {
	double D,Oc,Of,Od,Cs,Cb,Cm,Cd;
    cin>>D>>Oc>>Of>>Od>>Cs>>Cb>>Cm>>Cd;
    double onlineCost=Oc;
    if(D>Of) onlineCost+=Od*(D-Of);
    double offlineCost = Cb+(Cm*floor(D/Cs))+(Cd*D);
    if(onlineCost<=offlineCost) cout<<"Online Taxi";
    else cout<<"Classic Taxi";
}