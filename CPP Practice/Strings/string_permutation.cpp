#include<bits/stdc++.h>
using namespace std;

int c=0;
void permute(string &arr, int *state, string &res) {
    if(res.size() == arr.size()) {
        c++;
    }
    for(int i=0;i<arr.size();i++) {
        if(state[i]==0) {
            res.push_back(arr[i]);
            state[i]=1;
            permute(arr, state, res);
            state[i]=0;
            res.pop_back();
        }
    }    
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permute2(string arr, int l, int h) {
    if(l==h) cout<<arr<<endl;
    for(int i=l;i<=h;i++) {
        swap(arr[i], arr[l]);
        permute2(arr, l+1, h);
        swap(arr[i], arr[l]);
    }
}

int main() {
    string arr = "ABCD", res;
    int state[arr.size()];
    memset(state, 0, arr.size()*sizeof(int));
    //permute2(arr, 0, arr.size()-1);
    permute(arr, state, res);
    cout<<c;
}