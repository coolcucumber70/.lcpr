/*
 * @lc app=leetcode.cn id=66 lang=cpp
 * @lcpr version=30117
 *
 * [66] 加一
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
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        digits[n-1]+=1;
        for (int i = digits.size()-1; i >0; i--)
        {
            if (digits[i]==10)
            {
                digits[i]=0;
                digits[i-1]+=1;
            }
            else{
                return digits;
            }    
        }
        if (digits[0]==10)
        {   

            digits[0]=0;
            digits.insert(digits.begin(),1);
        }
        return digits;
        
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3]\n
// @lcpr case=end

// @lcpr case=start
// [4,3,2,1]\n
// @lcpr case=end

// @lcpr case=start
// [0]\n
// @lcpr case=end

 */

