/*
Write a program to shuffle deck of cards, display the shuffled deck, sort it and display the sorted deck. 
The deck will be represented by an array of integers where the integer values correspond to a card. 
Sorting has to be done on the basis of suites,and their corresponding ranks. 
The priority to sort the suites is: HEARTS, SPADES, DIAMONDS, CLUBS.
*/

/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

vector<int> generateRandomIndexes(int N) {
    vector<int> randomIndexes;
    srand(time(0));
    for(int i=N-1;i>=0;i--) {
        randomIndexes.emplace_back(rand()%(i+1));
    }
    return randomIndexes;
} 

void solve(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    vector<int> randomIndexes = generateRandomIndexes(N);
    for(int i=N-1;i>=0;i--) {
        swap(arr[i],arr[randomIndexes[i]]);
    }
    for(int i=0;i<N;i++) cout<<arr[i]<<" ";
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