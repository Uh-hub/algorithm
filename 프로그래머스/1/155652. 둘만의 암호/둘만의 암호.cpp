#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    vector<bool> is_skip(26, false);
    //skip에 해당하면 true로, 아니면 false로 is_skip 배열에 저장
    for(char ch : skip)
    {
        is_skip[ch-'a'] = true;
    }
    
    for(char c : s)
    {
        int moved = 0;
        while(moved < index)
        {
            c++;
            //z를 넘어갔다면 a로 변경
            if(c > 'z') c = 'a';
            //is_skip에 해당 문자가 true로 저장되어 있다면 moved를 올리지 말고 바로 continue
            if(is_skip[c-'a']) continue;
            moved++;
        }
        answer += c;
    }
    
    return answer;
}