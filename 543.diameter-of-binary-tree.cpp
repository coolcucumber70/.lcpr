/*
 * @lc app=leetcode.cn id=543 lang=cpp
 * @lcpr version=30117
 *
 * [543] 二叉树的直径
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
    int max_length = 0;
    int diameterOfBinaryTree(TreeNode *root){
        int tmp=diameterOfBinaryTree1(root);
        return max_length-1;
    };
    int diameterOfBinaryTree1(TreeNode *root)
    {
        if (root==nullptr)
        {
            return 0;
        }
        
        int l_len= diameterOfBinaryTree1( root->left);
        int r_len=diameterOfBinaryTree1(root->right);
        max_length=max(max_length,r_len+l_len+1);
        return max(l_len,r_len)+1;
    }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,3,4,5]\n
// @lcpr case=end

// @lcpr case=start
// [1,2]\n
// @lcpr case=end

 */
