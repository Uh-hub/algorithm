#include <string>
#include <vector>
#include <algorithm>


using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    for(string word : targets)
    {
        
        int sum = 0;
        for(int i = 0; i < word.length(); i++)
        {
            int min_idx = 100;
            for(int j = 0; j < keymap.size(); j++)
            {
                auto idx = keymap[j].find(word[i]);
                if(idx != string::npos)
                {
                    min_idx = (idx + 1 >= min_idx ? min_idx : idx + 1);
                }
            }
            if(min_idx == 100)
            {
                sum = -1;
                break;
            }
            else
            {
                sum += min_idx;
            }
        }
        answer.push_back(sum);
    }
    
    
    
    return answer;
}