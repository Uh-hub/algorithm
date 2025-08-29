#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int pre_n_size = nums.size();
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    if(pre_n_size / 2 > nums.size())
    {
        answer = nums.size();
    }
    else
    {
        answer = pre_n_size / 2;
    }
    return answer;
}