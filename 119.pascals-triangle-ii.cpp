// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=119 lang=cpp
 * @lcpr version=30117
 *
 * [119] 杨辉三角 II
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
    vector<int> getRow(int rowIndex) {
        vector<int> curvec(rowIndex + 1, 1);
        vector<int> prevvec(rowIndex + 1, 1);
        
        for (int i = 2; i <= rowIndex; i++) {
            for (int j = 1; j < i; j++) {
                curvec[j] = prevvec[j - 1] + prevvec[j];
            }
            prevvec = curvec;
        }
        
        return curvec;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 3\n
// @lcpr case=end

// @lcpr case=start
// 0\n
// @lcpr case=end

// @lcpr case=start
// 1\n
// @lcpr case=end

 */

