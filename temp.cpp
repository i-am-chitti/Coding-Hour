#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	return b==0?a:gcd(b,a%b);
}

void solve() {
	int N;
	cin>>N;
	vector<int> arr(N);
	for(int i=0;i<N;i++) {
		cin>>arr[i];
	}

	int Q;
	cin>>Q;
	while(Q--) {
		int l,r;
		cin>>l>>r;
		l--,r--;

		int curr=arr[l];
		l++;
		int res=0;
		vector<int> aux{curr};
		while(l<=r) {
		    if(!aux.empty()) {
    			for(int i=0;i<aux.size();i++) {
    			    int temp=gcd(aux[i],arr[l]);
    				if(temp != 1) {
    					res++;
    					aux.clear();
    					break;
    				}
    			}
		    }
			aux.push_back(arr[l]);
			l++;
		}
		if(aux.size()>0) res++;
		cout<<"\n"<<res<<"\n";
	}

}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) {
		solve();
	}

	return 0;
}
