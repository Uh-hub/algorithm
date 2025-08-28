#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    for(int i = 0; i < photo.size(); i++)
    {
        for(int j = 0; j < photo[i].size(); j++)
        {
            auto it = find(name.begin(), name.end(), photo[i][j]);
            if(it == name.end())
            {
                if(j == 0) 
                {
                    answer.push_back(0);
                }
            }
            else
            {
                int idx = it - name.begin();
            if(j == 0)
            {
                answer.push_back(yearning[idx]);
            }
            else
            {
                answer[i] += yearning[idx];
            }
            }
            
            
        }
    }
    return answer;
}