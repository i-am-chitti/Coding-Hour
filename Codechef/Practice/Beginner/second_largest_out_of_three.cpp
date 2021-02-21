#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

int main()
{
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        int A,B,C;
        cin>>A>>B>>C;
        if(A>B) {
            if(B>C) cout<<B;
            else {
                if(A>C) cout<<C;
                else cout<<A;
            }
        }
        else {
            if(A>C) cout<<A;
            else {
                if(C>B) cout<<B;
                else cout<<C;   
            }
        }
        cout<<endl;
    }
    return 0;
}