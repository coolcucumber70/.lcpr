/*
 * @lc app=leetcode.cn id=6 lang=cpp
 * @lcpr version=30117
 *
 * [6] Z 字形变换
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
class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
            return s;
        vector<string> v(numRows, string());
        int size = 2 * numRows - 2;
        for (int i = 0; i < s.size(); i++)
        {
            int row = i % size;
            if (row < numRows)
            {
                v[row].push_back(s[i]);
            }
            else
            {
                v[size - row].push_back(s[i]);
            }
        }
        string res;
        for (auto x : v)
        {
            res.append(x);
        }
        return res;
    }
};
// @lc code=end

/*
// @lcpr case=start
// "PAYPALISHIRING"\n3\n
// @lcpr case=end

// @lcpr case=start
// "PAYPALISHIRING"\n4\n
// @lcpr case=end

// @lcpr case=start
// "A"\n1\n
// @lcpr case=end

 */
