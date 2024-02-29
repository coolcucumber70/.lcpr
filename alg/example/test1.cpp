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
vector<vector<int>>res;
vector<int>ans;
void generateBinaryNumber(int n){
    if(n==0){
        res.push_back(ans);
        return;
    }
    for (int i = 0; i < 2; i++)
    {
        ans.push_back(i);
        generateBinaryNumber(n-1);
        ans.pop_back();
    }
    return ;
}
int main(){
    generateBinaryNumber(3);
    return 0;
}
/* 标准的回溯写法，前面return了，也就直接跳出了 */