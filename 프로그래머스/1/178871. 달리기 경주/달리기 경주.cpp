#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    
    vector<string> answer;
    unordered_map<string, int> ans_name;
    unordered_map<int, string> ans_rank;
    
    for(int i = 0; i < players.size(); i++)
    {
        ans_name[players[i]] = i;
        ans_rank[i] = players[i];
    }
    
    for(int i = 0; i < callings.size(); i++)
    {
        int idx = ans_name[callings[i]];
        ans_name[callings[i]]--;
        
        string name = ans_rank[idx-1];
        ans_name[name]++;
        
        string up_name = ans_rank[idx];
        ans_rank[idx] = ans_rank[idx-1];
        ans_rank[idx-1] = up_name;
    }
    
    for(int i = 0; i < ans_rank.size(); i++)
    {
        answer.push_back(ans_rank[i]);
    }
    
    return answer;
}