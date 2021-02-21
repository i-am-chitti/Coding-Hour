#include<bits/stdc++.h>
using namespace std;

int main() {
	int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    int count=0;
    stack<int> stck;
    stck.push(arr[0]);
    for(int i=1;i<N;i++) {
        while(!stck.empty() && stck.top()<=arr[i]) stck.pop();
        if(!stck.empty() && arr[i]<stck.top()) {
            count++;
            //cout<<stck.top()<<" "<<arr[i]<<endl;
        }
        stck.push(arr[i]);
    }
    stack<int> stck2;
    stck2.push(arr[N-1]);
    for(int i=N-2;i>=0;i--) {
        while(!stck2.empty() && stck2.top()<=arr[i]) stck2.pop();
        if(!stck2.empty() && arr[i]<stck2.top()) {
            count++;
            //cout<<stck2.top()<<" "<<arr[i]<<endl;
        }
        stck2.push(arr[i]);
    }

    cout<<count;

}