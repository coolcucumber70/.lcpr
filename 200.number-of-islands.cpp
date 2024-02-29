// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=200 lang=cpp
 * @lcpr version=30117
 *
 * [200] 岛屿数量
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
    int numIslands(vector<vector<char>> &grid)
    {
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    count++;
                    bfs(grid, i, j);
                }
            }
        }
        return count;
    }
    void bfs(vector<vector<char>> &grid, int i, int j)
    {
        queue<pair<int, int>> que;
        int m = grid.size();
        int n = grid[0].size();
        que.push(make_pair(i, j));
        while (!que.empty())
        {
            pair<int, int> tmp = que.front();
            que.pop();
            if (tmp.first + 1 < m  && grid[tmp.first + 1][tmp.second] == '1')
            {
                grid[tmp.first + 1][tmp.second] = '0';
                que.push(std::make_pair(tmp.first + 1, tmp.second));
            }
            if ( tmp.second + 1 < n && grid[tmp.first][tmp.second + 1] == '1')
            {
                grid[tmp.first][tmp.second + 1] = '0';
                que.push(std::make_pair(tmp.first, tmp.second + 1));
            }
            if (tmp.first -1 >=0  && grid[tmp.first - 1][tmp.second] == '1')
            {
                grid[tmp.first - 1][tmp.second] = '0';
                que.push(std::make_pair(tmp.first - 1, tmp.second));
            }
            if ( tmp.second - 1 >=0 && grid[tmp.first][tmp.second - 1] == '1')
            {
                grid[tmp.first][tmp.second - 1] = '0';
                que.push(std::make_pair(tmp.first, tmp.second - 1));
            }
        }
    }
};
// @lc code=end

/*
// @lcpr case=start
// [["1","1","1","1","0"],["1","1","0","1","0"],["1","1","0","0","0"],["0","0","0","0","0"]]\n
// @lcpr case=end

// @lcpr case=start
// [["1","1","0","0","0"],["1","1","0","0","0"],["0","0","1","0","0"],["0","0","0","1","1"]]\n
// @lcpr case=end

 */
