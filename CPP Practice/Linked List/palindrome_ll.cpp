#include<bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head) return false;
        ListNode *slow = head, *fast = head->next;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* mid = this->reverseLL(slow->next);
        ListNode *curr1=head, *curr2=mid;
        while(curr2) {
            if(curr1->val != curr2->val) return false;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        return true;

    }

    ListNode* reverseLL(ListNode *head) {
        if(!head || !head->next) return head;
        ListNode *prev=0, *curr=head, *next=0;
        while(curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr=next;
        }
        return prev;
    }
};

int main() {

}