#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    vector<int> arr{0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0};
    int count=0,N=arr.size(),B=4,i=0;
    int noLights=0;
    while(i<N) {
        int lightPos=-1;
        for(int j=max(0,i-B+1);j<min(N,i+B);j++)
            if(arr[j]) lightPos=j;
        if(lightPos==-1) {
            cout<<"-1\n";
            return;
        }
        else {
            i+=lightPos+1;
            count++;
        }
    }
    cout<<count<<endl;

}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}