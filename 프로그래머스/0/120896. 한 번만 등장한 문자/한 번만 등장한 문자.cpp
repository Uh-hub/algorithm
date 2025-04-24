#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

string solution(string s) {
    string answer = "";
    map<char, int> words;
    set<char> sorted_words;
    for(auto word : s)
    {
        words[word]++;
    }
    for(auto word : words)
    {
        if(word.second == 1)
        {
            sorted_words.insert(word.first);
        }
    }
    for(auto word : sorted_words)
    {
        answer += word;
    }
    
    return answer;
}