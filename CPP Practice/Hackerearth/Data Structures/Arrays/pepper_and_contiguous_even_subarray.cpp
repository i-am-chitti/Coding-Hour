#include<bits/stdc++.h>
using namespace std;

int main() {
    int T,N,max,curr;
    cin>>T;
    while(T--) {
        cin>>N;
        vector<int> arr(N,0);
        for(int i=0;i<N;i++) cin>>arr[i];
        max=0;
        curr=0;
        for(int i=0;i<N;i++) {
            curr=0;
            if(arr[i]%2==0) {
                int j=i;
                while(j<N && arr[j]%2==0) { j++; curr++; }
                if(curr>max) max=curr;
                i=j;
            }
        }
        if(max==0) cout<<"-1"<<endl;
        else cout<<max<<endl;
    }
}