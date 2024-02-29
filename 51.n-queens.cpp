/*
 * @lc app=leetcode.cn id=51 lang=cpp
 * @lcpr version=30117
 *
 * [51] N 皇后
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
    vector<vector<string>> solveNQueens(int n) {
        vector<string>ans(n,std:: string(n,'.'));
        vector<vector<string>>res;
        backtrack(res,ans,n,0);
        std::cout<<res.size();
        return res;
    }
    bool success(int q_i,int q_j,vector<string>&ans){
        int j1=q_j;
        int j2=q_j;
        for(int i=q_i-1;i>=0;i--){
            if (ans[i][q_j]=='Q'||(--j1>=0&&ans[i][j1]=='Q')||(++j2<ans.size()&&ans[i][j2]=='Q'))
            {   
                return false;

            }
        }
        return true;

    }
    void backtrack(vector<vector<string>>&res,vector<string>&ans,int n,int level){
        if(level==n){
            res.push_back(ans);
            return;
        }
        for (int j = 0; j < ans.size(); j++)
        {
            if (success(level,j,ans))
            {
                ans[level][j]='Q';
                backtrack(res,ans,n,level+1);
                ans[level][j]='.';
            }
        }
    }
};
// @lc code=end



/*
// @lcpr case=start
// 4\n
// @lcpr case=end

// @lcpr case=start
// 8\n
// @lcpr case=end

 */

