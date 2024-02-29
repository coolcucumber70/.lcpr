// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=111 lang=cpp
 * @lcpr version=30117
 *
 * [111] 二叉树的最小深度
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
class Solution {
public:
    int depth=0;
    int mindepth=INT_MAX;
    int minDepth(TreeNode* root) {
        if(!root)return 0;
        travel(root);
        return mindepth;

    }
    void travel(TreeNode* root){
        if(!root)return ;
        depth++;
        if (!root->left&&!root->right)
        {
            mindepth=min(mindepth,depth);
        }
        if (depth>mindepth)
        {
            depth--;
            return;
        }
        travel(root->left);
        travel(root->right);
        depth--;
        
        

    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,9,20,null,null,15,7]\n
// @lcpr case=end

// @lcpr case=start
// [2,null,3,null,4,null,5,null,6]\n
// @lcpr case=end

 */

