/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

ListNode* swapNodes(ListNode* head, int k) {
    vector<int> arr;
    ListNode *last;
    while(head) {
        arr.push_back(head->val);
        last=head;
        head=head->next;
        delete(last);
    }
    swap(arr[k-1],arr[arr.size()-k]);
    head=new ListNode(arr[0]);
    last=head;
    for(int i=1;i<arr.size();i++) {
        last->next = new ListNode(arr[i]);
        last=last->next;
    }
    return head;

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