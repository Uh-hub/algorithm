#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    unordered_map<string, int> comple_num;
    for(string com : completion)
    {
        if(comple_num.find(com) == comple_num.end())
        {
            comple_num[com] = 1;
        }
        else
        {
            comple_num[com]++;
        }
    }
    
    for(string par : participant)
    {
        if(comple_num.find(par) == comple_num.end())
        {
            answer = par;
            break;
        }
        else
        {
            comple_num[par]--;
            if(comple_num[par] < 0)
            {
                answer = par;
                break;
            }
        }
    }
    
    return answer;
}