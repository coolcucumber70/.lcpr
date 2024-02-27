/*
 * @lc app=leetcode.cn id=58 lang=cpp
 * @lcpr version=30117
 *
 * [58] 最后一个单词的长度
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
    int lengthOfLastWord(string s) {
        int i;
        for ( i = s.size()-1; i >= 0; i--)
        {
            if(s[i]!=' ')break;
        }
        std::size_t index = i;
        std::size_t found=s.rfind(' ',i);
        if (found!=std::string::npos)
        {
            return i-found;
        }
        else{
            return i+1;
        }
        
        

    }
};
// @lc code=end



/*
// @lcpr case=start
// "Hello World"\n
// @lcpr case=end

// @lcpr case=start
// "   fly me   to   the moon  "\n
// @lcpr case=end

// @lcpr case=start
// "luffy is still joyboy"\n
// @lcpr case=end

 */

