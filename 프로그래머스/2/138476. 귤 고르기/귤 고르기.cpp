#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    unordered_map<int, int> tsize_num;
    vector<int> nums;
    
    for(int i = 0; i < tangerine.size(); i++)
    {
        if(tsize_num.find(tangerine[i]) != tsize_num.end())
        {
            tsize_num[tangerine[i]]++;
            
        }
        else
        {
            tsize_num[tangerine[i]] = 1;
        }
    }
    
    for(auto tan : tsize_num)
    {
        nums.push_back(tan.second);
    }
    sort(nums.begin(), nums.end(), greater<>());
    
    int idx = 0;
    while(k > 0)
    {
        k -= nums[idx++];
        answer++;
    }
    
    return answer;
}