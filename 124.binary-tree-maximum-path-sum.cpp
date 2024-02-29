/*
 * @lc app=leetcode.cn id=124 lang=cpp
 * @lcpr version=30117
 *
 * [124] 二叉树中的最大路径和
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int max_sum = INT_MIN;
    int maxPathSum(TreeNode *root)
    {
        travel(root);
        return max_sum;
    }
    int travel(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        int l_len = travel(root->left);
        int r_len = travel(root->right);
        int l_sum=max(l_len,0);
        int r_sum=max(r_len,0);
        max_sum = max(max_sum, r_sum + l_sum + root->val);
        return max(l_sum, r_sum) + root->val;
    }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,3]\n
// @lcpr case=end

// @lcpr case=start
// [-10,9,20,null,null,15,7]\n
// @lcpr case=end

 */
