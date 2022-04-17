/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

ll I,X,A,B,C,D,P,Q,R,S,M,T;

ll getRoot(double a, double b, double c) {
    double d = sqrt((b*b)+(4*a*c));
    double r1 = (-b+d)/(2*a);
    double r2 = (-b-d)/(2*a);
    //cout<<r1<<" "<<r2<<"\n";
    if(r1<0 && r2<0) return 0;
    return max(r1,r2);
}

ll getMaxCount(ll a, ll d, ll s) {
    ll count=0;
    if(s<a) return 0;
    //cout<<"a = "<<a<<" d = "<<d<<" s = "<<s<<" count = ";
    while(s>=a) {
        s-=a;
        count++;
        a+=d;
    }
    //cout<<count<<"\n";
    return count;
}

ll getCost(ll a, ll d, ll n) {
    return (n*((2*a)+((n-1)*d)))/2;
}

ll getnthTerm(ll a, ll d, ll n) {
    return a+((n-1)*d);
}

ll helper2() {
    ll n=1;
    ll ans=0;


    while(true) {
        
        ll covaxinCost = getCost(A,B,n); 
        ll covishieldCost = getCost(C,D,n);

        if(covaxinCost+covishieldCost>X) break;

        ll nextCovaxin = getnthTerm(A,B,n+1);
        ll nextCovishield = getnthTerm(C,D,n+1);

        //ll nCovaxin = getMaxCount(nextCovishield,D,X-covaxinCost-covishieldCost);
        ll nCovaxin = getRoot(B,((2*nextCovaxin)-B), 2*(X-covishieldCost-covaxinCost));
        ll nCovishield = getRoot(D,((2*nextCovishield)-D), 2*(X-covishieldCost-covaxinCost));
        //ll nCovishield = getMaxCount(nextCovaxin,B,X-covishieldCost-covaxinCost);
        ans = max(ans, (2*n)+(max(nCovaxin, nCovishield)));
        n++;
    }
    return ans;
}

ll helper() {
    ll nCovaxin = getRoot(B,(2*A)-B,2*X);
    ll nCovishield = getRoot(D,(2*C)-D,2*X);
    //ll nboth = 2*getRoot(B+D,(2*(A+C))-B-D,2*X);
    //cout<<"Total = "<<nCovaxin<<" "<<nCovishield<<" "<<nBoth<<"\n";
    //return max(nCovaxin,max(nCovishield,nBoth));
    //return nBoth;

    // ll nCovaxin = getMaxCount(A,B,X);
    ll nextCovaxin = getnthTerm(A,B,nCovaxin+1);

    // ll nCovishield = getMaxCount(C,D,X);
    ll nextCovishield = getnthTerm(C,D,nCovishield+1);
    
    // ll nboth = 2*getMaxCount(A+C,B+D,X);

    ll covaxinCost = getCost(A,B,nCovaxin);
    ll covishieldCost = getCost(C,D,nCovishield);
    //ll bothCost = getCost(A+C, B+D, nboth/2);

    //nCovaxin+=getMaxCount(nextCovishield,D,X-covaxinCost);
    nCovaxin+=getRoot(D,((2*nextCovishield)-D),X-covaxinCost);
    //nCovishield+=getMaxCount(nextCovaxin,B,X-covishieldCost);
    nCovishield+=getRoot(B,((2*nextCovaxin)-B),X-covishieldCost);
    
    //nextCovishield = getnthTerm(C,D,(nboth/2)+1);
    //nextCovaxin = getnthTerm(A,B,(nboth/2)+1);

    //ll nboth1 = getMaxCount(nextCovishield,D,X-bothCost);
    //ll nboth2 = getMaxCount(nextCovaxin,B,X-bothCost);
    
    //nboth+=max(nboth1,nboth2);

    ll nboth = 0;

    if(B==1 || D==1) {
        nboth = 2*getRoot(B+D,(2*(A+C))-B-D,2*X);
        ll bothCost = getCost(A+C, B+D, nboth/2);
        nextCovishield = getnthTerm(C,D,(nboth/2)+1);
        nextCovaxin = getnthTerm(A,B,(nboth/2)+1);
        ll nboth1 = getRoot(D, (2*nextCovishield)-D,X-bothCost);
        ll nboth2 = getRoot(B, (2*nextCovaxin)-B,X-bothCost);
        nboth+=max(nboth1,nboth2);
    }
    else nboth=helper2();

    return max(nCovaxin,max(nCovishield,nboth));
}


void solve(){

    cin>>I;
    cin>>X>>A>>B>>C>>D;
    cin>>P>>Q>>R>>S>>T>>M;

    for(ll i=1;i<=I;i++) {
        //cout<<A<<" "<<B<<" "<<C<<" "<<D<<"\n";
        ll ans = helper();
        cout<<ans<<"\n";

        A = (A+(ans*T))%M+P;
        B = (B+(ans*T))%M+Q;
        C = (C+(ans*T))%M+R;
        D = (D+(ans*T))%M+S;

    }

}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}