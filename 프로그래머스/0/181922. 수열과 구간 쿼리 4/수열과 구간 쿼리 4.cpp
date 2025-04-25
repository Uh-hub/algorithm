#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(int j = 0; j < queries.size(); j++)
    {
        for(int i = queries[j][0]; i <= queries[j][1]; i++)
        {
            if(i % queries[j][2] == 0)
            {
                arr[i]++;
            }
        }
    }
    for(int i = 0; i < arr.size(); i++)
    {
        answer.push_back(arr[i]);
    }
    return answer;
}