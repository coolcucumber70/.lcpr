// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=112 lang=cpp
 * @lcpr version=30117
 *
 * [112] 路径总和
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
    bool found = false;
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        travel(root, targetSum);
        return found;
    }
    void travel(TreeNode *root, int target)
    {
        if (root == nullptr || found)
        {
            return;
        }
        if (target == root->val && (!root->left && !root->right))
        {
            found = true;
            return;
        }
        travel(root->left, target - root->val);
        travel(root->right, target - root->val);
    }
};
// @lc code=end

/*
// @lcpr case=start
// [5,4,8,11,null,13,4,7,2,null,null,null,1]\n22\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3]\n5\n
// @lcpr case=end

// @lcpr case=start
// []\n0\n
// @lcpr case=end

 */
