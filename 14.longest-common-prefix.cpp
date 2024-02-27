/*
 * @lc app=leetcode.cn id=14 lang=cpp
 * @lcpr version=30117
 *
 * [14] 最长公共前缀
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
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs[0].size();
        for (int i = 0; i < n; i++)
        {
            for(auto &str:strs){
                if(i>str.size()-1||str[i]!=strs[0][i]){
                    return str.substr(0,i);
                }
            }
        }
        return strs[0];       
    }
};
// @lc code=end



/*
// @lcpr case=start
// ["flower","flow","flight"]\n
// @lcpr case=end

// @lcpr case=start
// ["dog","racecar","car"]\n
// @lcpr case=end

 */

