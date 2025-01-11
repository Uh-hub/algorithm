#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> tmp;
    int i, j, k = 0;
    
    for(int t = 0; t < commands.size(); t++){
        i = commands[t][0];
        j = commands[t][1];
        k = commands[t][2];
        for(int r = i-1; r < j; r++){
            tmp.push_back(array[r]);
        }
        sort(tmp.begin(), tmp.end());
        answer.push_back(tmp[k-1]);
        tmp.clear();
    }
    return answer;
}