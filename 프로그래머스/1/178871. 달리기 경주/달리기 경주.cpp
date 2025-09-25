#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    
    unordered_map<string, int> ans_name;
    
    for(int i = 0; i < players.size(); i++)
    {
        ans_name[players[i]] = i;
    }
    
    for(int i = 0; i < callings.size(); i++)
    {
        int idx = ans_name[callings[i]];
        ans_name[callings[i]]--;
        ans_name[players[idx-1]]++;
        
        swap(players[idx], players[idx-1]);
    }
    

    return players;
}