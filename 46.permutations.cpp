// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=46 lang=cpp
 * @lcpr version=30117
 *
 * [46] 全排列
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
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> res;
        vector<int> ans;
        vector<bool> visit(nums.size(), false);

        backtrack(nums, visit, ans, res);
        return res;
    }

    void backtrack(vector<int> &nums, vector<bool> &visit, vector<int> &ans, vector<vector<int>> &res)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (ans.size() == nums.size())
            {
                res.push_back(ans);
                return;
            }

            if (!visit[i])
            {
                visit[i] = true;
                ans.push_back(nums[i]);
                backtrack(nums, visit, ans, res);
                visit[i] = false;
                ans.pop_back();
            }
        }
    }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,3]\n
// @lcpr case=end

// @lcpr case=start
// [0,1]\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

 */
