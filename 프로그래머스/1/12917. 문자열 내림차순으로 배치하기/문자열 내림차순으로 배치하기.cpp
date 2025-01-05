#include <string>
#include <vector>
#include <algorithm>


using namespace std;

string solution(string s) {
    string answer = "";
    vector<char> sort_s;
    for(int i = 0; i < s.length(); i++){
        sort_s.push_back(s[i]);
    }
    sort(sort_s.rbegin(), sort_s.rend());
    for(int i = 0; i < sort_s.size(); i++){
        answer+= sort_s[i];
    }
    return answer;
}