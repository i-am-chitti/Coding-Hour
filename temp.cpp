#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {
    ll t;
    cin>>t;
    while(t--) {
        double r, b;
        cin>>r>>b;
        double ans;
        if(r==0) ans=1.000000;
        else {
            double sum=(double)(r/(r+b));
            double last=1.0;
            while(b>=2) {
                last*=(double)(b/(r+b));
                b--;
                last*=(double)(b/(r+b));
                b--;
                double dum=(double)last;
                dum*=(double)(r/(r+b));
                sum+=(double)dum;
            }
            ans=(double)sum;
        }
        printf("%.6f\n", ans);
    }
}