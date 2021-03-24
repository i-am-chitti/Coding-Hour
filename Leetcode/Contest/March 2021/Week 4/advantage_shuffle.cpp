/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

vector<int> advantageCount(vector<int>& A, vector<int>& B) {
    multiset<int> st;
    multimap<int,int> mp;
    int nA=A.size(),nB=B.size();
    vector<int> res(nA,-1);
    for(int i=0;i<nA;i++) st.insert(A[i]);
    for(int i=0;i<nB;i++) mp.insert(make_pair(B[i],i));
    for(auto it=mp.begin();it!=mp.end();it++) {
        auto lowerItr=st.lower_bound(it->first);
        while(lowerItr!=st.end() && *lowerItr==it->first) lowerItr++;
        if(lowerItr==st.end()) continue;
        else {
            res[it->second]=*lowerItr;
            st.erase(lowerItr);
        }
    }
    for(int i=0;i<nA;i++) {
        if(res[i]==-1) {
            res[i]=*st.begin();
            st.erase(st.begin());
        }
    }
    for(int i=0;i<nA;i++) cout<<res[i]<<" ";
}

void solve(){
    vector<int> A= {12,24,8,32};
    vector<int> B= {13,25,32,11};
    vector<int> res = advantageCount(A,B);
}
 

int main()
{
    solve();
    return 0;
}