/*
 * @lc app=leetcode.cn id=13 lang=cpp
 * @lcpr version=30117
 *
 * [13] 罗马数字转整数
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
    int romanToInt(string s) {
        unordered_map<char,int>map;
        map['I']=1;
        map['V']=5;
        map['X']=10;
        map['L']=50;
        map['C']=100;
        map['D']=500;
        map['M']=1000;
        int res=0;
        int n=s.size();
        if(n==1){
            return map[s[0]];
        }
        for (int i = 0; i < n-1; i++)
        {
            int tmp=map[s[i]];
            if((s[i]=='I'&&(s[i+1]=='V'||s[i+1]=='X'))||(s[i]=='X'&&(s[i+1]=='L'||s[i+1]=='C'))||(s[i]=='C'&&(s[i+1]=='D'||s[i+1]=='M'))){
                res+=map[s[i+1]]-tmp;
                i++;
            }
            else{
                res+=tmp;
            }

        }
        if((s[n-2]=='I'&&(s[n-1]=='V'||s[n-1]=='X'))||(s[n-2]=='X'&&(s[n-1]=='L'||s[n-1]=='C'))||(s[n-2]=='C'&&(s[n-1]=='D'||s[n-1]=='M'))){
            return res;
        }
        else{
            return res+map[s[n-1]];
        }

    }
};
// @lc code=end



/*
// @lcpr case=start
// "III"\n
// @lcpr case=end

// @lcpr case=start
// "IV"\n
// @lcpr case=end

// @lcpr case=start
// "IX"\n
// @lcpr case=end

// @lcpr case=start
// "LVIII"\n
// @lcpr case=end

// @lcpr case=start
// "MCMXCIV"\n
// @lcpr case=end

 */

