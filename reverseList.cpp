// https://leetcode.com/problems/reverse-linked-list/

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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }
        unordered_map<int, int> m;
        int index = 0;
        ListNode *cur = head;
        while (cur != nullptr) {
            m[index++] = cur->val;
            cur = cur->next;
        }
        index--;
        ListNode* reversed = new ListNode(m[index--]);
        ListNode* cur2 = reversed;
        while (index >= 0) {
            ListNode* newNode = new ListNode(m[index--]);
            cur2->next = newNode;
            cur2 = cur2->next;
        }
        return reversed;
    }
};