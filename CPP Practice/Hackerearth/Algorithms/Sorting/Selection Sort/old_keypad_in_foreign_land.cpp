#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,K;
    cin>>N;
    vector<int> freq(N,0);
    for(int i=0;i<N;i++) cin>>freq[i];
    sort(freq.begin(),freq.end(), greater<int>());
    cin>>K;
    vector<int> keySize(K,0);
    long long totalKeys=0;
    for(int i=0;i<K;i++) {
        cin>>keySize[i];
        totalKeys+=keySize[i];
    }
    if(totalKeys<N) {
        cout<<"-1";
        return 0;
    }
    int keyStrokes=0, nthKey=1;
    sort(keySize.begin(),keySize.end());
    for(int i=0;i<N;i++) {
        for(int j=0;j<K && i<N;j++) {
            if(keySize[j]>0) {
                keyStrokes+=freq[i]*nthKey;
                i++;
                keySize[j]--;
            }
        }
        nthKey++;
        i--;
    }
    cout<<keyStrokes;

}