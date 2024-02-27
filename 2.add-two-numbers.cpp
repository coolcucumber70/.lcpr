/*
 * @lc app=leetcode.cn id=2 lang=cpp
 * @lcpr version=30117
 *
 * [2] 两数相加
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

//* Definition for singly-linked list.
// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *res = new ListNode(0);
        ListNode *ptr = res;
        ListNode *first = l1;
        ListNode *second = l2;
        int dev = 0;
        while (first != nullptr && second != nullptr)
        {
            ptr->next = new ListNode((first->val + second->val + dev) % 10);
            ptr = ptr->next;
            dev = (first->val + second->val + dev) / 10;
            first=first->next;
            second=second->next;
        }
        while (first != nullptr)
        {
            ptr->next = new ListNode((first->val + dev) % 10);
            ptr = ptr->next;
            dev = (first->val + dev) / 10;
            first=first->next;
            
        }
        while (second != nullptr)
        {
            ptr->next = new ListNode((second->val + dev) % 10);
            ptr = ptr->next;
            dev = (second->val + dev) / 10;
            second=second->next;
        }
        if (dev!=0){
            ptr->next=new ListNode(dev%10);
        }
        return res->next;
    }
};
// @lc code=end

/*
// @lcpr case=start
// [2,4,3]\n[5,6,4]\n
// @lcpr case=end

// @lcpr case=start
// [0]\n[0]\n
// @lcpr case=end

// @lcpr case=start
// [9,9,9,9,9,9,9]\n[9,9,9,9]\n
// @lcpr case=end

 */
