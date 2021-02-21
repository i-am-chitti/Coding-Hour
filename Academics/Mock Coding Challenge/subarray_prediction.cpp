#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    vector<int> arr{2,4,6,8,7,8,9,6,6,8,9,7};
    int N=arr.size();
    vector<int> aux;
    int len=1,count=0;
    for(int i=0;i<N-1;i++) {
        if(arr[i]>arr[i+1]) {
            aux.push_back(arr[i]);
            len++;
        }
        else {
            if(len>1) {
                aux.push_back(arr[i]);
                for(auto it=aux.begin();it!=aux.end();it++) cout<<*it<<" ";
                cout<<"\t";
                vector<int> aux2;
                int len2=1;
                for(int j=i+1;j<N-1;j++) {
                    if(arr[j]<arr[j+1] && arr[j]>aux[aux.size()-1]) {
                        aux2.push_back(arr[j]);
                        len2++;
                    }
                    else {
                        if(len2>1) {
                            aux2.push_back(arr[j]);
                            for(auto jt=aux2.begin();jt!=aux2.end();jt++) cout<<*jt<<" ";
                            cout<<endl;
                        }
                        aux2.clear();
                        len2=1;
                    }
                }
            }
            aux.clear();
            len=1;
        }
    }
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}