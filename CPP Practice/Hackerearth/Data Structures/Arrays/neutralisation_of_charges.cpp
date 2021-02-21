#include<bits/stdc++.h>
using namespace std;

int main() {
	int N;
    cin>>N;
    string charges;
    cin>>charges;
    string::iterator it=charges.begin()+1;
    while(it!=charges.end()) {
        if(it!=charges.begin() && *it==*(it-1)) {
            charges.erase(it-1,it+1);
            it--;
        }
        else it++;
    }
    cout<<charges.size()<<endl<<charges;
}