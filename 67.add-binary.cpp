// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=67 lang=cpp
 * @lcpr version=30117
 *
 * [67] 二进制求和
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
    string addBinary(string a, string b)
    {
        int a_point = a.size() - 1;
        int b_point = b.size() - 1;
        string c;
        int flag = 0;
        while (a_point >= 0 && b_point >= 0)
        {

            if (a[a_point] + b[b_point] - '0' - '0' + flag == 0)
            {
                c.insert(c.begin(), '0');
                flag = 0;
            }
            else if (a[a_point] + b[b_point] - '0' - '0' + flag == 1)
            {
                c.insert(c.begin(), '1');
                flag = 0;
            }
            else if (a[a_point] + b[b_point] - '0' - '0' + flag == 2)
            {
                c.insert(c.begin(), '0');
                flag = 1;
            }
            else
            {
                c.insert(c.begin(), '1');
                flag = 1;
            }
            a_point--;
            b_point--;
        }
        while (a_point >= 0 )
        {
            if (a[a_point] - '0' + flag == 2)
            {
                c.insert(c.begin(), '0');
                flag = 1;
                a_point--;
            }
            else 
            {
                string tmp1=std::to_string(a[a_point] - '0' + flag);
                c.insert(0, tmp1);
                flag = 0;
                string tmp=a.substr(0, a_point);
                c.insert(0, tmp);
                return c;
            }
        }
        while (b_point >= 0 )
        {
            if (b[b_point] - '0' + flag == 2)
            {
                c.insert(c.begin(), '0');
                flag = 1;
                b_point--;
            }
            else 
            {
                string tmp1=std::to_string(b[b_point] - '0' + flag);
                c.insert(0, tmp1);
                flag = 0;
                string tmp = b.substr(0, b_point );
                c.insert(0, tmp);
                return c;
            }
        }
        if (flag == 1)
        {
            c.insert(c.begin(), '1');
        }
        return c;
    }
};
// @lc code=end

/*
// @lcpr case=start
// "11"\n"1"\n
// @lcpr case=end

// @lcpr case=start
// "1010"\n"1011"\n
// @lcpr case=end

 */
