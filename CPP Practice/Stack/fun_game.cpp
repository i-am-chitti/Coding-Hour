//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/fun-game-91510e9f/
#include<bits/stdc++.h>
using namespace std;

vector<int> funGame (vector<int> arr) {
   // Write your code here
   vector<int> res;
   int i=0,j=arr.size()-1;
   while(i<arr.size() && j>=0) {
       if(arr[i]<arr[j]) {
           res.push_back(2);
           i++;
       }
       else if(arr[i]>arr[j]) {
           res.push_back(1);
           j--;
       }
       else {
           res.push_back(0);
           i++;
           j--;
       }
   }
   return res;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i_arr=0; i_arr<n; i_arr++)
    {
    	cin >> arr[i_arr];
    }

    vector<int> out_;
    out_ = funGame(arr);
    cout << out_[0];
    for(int i_out_=1; i_out_<out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
}