#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> arr) {
    int nColors=0,N=arr.size();
    for(int i=0;i<N;i++) {
        if(arr[i]!=0) {
            nColors++;
            int temp=arr[i],j=i+1;
            while(j<N) {
                if(arr[j]!=temp) {
                    arr[j]=0;
                    temp=arr[j];
                }
                j++;
            }
        }
    }
    return nColors;
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        int N,temp,maximum=0;
        cin>>N;
        map<int,int> map;
        for(int i=0;i<N;i++) {
            cin>>temp;
            map[temp]++;
            maximum=max(map[temp],maximum);
        }
        //cout<<solve(arr)<<endl;
        cout<<"asdf"<<maximum<<endl;
    }
}