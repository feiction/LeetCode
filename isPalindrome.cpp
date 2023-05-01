#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int beg = 0;
        int end = s.size() - 1;

        while (beg < end) {
            while (!isalnum(s[beg]) && beg < end) {
                beg++;
            }

            while (!isalnum(s[end]) && beg < end) {
                end--;
            }

            if (tolower(s[beg]) != tolower(s[end]))
                return false;
            
            beg++;
            end--;
        }
        return true;
    }
};

int main()
{
    Solution a = Solution();
    if (a.isPalindrome(";.")) {
        cout << "palindrome";
    }
    else {
        cout << "gg";
    }
    return 0;
}
