#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 
double findDistance(double x1,double y1, double x2,double y2) {
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

void solve(){
    int R;
    cin>>R;
    double xC,yC,xH,yH,xS,yS;
    cin>>xC>>yC>>xH>>yH>>xS>>yS;
    double a = findDistance(xC,yC,xH,yH);
    double b = findDistance(xC,yC,xS,yS);
    double c = findDistance(xS,yS,xH,yH);
    if(a<=R && b<=R) cout<<"yes";
    else if(a<=R && c<=R) cout<<"yes";
    else if(b<=R && c<=R) cout<<"yes";
    else cout<<"no";
    cout<<endl;
}
 

int main()
{
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}