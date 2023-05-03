// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int low = prices[0];
            int profit = 0;
            for (int &price : prices) {
                if (price < low)
                    low = price;
                int tmp = price - low;
                if (tmp > profit)
                    profit = tmp;
            }
            return profit;
        }
};

int main()
{
    Solution a = Solution();
    vector<int> p{7, 1, 5, 3, 6, 4};
    cout << a.maxProfit(p);
    return 0;
}
