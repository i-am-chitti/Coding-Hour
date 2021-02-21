#include<bits/stdc++.h>
#define ll long long
using namespace std;

template <typename T>
void swap(T *a, T *b) {
    T t=*a;
    *a=*b;
    *b=t;
}

void sort(vector<ll> &fanQuo, vector<string> &fanName) {
    for(int i=0;i<fanQuo.size()-1;i++) {
        for(int j=0;j<fanQuo.size()-i-1;j++) {
            if((fanQuo[j]<fanQuo[j+1]) || (fanQuo[j]==fanQuo[j+1] && fanName[j]>fanName[j+1])) {
                swap<ll>(&fanQuo[j],&fanQuo[j+1]);
                swap<string>(&fanName[j],&fanName[j+1]);
            }
        }
    }
}

void sortOnName(vector<ll> &fanQuo, vector<string> &fanName, int l, int r) {
    for(int i=l;i<r;i++) {
        for(int j=l;j<r-i;j++) {
            if(fanName[j].compare(fanName[j+1])) {
                swap<string>(&fanName[j],&fanName[j+1]);
                swap<ll>(&fanQuo[j],&fanQuo[j+1]);
            }
        }
    }
}

void sortDuplicates(vector<ll> &fanQuo, vector<string> &fanName) {
    int l,r;
    for(int i=0;i<fanQuo.size()-1;) {
        if(fanQuo[i]==fanQuo[i+1]) {
            l=i;
            while(i<fanQuo.size()-1 && fanQuo[i]==fanQuo[i+1]) i++;
            sortOnName(fanQuo, fanName, l,i);
        }
        i++;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
	int N,T;
    cin>>N>>T;
    vector<ll> fanQuo(N,0);
    vector<string> fanName(N,"");
    for(int i=0;i<N;i++) {
        cin>>fanName[i]>>fanQuo[i];
    }
    //sortOnQuotient(fanQuo,fanName);
    //sortDuplicates(fanQuo, fanName);
    sort(fanQuo,fanName);

    for(int i=0;i<T;i++) cout<<i+1<<"  "<<fanName[i]<<endl;
    
}