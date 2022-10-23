// https://leetcode.com/problems/sum-of-two-integers/
class Solution {
public:
    int getSum(int a, int b) {
        while (b) {
            unsigned int carry = a & b;
            a ^= b;
            b = carry << 1;
        }
        return a;
    }
};