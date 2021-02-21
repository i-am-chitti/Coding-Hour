#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N;
    cin>>N;
    vector<int> vec(N);
    for(int i=0;i<N;i++) cin>>vec[i];
    int nestingDepth=0,nestingStart=0,x=0,j=0,depth=0;
    for(int i=0;i<N;i++) {
        if(vec[i]==1) {
            x++;
            if(x>nestingDepth) {
                nestingDepth=x;
                nestingStart=i+1;
            }
        }
        else x--;
    }
    int maxLength=0,maxStart=0;
    x=0;
    j=0;
    for(int i=0;i<N;i++) {
        if(vec[i]==1) x++;
        else {
            x--;
            if(x==0) {
                if(i-j+1>maxLength) {
                    maxLength=i-j+1;
                    maxStart=j+1;
                }
                j=i+1;
            }
        }
    }
    cout<<nestingDepth<<" "<<nestingStart<<" "<<maxLength<<" "<<maxStart;
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}