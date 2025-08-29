#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;

int solution(vector<int> nums)
{
    unordered_set<int> n(nums.begin(), nums.end());
    
    return min(n.size(), nums.size()/2);
}