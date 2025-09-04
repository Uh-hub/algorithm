#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int s_idx = 0;

bool cmd(vector<int> a, vector<int> b)
{
    return a[s_idx] < b[s_idx];
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    map<string, int> col = {{"code", 0}, {"date", 1}, {"maximum", 2}, {"remain", 3}};
    //조건 만족 추출
    int idx = col[ext];
    for(int i = 0; i < data.size(); i++)
    {      
        if(data[i][idx] < val_ext)
        {
            answer.push_back(data[i]);
        }
    }
    //정렬
    s_idx = col[sort_by];
    sort(answer.begin(), answer.end(), cmd);
    return answer;
}