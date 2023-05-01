#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numset;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            int other = numset.count(diff);
            if (numset.count(diff)) {
                vector<int> ret{i, numset[diff]};
                return ret;
            }
            else {
                numset[nums[i]] = i;
            }
        }
        return nums;
    }
};
