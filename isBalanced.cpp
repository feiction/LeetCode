// https://leetcode.com/problems/balanced-binary-tree/

#include <bits/stdc++.h> 

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfs(root).first;
    }
private:
    pair<bool, int> dfs(TreeNode* root) {
        if (root == NULL)
            return make_pair(true, 0);
        pair<bool, int> left = dfs(root->left);
        pair<bool, int> right = dfs(root->right);
        bool balanced = (left.first && right.first &&
                         abs(left.second - right.second) <= 1);
       return make_pair(balanced, 1 + max(left.second, right.second));
    }
};