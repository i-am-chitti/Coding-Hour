/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists1(ListNode* l1, ListNode* l2) {
        ListNode *newHead = new ListNode(0);
        ListNode *curr = newHead;
        while(l1 && l2) {
            if(l1->val <= l2->val) {
                curr->next = l1;
                l1= l1->next;
            }
            else {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
            curr->next = 0;
        }
        while(l1) {
            curr->next = l1;
            l1=l1->next;
            curr = curr->next;
            curr->next = 0;
        }
        while(l2) {
            curr->next = l2;
            l2=l2->next;
            curr = curr->next;
            curr->next = 0;
        }
        return newHead->next;
    }

    ListNode* mergeTwoLists2(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        else if(!l2) return l1;
        ListNode *res=0;
        if(l1->val <= l2->val) {
            res = l1;
            res->next = mergeTwoLists2(l1->next, l2);
        }
    }

};