#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> getSolution(int n)
{
    vector<bool> prime(n + 1, 1);
 
    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p] == true) 
        {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    prime[0]=0;
    prime[1]=0;
    
    vector<int> res(n+1,0);
    for(int i=5;i<n;i++) {
        if(!prime[i]) res[i]=res[i-1];
        else {
            if(prime[i-2]) res[i]=res[i-1]+1;
            else res[i]=res[i-1];
        }
    }
    return res;
}

int main() {
    ll T;
    cin>>T;
    vector<int> arr = getSolution(1000009);
    while(T--) {
        ll N;
        cin>>N;
        cout<<arr[N]<<endl;
    }
}