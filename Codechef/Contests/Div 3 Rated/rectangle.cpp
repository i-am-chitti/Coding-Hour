#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

bool getMaxSub(vector<vector<bool>> &arr,int N, int M, int maxOnes) {
    vector<vector<int>> aux(N,vector<int>(M));
    for(int i=0;i<N;i++) aux[i][0]=arr[i][0];
    for(int j=0;j<M;j++) aux[0][j]=arr[0][j];
    for(int i=1;i<N;i++) {
        for(int j=1;j<M;j++) {
            if(arr[i][j] == 1)  
                aux[i][j] = min(aux[i][j-1],min( aux[i-1][j],  
                                aux[i-1][j-1])) + 1;  
            else
                aux[i][j] = 0;  
        }
    }
    int maxSize=aux[0][0], maxI=0, maxJ=0;
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            if(maxSize<aux[i][j]) {
                maxSize=aux[i][j];
                maxI=i;
                maxJ=j;
            }
        }
    }
    maxSize = (maxI-maxSize)*(maxJ-maxSize);
    cout<<maxI<<" "<<maxJ<<" "<<maxOnes<<"\n";
    if(maxOnes==maxSize) return 1;
    else return 0;
}

void solve(){
    int N,M;
    cin>>N>>M;
    char c;
    int maxOnes=0;
    vector<vector<bool>> arr(N,vector<bool>(M));
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            cin>>c;
            if(c=='0') arr[i][j]=0;
            else {
                maxOnes++;
                arr[i][j]=1;
            }
        }
    }
    bool res = getMaxSub(arr,N,M,maxOnes);
    if(res) cout<<"YES";
    else cout<<"NO";
    cout<<"\n";

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