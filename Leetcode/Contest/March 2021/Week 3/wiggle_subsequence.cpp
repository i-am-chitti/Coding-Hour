/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

int getSign(int N) {
    if(N<0) return -1;
    else if(N>0) return 1;
    else return 0;
}

int wiggleMaxLength(vector<int>& nums) {
    int N=nums.size();
    if(N<2) return 0;
    else if(N==2) return 1;
    int lastSign=getSign(nums[0]-nums[1]),currSign;
    int maxLength=1;
    for(int i=1;i<nums.size()-1;i++) {
        currSign = getSign(nums[i]-nums[i+1]);
        if(currSign!=0 && currSign!=lastSign) {
            maxLength++;
            lastSign=currSign;
        }
    }
    return maxLength;
} 

void solve(){
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