#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 
int calculatePageFault(int arr[], int N, int capacity) {
    unordered_set<int> st;
    unordered_map<int,int> indexes;
    int nPageFaults=0;
    for(int i=0;i<N;i++) {
        if(st.size()<capacity) {
            if(st.find(arr[i])==st.end()) {
                st.insert(arr[i]);
                nPageFaults++;
            }
            indexes[arr[i]]=i;
        }
        else {
            if(st.find(arr[i])==st.end()) {
                int replaceIndex=INT_MAX,val;
                for(auto it=st.begin();it!=st.end();it++) {
                    if(indexes[*it]<replaceIndex) {
                        replaceIndex=indexes[*it];
                        val=*it;
                    }
                }
                st.erase(val);
                st.insert(arr[i]);
                nPageFaults++;
            }
            indexes[arr[i]]=i;
        }
    }
    return nPageFaults;
} 

void solve(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++) cin>>arr[i];
    int capacity;
    cin>>capacity;
    cout<<calculatePageFault(arr,N,capacity)<<endl;
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