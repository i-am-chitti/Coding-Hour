#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        vector<ListNode *> nodePointers;
        vector<ListNode *>::iterator it;
        while(head) {
            it = find(nodePointers.begin(), nodePointers.end(), head);
            if(it != nodePointers.end()) {
                return head;
            }
            nodePointers.push_back(head);
            head = head->next;
        }
        return NULL;
    }
};

int main() {
    
}