// https://leetcode.com/problems/valid-parentheses/

#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        deque<char> open;
        unordered_map<char, char> m = {
            {')', '('},
            {']', '['},
            {'}', '{'},
        };
        for (char c : s) {
            if (!m.count(c))
                open.push_back(c);
            else {
                if (open.empty() || open.back() != m[c])
                    return false;
                open.pop_back();
            }
        }
        return open.empty();
    }
};