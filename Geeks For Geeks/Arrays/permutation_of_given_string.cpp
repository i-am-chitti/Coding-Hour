#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

 
void permute(string str, int l, int r,vector<string> &arr) {
    if(l==r) arr.push_back(str);
    else {
        for(int i=l;i<=r;i++) {
            swap(str[l],str[i]);
            permute(str,l+1,r,arr);
            swap(str[l],str[i]);
        }
    }
}

void solve(){
    int N;
    cin>>N;
    vector<string> arr;
    while(N--) {
        string str;
        cin>>str;
        permute(str,0,str.length()-1,arr);
    }
    sort(arr.begin(),arr.end());
    string res="";
    for(int i=0;i<arr.size();i++) {
        res+=arr[i]+" ";
    }
    cout<<res;
}
 

int main()
{
        solve();
    return 0;
}