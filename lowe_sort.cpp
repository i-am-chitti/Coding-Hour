/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

void merge(vector<pair<ll,ll>> &arr, ll l, ll m, ll r) {
    ll n1=m-l+1;
    ll n2=r-m;
    vector<pair<ll,ll>> l1, l2;
    for(ll i=0;i<n1;i++) l1.push_back(arr[l+i]);
    for(ll j=0;j<n2;j++) l2.push_back(arr[m+j+1]);

    ll i=0,j=0,k=l;
    while(i<n1 && j<n2) {
        ll A=l1[i].second, B=l2[j].second, Ai=l1[i].first, Bi=l2[j].first;
        if(A%2==0 && B%2!=0) {
            arr[k]=l1[i];
            i++;
        }
        else if(A%2!=0 && B%2==0) {
            arr[k]=l2[j];
            j++;
        }
        else if(A%2==0 && B%2==0) {
            // both even
            if(A%5==0 && B%5==0) {
                // both divisible by 5
                if(A>=B) {
                    arr[k]=l1[i];
                    i++;
                }
                else {
                    arr[k]=l2[j];
                    j++;
                }
            }
            else if(A%5==0 && B%5!=0) {
                arr[k]=l1[i];
                i++;
            }
            else if(A%5!=0 && B%5==0) {
                arr[k]=l2[j];
                j++;
            }
            else {
                // none even number is divisible by 5
                if(Ai>Bi) {
                    arr[k]=l1[i];
                    i++;
                }
                else {
                    arr[k]=l2[j];
                    j++;
                }
            }
        }
        else {
            // both are odd
            if(Ai<Bi) {
                arr[k]=l1[i];
                i++;
            }
            else {
                arr[k]=l2[j];
                j++;
            }
        }
        k++;
    }

    while(i<n1) {
        arr[k]=l1[i];
        i++;
        k++;
    }
    while(j<n2) {
        arr[k]=l2[j];
        j++;
        k++;
    }
}

void mergeSort(vector<pair<ll,ll>> &arr, ll l, ll r) {
    if(l>=r) return;
    ll m=l+(r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}


void solve(){
    ll N;
    cin>>N;
    vector<pair<ll,ll>> arr;
    ll temp;
    for(ll i=0;i<N;i++) {
        cin>>temp;
        arr.push_back(make_pair(i,temp));
    }

    mergeSort(arr,0,N-1);

    for(ll i=0;i<N;i++) {
        cout<<arr[i].second<<" ";
    }
    cout<<"\n";
    
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