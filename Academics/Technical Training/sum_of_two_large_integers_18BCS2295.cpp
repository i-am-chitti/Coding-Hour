/*
	Author: Deepak kumar
	UID: 18BCS2295
	Path: academics/tech_training/
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

string findSum(string X, string Y) 
{
	    auto it=X.begin();
	    while(it!=X.end() && *it=='0') X.erase(it);
	    it=Y.begin();
	    while(it!=Y.end() && *it=='0') Y.erase(it);
	    // Your code goes here
	    int N1=X.length(),N2=Y.length();
	    if(N1==0 && N2==0) return "0";
	    string res;
	    int carry=0;
	    int i=N1-1,j=N2-1,temp;
	    while(i>=0 && j>=0) {
	        temp=carry+(X[i]-'0')+(Y[j]-'0');
	        if(temp>9) carry=1;
	        else carry=0;
	        temp%=10;
	        res.push_back(temp+'0');
	        i--;
	        j--;
	    }
	    while(i>=0) {
	        temp=carry+(X[i]-'0');
	        if(temp>9) carry=1;
	        else carry=0;
	        temp%=10;
	        res.push_back(temp+'0');
	        i--;
	    }
	    while(j>=0) {
	        temp=carry+(Y[j]-'0');
	        if(temp>9) carry=1;
	        else carry=0;
	        temp%=10;
	        res.push_back(temp+'0');
	        j--;
	    }
	    if(carry) res.push_back(carry+'0');
	    reverse(res.begin(),res.end());
	    return res;
} 

void solve(){
    string x,y;
    cin>>x>>y;
    cout<<findSum(x,y)<<endl;
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