// https://leetcode.com/problems/merge-two-sorted-lists/

#include <bits/stdc++.h> 

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL && list2 == NULL)
            return NULL;
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;
        
        ListNode *merged;                           // head of merged linked list
        ListNode *cur1 = list1, *cur2 = list2;      // pointers to param linked lists
        if (cur1->val > cur2->val) {
            merged = new ListNode(cur2->val);
            cur2 = cur2->next;
        }
        else {
            merged = new ListNode(cur1->val);
            cur1 = cur1->next;
        }
        ListNode* cur = merged;                     // pointer of merged linked list
        while (true) {
            if (cur1 == NULL) {                  // list1 doesnt have values anymore, add all list2 values
                while (cur2 != NULL) {
                    ListNode* newNode = new ListNode(cur2->val);
                    cur->next = newNode;
                    cur = cur->next;
                    cur2 = cur2->next;
                }
                break;
            }

            if (cur2 == NULL) {                  // list2 doesnt have values anymore, add all list1 values
                while (cur1 != NULL) {
                    ListNode* newNode = new ListNode(cur1->val);
                    cur->next = newNode;
                    cur = cur->next;
                    cur1 = cur1->next;
                }
                break;
            }

            if (cur1->val <= cur2->val) {
                ListNode* newNode = new ListNode(cur1->val);
                cur->next = newNode;
                cur = cur->next;
                cur1 = cur1->next;
            }

            else {
                ListNode* newNode = new ListNode(cur2->val);
                cur->next = newNode;
                cur = cur->next;
                cur2 = cur2->next;
            }
        }
        return merged;
    }
};
