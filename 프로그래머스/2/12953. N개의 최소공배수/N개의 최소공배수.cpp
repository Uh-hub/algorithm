#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {
    int max_idx = 1;
    
    int max_num = *max_element(arr.begin(), arr.end());
    bool bexist = false;
    while(!bexist)
    {
        bexist = true;
        for(int num : arr)
        {
            if((max_num * max_idx) % num != 0)
            {
                bexist = false;
            }
        }
        max_idx++;
    }
    return max_num * (max_idx-1);
}