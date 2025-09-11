#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    unordered_map<char, int> found;
    
    for(string word : targets)
    {
        int sum = 0;
        for(int i = 0; i < word.length(); i++)
        {
            int min_idx = 100;
            if(found.find(word[i]) != found.end())
            {
                sum += found[word[i]];
            }
            else
            {
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
                    found[word[i]] = min_idx;
                    sum += min_idx;
                }
            }
        }
        answer.push_back(sum);
    }
    return answer;
}
