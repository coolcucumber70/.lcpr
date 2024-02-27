/*
 * @lc app=leetcode.cn id=5 lang=cpp
 * @lcpr version=30117
 *
 * [5] 最长回文子串
 */

// @lcpr-template-start
using namespace std;
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
// @lcpr-template-end
// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) {
            return "";
        }

        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));

        int maxLength = 1;
        int startIndex = 0;

        // 单个字符都是回文
        for (int i = 0; i < n; i++) {
            dp[i][i] = true;
        }

        // 两个相邻字符相同的是回文
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                dp[i][i + 1] = true;
                maxLength = 2;
                startIndex = i;
            }
        }

        // 长度大于2的回文子串
        for (int len = 3; len <= n; len++) {
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1;
                if (s[i] == s[j] && dp[i + 1][j - 1]) {
                    dp[i][j] = true;
                    if (len > maxLength) {
                        maxLength = len;
                        startIndex = i;
                    }
                }
            }
        }

        return s.substr(startIndex, maxLength);
    }
};
// @lc code=end

/*
// @lcpr case=start
// "babad"\n
// @lcpr case=end

// @lcpr case=start
// "cbbd"\n
// @lcpr case=end

 */
