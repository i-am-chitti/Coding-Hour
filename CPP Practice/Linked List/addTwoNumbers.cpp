#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        else if(!l2) return l1;
        ListNode *res = 0;
        int val = l1->val + l2->val;
        if(val > 9) {
            l1->next->val +=1;
            val -= 10;
        }
        res = new ListNode(val);
        res->next = addTwoNumbers(l1->next, l2->next);
        return res;
    }
    
    ListNode* addTwoNumbers2(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0);
        ListNode *res = head;
        int carry = 0;
        while(l1 && l2) {
            int val = l1->val + l2->val + carry;
            if(val>9) {
                val -= 10;
                carry = 1;
            }
            else carry = 0;
            res->next = new ListNode(val);
            res = res->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        ListNode *temp;
        if(l1) temp = l1;
        else temp = l2;
        while(temp) {
            int val = temp->val + carry;
            if(val > 9) {
                val -= 10;
                carry = 1;
            }
            else carry = 0;
            res->next = new ListNode(val);
            res = res->next;
            temp = temp->next;
        }
        if(carry == 1) {
            res->next = new ListNode(1);
        }
        return head->next;
    }
};