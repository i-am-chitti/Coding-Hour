#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 
class Coordinate {
    public:
    ll x,y;
};

bool compareX(Coordinate A, Coordinate B) {
    if(A.x<B.x) return 1;
    else return 0;
}

bool compareY(Coordinate A, Coordinate B) {
    if(A.y<B.y) return 1;
    else return 0;
}

void solve(){
    int N;
    cin>>N;
    vector<Coordinate> coorindates(N);
    ll x=0,y=0,maxHeighth=0,maxLength=0;
    for(int i=0;i<N;i++) {
        cin>>coorindates[i].x>>coorindates[i].y;
    }
    sort(coorindates.begin(),coorindates.end(),compareX);
    for(int i=0;i<N-1;i++) {
        ll length=coorindates[i+1].x-coorindates[i].x;
        maxLength=max(length,maxLength);
    }
    sort(coorindates.begin(),coorindates.end(),compareY);
    for(int i=0;i<N-1;i++) {
        ll height=coorindates[i+1].y-coorindates[i].y;
        maxHeighth=max(height,maxHeighth);
    }
    ll maxArea=0;
    if(maxLength>maxHeighth*200) maxArea=maxLength*500;
    else maxArea=maxHeighth*100000;
    cout<<maxArea;
}
 

int main()
{
    fast_cin();
    solve();
    return 0;
}