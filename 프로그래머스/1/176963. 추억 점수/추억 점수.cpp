#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer(photo.size(), 0);
    unordered_map<string, int> yearningmap;
    
    for(int i = 0; i < name.size(); i++)
    {
        yearningmap[name[i]] = yearning[i];
    }
    for(int i = 0; i < photo.size(); i++)
    {
        int yearning_sum = 0;
        for(int j = 0; j < photo[i].size(); j++)
        {
            answer[i] += yearningmap[photo[i][j]];
        }
    }

    return answer;
}