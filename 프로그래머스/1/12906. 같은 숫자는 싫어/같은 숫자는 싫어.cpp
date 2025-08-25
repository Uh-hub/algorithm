#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    answer = arr;
    // for(int i = 0; i < arr.size(); i++)
    // {
    //     if(answer.empty())
    //     {
    //         answer.push_back(arr[i]);
    //     }
    //     else if(answer.back() != arr[i])
    //     {
    //         answer.push_back(arr[i]);
    //     }
    // }
    

    return answer;
}